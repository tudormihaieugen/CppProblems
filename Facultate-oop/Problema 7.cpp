#include <iostream.h>
#include <malloc.h>

union facultate
{
	int student;
	int nr_loc;
	long double media;
}Mecanica, *Automatica;

char* comparare(int A, int B)
{
	if(A>B)
		return "Locuri ocupate";
	else
		return "Locuri libere";
}

void main()
{
	int cod, STUDENT;
	Automatica=(union facultate*)malloc(sizeof(union facultate));
	cout<<"Nr. octeti="<<sizeof(union facultate)<<endl;
	cout<<"Cod=";
	cin>>cod;
	switch(cod)
	{
		case 1: 
		{
			cout<<"Nr. de studenti="<<endl;
			cin>>Automatica->student;
			STUDENT=Automatica->student;
		} 

		case 2: 
		{
			cout<<"Nr. de locuri="<<endl;
			cin>>Automatica->nr_loc;
			
			cout<<comparare(STUDENT,Automatica->nr_loc)<<endl;
		} break;

		case 3:
		{
			cout<<"Media="<<endl;
			cin>>Automatica->media;
		} break;

		default: cout<<"Cod gresit"<<endl;
	}

}