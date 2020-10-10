#include <iostream.h>

class dispozitive
{
	long double valoare_masurata;
	int clasa_precizie;
	double pret;

	public: dispozitive(){}
	~dispozitive(){}

	dispozitive(long double M, int A, double P)
	{
		valoare_masurata=M;
		clasa_precizie=A;
		pret=P;
	}

	dispozitive(const dispozitive &G)
	{
		valoare_masurata=G.valoare_masurata;
		clasa_precizie=G.clasa_precizie;
		pret=G.pret;
	}

	void afisare()
	{
		cout<<endl;
		cout<<"Valoare masurata="<<valoare_masurata<<endl;
		cout<<"Clasa precizie="<<clasa_precizie<<endl;
		cout<<"Pret="<<pret<<endl;
	}

	long double media(dispozitive d2, dispozitive d3)
	{
		return (valoare_masurata+d2.valoare_masurata+d3.valoare_masurata)/3;
	}

	dispozitive nou(dispozitive d2, dispozitive d3)
	{
		dispozitive d;
		d.valoare_masurata=valoare_masurata+d2.valoare_masurata;
		d.clasa_precizie=d2.clasa_precizie;
		d.pret=pret+d2.pret+d3.pret;
		return d;
	}

	dispozitive operator *(dispozitive diametre)
	{
		dispozitive d;
		d.valoare_masurata=valoare_masurata+diametre.valoare_masurata;
		d.clasa_precizie=diametre.clasa_precizie;
		d.pret=pret+diametre.pret;
		return d;
	}

	dispozitive operator +(dispozitive lungimi);
};

dispozitive dispozitive :: operator +(dispozitive lungimi)
{
	dispozitive d;
	d.valoare_masurata=valoare_masurata+lungimi.valoare_masurata;
	if(lungimi.clasa_precizie!=0)
		d.clasa_precizie=clasa_precizie/lungimi.clasa_precizie;
	else
		d.clasa_precizie=0;
	d.pret=lungimi.pret;
	return d;
}

void main()
{
	dispozitive lungimi(121.46,6,0.01);
	dispozitive diametre(85.78,5,5.25);
	dispozitive alezaje(22.2,15,20.23);

	cout<<"Lungimi:";
	lungimi.afisare();
	cout<<endl;

	cout<<"Diametre";
	diametre.afisare();
	cout<<endl;

	cout<<"Alezaje:";
	alezaje.afisare();
	cout<<endl;

	long double rezultat=lungimi.media(diametre,alezaje);
	cout<<"Media="<<rezultat<<endl<<endl;

	cout<<sizeof(lungimi)<<endl;
	cout<<sizeof(diametre)<<endl;
	cout<<sizeof(alezaje)<<endl;
	cout<<&lungimi<<endl;
	cout<<&diametre<<endl;
	cout<<&alezaje<<endl<<endl;

	dispozitive comparator=lungimi.nou(diametre, alezaje);
	cout<<"Comparator:";
	comparator.afisare();
	cout<<endl;

	dispozitive comparator2=lungimi*diametre;
	cout<<"Comparator2(Lungimi&Diametre):";
	comparator2.afisare();
	cout<<endl;

	dispozitive comparator3=alezaje+lungimi;
	cout<<"Comparator3(Alezaje&Lungimi):";
	comparator3.afisare();
	cout<<endl;
}