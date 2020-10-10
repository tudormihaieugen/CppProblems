#include <iostream.h>
#include <math.h>

struct complex
{ 
	float Real;
	float Imaginar;

	double modul();
	complex adunare(complex z1)
	{
		complex z3;
		z3.Real=z1.Real+Real;
		z3.Imaginar=z1.Imaginar+Imaginar;
		return z3;
	}
	double ADUN(complex z2, double VALOARE);

}z1,z2;

inline double complex::modul() //functia modul apartine structurii complex
{
	return sqrt(pow(Real,2)+pow(Imaginar,2));
}

inline double complex::ADUN(complex z2, double VALOARE)
{
	return Real+VALOARE*z2.Imaginar;
}

void main()
{
	cout<<"Re(z1)="; cin>>z1.Real;
	cout<<"Im(z1)="; cin>>z1.Imaginar;
	cout<<"Re(z2)="; cin>>z2.Real;
	cout<<"Im(z2)="; cin>>z2.Imaginar;

	cout<<"|z1|="<<z1.modul()<<endl;
	cout<<"|z2|="<<z2.modul()<<endl;

	complex z;
	z=z2.adunare(z1);
	cout<<"z="<<z.Real<<"+"<<z.Imaginar<<"*i"<<endl;

	cout<<"ADUN="<<z1.ADUN(z2,17.3)<<endl;
}