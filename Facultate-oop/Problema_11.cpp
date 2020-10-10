#include <iostream.h>
#include <string.h>

class strunjire
{
	double viteza;
	double adaos;
	char tip[20];

	public:strunjire(){}
	strunjire(double v, double a, char* const nume)
	{
		viteza=v;
		adaos=a;
		strcpy(tip, nume);
	}
		~strunjire(){}

	strunjire(const strunjire &G)
	{
		viteza=G.viteza;
		adaos=G.adaos;
		strcpy(tip, G.tip);
	}

	void afisare()
	{
		cout<<endl;
		cout<<"Viteza de strunjire="<<viteza<<endl;
		cout<<"Adaos de prelucrare="<<adaos<<endl;
		cout<<"Tipul suprafetei="<<tip<<endl;
	}

	friend strunjire nou(strunjire s1, strunjire s2, strunjire s3);

	double operator &(strunjire s2)
	{
		return 0.3*(adaos+s2.adaos);
	}

	friend double operator +(strunjire s1, strunjire s2);
};

strunjire nou(strunjire s1, strunjire s2, strunjire s3)
{
	strunjire s;
	s.viteza=(s1.viteza+s2.viteza)/2;
	s.adaos=s1.adaos;
	strcpy(s.tip,s3.tip);
	return s;
}

double operator +(strunjire s1, strunjire s2)
{
	return 0.3*(s1.adaos+s2.adaos);
}

void main()
{
	strunjire S1(2.2, 1.92, "Interior");
	strunjire S2(3.1, 2.21, "Exterior");
	strunjire S3(2.3, 1.88, "Cilindrica");

	cout<<"Strunjire 1";
	S1.afisare();
	cout<<endl;

	cout<<"Strunjire 2";
	S2.afisare();
	cout<<endl;

	cout<<"Strunjire 3";
	S3.afisare();
	cout<<endl;

	strunjire S_nou=nou(S1, S2, S3);
	cout<<"Strunjire nou";
	S_nou.afisare();
	cout<<endl;

	double adresa=S2&S1;
	cout<<"Adresa:"<<adresa<<endl;

	double plus=S1+S2;
	cout<<"Plus:"<<plus<<endl;
}