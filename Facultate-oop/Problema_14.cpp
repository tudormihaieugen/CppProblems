#include <iostream.h>
#include <string.h>
#include <math.h>

#define pi 3.14158

class surub
{
protected: double metric;
		   double lungime;
public: surub(double A, double B)
		{
			metric=A;
			lungime=B;
		}
		void rezultate_surub()
		{
			cout<<"Metric surub="<<metric<<endl;
			cout<<"Lungime surub="<<lungime<<endl<<endl;
		}
		double volum()
		{
			return pi*pow(metric,2)/4*lungime;
		}
		friend double siguranta(surub D, double coef);
};

class mecanism: public surub
{
protected: double cursa;
		   double pas;
		   double diametru;
public: mecanism(double R, double T, double S):surub(4.03, 24.03)
		{
			cursa=R;
			pas=T;
			diametru=S;
		}
		double volum()
		{
			double v1, v2, suma;
			v1=surub::volum();
			cout<<"Volumu11 din mecanism pentru surub="<<v1<<endl;
			v2=pi*pow(diametru,2)/4*cursa;
			cout<<"Volumul2 din mecanism pentru surub="<<v2<<endl;
			suma=v1+v2;
			cout<<"Suma="<<suma<<endl<<endl;
			return suma;
		}
};

double siguranta(surub D, double coef)
{
	return D.metric *coef;
}

void main()
{
	surub A(4.03,24.03);
	double rez=A.volum();
	cout<<"Volum surub:"<<rez<<endl;

	mecanism MEC(23.55,4.5,32.03);
	cout<<"Pentru mecanism:"<<endl;
	double RR=MEC.volum();

	double S1=siguranta(A,1.95);
	cout<<"Siguranta surub="<<S1<<endl;
	double S2=siguranta(MEC, 1.25);
	cout<<"Siguranta mecanism="<<S2<<endl;
}