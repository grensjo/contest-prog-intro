#include <iostream>

using namespace std;

int main(){
	int antal;
	cout << "Hur många tal?" << endl;
	cin >> antal;
	//Vi deklarerar här en array med ett obestämt antal element
	int talen[antal];
	for(int i = 0; i < antal; i++){
		cout << "Skriv in tal " << (i + 1) << endl;
		cin >> talen[i];
	}

	cout << "Hur många talpar vill du byta plats på?" << endl;
	int platsbyten;
	cin >> platsbyten;
	for(int i = 0; i < platsbyten; i++){
		cout << "Vilka två index vill du byta plats på?" << endl;
		int a, b;
		//Vi läser in de två indexen vi ska byta plats på
		cin >> a >> b;
		//Vi sparar undan det ena av talen i en temporär variabel
		//för att kunna byta plats på dem
		int temp = talen[a];
		talen[a] = talen[b];
		talen[b] = temp;
	}
	cout << "Talen är nu: " << endl;
	for(int i = 0; i < antal; i++){
		cout << talen [i] << " ";
	}
	cout << endl;
}