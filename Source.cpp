#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char mesaj[100], ch; //declaram mesajul pe care il dorim a fi codificat, iar ch va reprezenta fiecare litera din mesaj pe rand
	int i, key; // declaram variabila i si cheia
	cout << "Introduceti mesajul care se vrea a fi criptat: " << endl;
	cin>>mesaj; //citim mesajul
	cout << "Introduceti cheia: " << endl;//se introduce cheia
	cin >> key;//citim cheia
	for (i = 0; mesaj[i] != '\0'; ++i) //se aplica transformarea fiecarui caracter
	{ //mesaj[i]!='\0' inseamna ca se ajunge la sfarsitul sirului
		ch = mesaj[i];//se atribuie lui ch fiecare litera din mesaj pe rand
		if (ch >= 'a' && ch <= 'z') //daca litera din mesaj este mai mare decat caracterul a mic si mai mica decat caracterul z mic
		{
			ch = ch + key;// literei corespunzatoare din mesaj i se va aplica cheia 
			if (ch > 'z') //daca litera este mai mare decat z mic
			{
				ch = ch - 'z' + 'a' - -1;
			}
			mesaj[i] = ch;// i se atribuie fiecarei litere din mesaj, noua litera dupa ce se aplica cheia
		}
		else if (ch >= 'A' && ch <= 'Z')// daca litera din mesaj este mai mare decat caracterul a mare si mai mica decat caracterul z mare
		{
			ch = ch + key;//se aplica cheia 
			//daca caracterul introdus "depășește", de exemplu, z sau Z, face o buclă, scăzând valoarea lui "z" și adăugând valoarea lui "a" -1, astfel încât caracterul rezultat să fie din nou unul din intervalul selectat de a-z sau A-Z.
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			mesaj[i] = ch;
		}
	}
	cout << "Mesajul criptat este: " << mesaj << endl;
	return 0;
}