/*
Zadanie z wyk�ad�w - Podstawy programowania
Napisz program, kt�ry:
(1) Odczytuje z klawiatury bie��c� dat� (3 zmienne: dzie�, nr miesi�ca, rok
(2) Odczytuje z klawiatury dat� urodzenia u�ytkownika (r�wnie� 3 zmienne)
(3) Oblicza wiek u�ytkownika (tj. liczb� uko�czonych lat)
(4) Wyprowadza komunikat o wyniku oblicze�

Wykona� Jakub Gadecki
*/

#include <iostream>

using namespace std;

int bd,bm,br,ud,um,ur,w;


int main(){
	//Sekcja wprowadzania biezacej daty
	cout<<"\nPodaj biezaca date  osobno dzien, miesiac, rok i za kazdym razem potwierdz przyciskiem ENTER \n";
	cout<<"\nPodaj biezacy dzien: ";
	cin>>bd;
	cout<<"\nPodaj biezacy miesiac: ";
	cin>>bm;
	cout<<"\nPodaj biezacy rok: ";
	cin>>br;
	//koniec
	//Sekcja wprowadzania daty urodzin
	cout<<"\nPodaj date swoich urodzin osobno dzien, miesiac, rok i za kazdym razem potwierdz przyciskiem ENTER \n";
	cout<<"\nPodaj dzien urodzin: ";
	cin>>ud;
	cout<<"\nPodaj miesiac urodzin: ";
	cin>>um;
	cout<<"\nPodaj rok urodzin: ";
	cin>>ur;
	//koniec
	w = br - ur; //obliczenie wieku
	//sekcja okreslajaca czy biezacy rok wliczamy do wyniku
	if (bd<ud && bm<um){
		w = --w;
	}
	//koniec
	cout<<"Twoj wiek to "<<w<<" !"; //wyswietlenie wyniku
	
	
	
	
	
	cout<<"\n\n\n"; //dodatkowe odstepy, czysto estetyczne
	system("PAUSE"); //wstrzymujemy program, czekamy na reakcje
	return 0; //czynimy zadosc funkcji main()
}
