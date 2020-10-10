#include <iostream.h>
#include <malloc.h>

struct dispozitive
		{float diametru_maxim;
		long double lungime_de_prelucrare;
		char cod;
		}*strung, gaurit, frezat;


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
	strung=(struct dispozitive *)malloc(sizeof(struct dispozitive));
	
	cin>>strung->diametru_maxim;
	cin>>gaurit.diametru_maxim;
	cin>>frezat.diametru_maxim;

	rezultat=comparatie(strung->diametru_maxim,gaurit.diametru_maxim);
	cout<<rezultat<<endl;
	cout<<sizeof(gaurit)<<endl;
	cout<<sizeof(struct dispozitive)<<endl;
	cout<<sizeof(gaurit.diametru_maxim)<<endl;
	cout<<sizeof(gaurit.lungime_de_prelucrare)<<endl;
	cout<<sizeof(gaurit.cod)<<endl;
	cout<<strung<<endl;
	cout<<strung->diametru_maxim<<endl;
}
