#include <iostream.h>

class complex{	double Re;
		double Im;
		public: complex(){};
		complex(double A, double B)
		{
			Re=A;
			Im=B;
		}
		~complex(){};
		complex(const complex &G)
		{
			Re=G.Re;
			Im=G.Im;
		}
		void afisare()
		{
			cout<<"Real="<<Re<<endl;
			cout<<"Imaginar="<<Im<<endl;
		}
		complex scadere(complex z5)
		{
			complex S;
			S.Re=z5.Re-Re;
			S.Im=z5.Im-Im;
			return S;
		}
		complex impartire(complex z5)
		{
			complex imp;
			if(z5.Im!=0)
				imp.Re=Re/z5.Im;
			else
				imp.Re=0;

			if(z5.Re!=0)
				imp.Im=Im/z5.Re;

			return imp;
		}
};

void main()
{
	complex z6,z7;
	complex z4(12.5, 6.2);
	complex z5(2.6, 2.8);
	cout<<"z5"<<endl;
	z5.afisare();

	z6=z4.scadere(z5);
	cout<<"z6"<<endl;
	z6.afisare();

	z7=z4.impartire(z5);
	cout<<"z7"<<endl;
	z7.afisare();
}
