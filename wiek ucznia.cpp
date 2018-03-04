/*
Zadanie z wyk³adów - Podstawy programowania
Napisz program, który:
(1) Odczytuje z klawiatury bie¿¹c¹ datê (3 zmienne: dzieñ, nr miesi¹ca, rok
(2) Odczytuje z klawiatury datê urodzenia u¿ytkownika (równie¿ 3 zmienne)
(3) Oblicza wiek u¿ytkownika (tj. liczbê ukoñczonych lat)
(4) Wyprowadza komunikat o wyniku obliczeñ

Wykona³ Jakub Gadecki
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
