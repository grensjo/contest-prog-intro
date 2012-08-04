#include <iostream>

using namespace std;

int main(){
	//Vi deklarerar här en array som innehåller 5 heltal.
	int heltal[5];
	cout << "Skriv in fem heltal: " << endl;
	for(int i = 0; i < 5; i++){
		//För att läsa in något kan vi använda följande syntax:
		cin >> heltal[i];
	}
	int summa = 0;
	int produkt = 1;
	for(int i = 0; i < 5; i++){
		//array[index] komer "hämta ut" ett element
		//ur arrayen med ett visst index.
		summa += heltal[i];
		produkt *= heltal[i];
	}
	cout << "Talens summa är " << summa << " och produkten " << produkt << endl;
}