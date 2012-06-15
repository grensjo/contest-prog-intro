//Inkluderar cin och cout
#include <iostream>

using namespace std;

int main(){
    //Vi börjar med att skriva ut en sträng med cout
    cout << "Skriv ett heltal!";
    //endl betyder att den ska skriva ut en nyrad
    cout << endl;

    int tal1; //Just nu fylld med slumpmässig data
    cin >> tal1; //Läser in nästa heltal från terminalen till tal1

    //Man kan skriva ut flera saker samtidigt:
    cout << "Skriv ett till heltal!" << endl;

    //Läs in nästa heltal i variabeln tal2
    int tal2;
    cin >> tal2;

    //Vi kan skriva ut heltal också, blandat med strängar
    cout << "Talens summa blev: " << (tal1+tal2) << endl;
}
