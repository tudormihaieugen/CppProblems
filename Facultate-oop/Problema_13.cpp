#include <iostream.h>
#include <string.h>

class senzor
{
protected:double valoare;
		  double precizia;
		  char denumire[20];

public: void afisare()
		{
			cout<<"Valoare masurata: "<<valoare<<endl;
			cout<<"Precizie: "<< precizia<<endl;
			cout<<"Denumire: "<< denumire<<endl<<endl;
		}

	senzor(double R, double T, const char *nume1)
	{
		valoare=R;
		precizia=T;
		strcpy(denumire, nume1);
	}
};

class motor
{
protected: double curent;
		   double tensiune;
		   char tip[20];
		   
public: void afis()
		{
			cout<<"Curent: "<<curent<<endl;
			cout<<"Tensiune: "<<tensiune<<endl;
			cout<<"Tip: "<<tip<<endl<<endl;
		}
};

class sistem_mecatronic: public senzor, public motor
{
	protected: double pret;
			   int numar_buc;
			   char marime_reglata[20];
			   double precizia;

	public: void tiparire()
			{
				cout<<"Pret: "<<pret<<endl;
				cout<<"Nr. buc: "<<numar_buc<<endl;
				cout<<"Marime reglata: "<<marime_reglata<<endl;
				cout<<"Valoare masurata: "<<valoare<<endl;
				cout<<"Precizia: "<<precizia<<endl;
				cout<<"Precizia de baza: "<<senzor::precizia<<endl;
				cout<<"Curent: "<<curent<<endl<<endl;
			}

	sistem_mecatronic(double A, double B, double C, double D, const char *sistem, int X) : senzor(23.45, 1.4, "ultrasunete")
	{
		valoare=A;
		precizia=B;
		curent=C;
		pret=D;
		strcpy(marime_reglata, sistem);
		numar_buc=X;
	}
};

void main()
{
	sistem_mecatronic lungimi(124, 109, 103, 56.45,"lungimi",120);
	lungimi.tiparire();
	senzor distanta(145.2, 1.4, "ultrasunete");
	distanta.afisare();
}