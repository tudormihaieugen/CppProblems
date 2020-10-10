#include <iostream.h>
#include <C:\Tudor Mihai Eugen\Problema 3.cpp>

struct matematica
{
	struct matrice1
	{
		float A[2][2];
		char cod;
	}VAR1;
	struct tablou
	{
		float TAB[2];
		char cod;
	}VAR2;
	float NUMAR;
};

void inmultire(struct matematica MAT)
{
	for(int i=0;i<2;i++)
	{
		MAT.VAR1.A[i][0]*=MAT.NUMAR;
		cout<< MAT.VAR1.A[i][0]<<" ";
	}
}

char* adunare(struct matematica MAT, float valoare)
{
	float SUMA=0;
	for(int i=0;i<2;i++)
	{
		SUMA+=MAT.VAR2.TAB[i];
	}
	if(SUMA>valoare)
		return "Mai mare";
	else
		return "Mai mic";
}

void main()
{	
	float valoare;
	struct matematica MAT;
	cout<<"Nr. matematica=";
	cin>>MAT.NUMAR;
	cout<<"Nr. de comparat=";
	cin>>valoare;
	citire_matrice(2,2,MAT.VAR1.A);
	citire_tab(2,MAT.VAR2.TAB);
	inmultire(MAT);
	cout<<adunare(MAT, valoare)<<endl;
}