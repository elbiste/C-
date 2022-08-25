#include <iostream>
using namespace std;

int main() {
	int dato, i;
	char texto [20]={'\0'} ;
	cout<<"Teclee un numero ";
	cin>>dato;
	fflush(stdin);
	cout<<"Teclee un texto ";
	gets(texto);
	cout<<"Usted tecleo el texto ";
	for(i=0; i<20; i++)
	{
		cout<<texto[i];
	}
	system ("PAUSE");
}
