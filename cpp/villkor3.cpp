#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Mata mig med ett heltal, tack: ";
    cin >> a;

    bool delbartmed2 = (a%2 == 0);
    bool delbartmed3 = (a%3 == 0);
    
    if(delbartmed2 && delbartmed3){
        cout << "Ditt tal är delbart med både 2 och 3! :D" << endl;
    } else if(delbartmed2){
        cout << "Ditt tal är delbart med 2, men inte med 3." << endl;
    } else if(delbartmed3){
        cout << "Ditt tal är delbart med 3, men inte med 2." << endl;
    } else{
        cout << "Ditt tal är varken delbart med 2 eller 3. :(" << endl;
    }
}
