#include <iostream>

using namespace std;

int main(){
    //Deklarerar två heltal samtidigt!
    int a, b;
    cout << "Skriv in två heltal: ";
    cin >> a >> b;
    //Additionsoperatorn + adderar tal
    int summa = a+b;
    //Subraktionsoperatorn - subtraherar tal
    int differens = a-b;
    //Multiplikationsoperatorn * multiplicerar tal
    int produkt = a*b;
    //Divisionsoperatorn delar två tal, men fungerar
    //lite speciellt på heltal. Istället för att ge
    //det exakta svaret (som inte alltid är ett heltal)
    //så avrundar den till närmsta heltal mot noll.
    int heltalsKvot = a/b;
    //Restoperatorn räknar ut resten när ett tal a
    //delas med ett tal b
    int rest = a%b;
    cout << "Summa: " << summa << endl;
    cout << "Differens: " << differens << endl;
    cout << "Produkt: " << produkt << endl;
    cout << "Heltals-kvot: " << heltalsKvot << endl;
    cout << "Resten vid division: " << rest << endl;
}
