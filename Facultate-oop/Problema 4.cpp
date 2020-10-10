#include <iostream.h>

struct dispozitive
		{float diametru_maxim;
		long double lungime_de_prelucrare;
		char cod;
		}strung, gaurit, frezat;


char comparatie(float A, float B)
{
	if(A>B)
		return 'S';
	else
		return 'G';
}

void main()
{
	char rezultat;
	
	cin>>strung.diametru_maxim;
	cin>>gaurit.diametru_maxim;
	cin>>frezat.diametru_maxim;

	rezultat=comparatie(strung.diametru_maxim,gaurit.diametru_maxim);
	cout<<rezultat<<endl;
}
