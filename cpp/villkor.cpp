#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Skriv ett tal!" << endl;
    cin >> a;
    //If-satsen och allting inom måsvingarna kommer exekveras
    //om och endast om det booleska uttrycket är sant...
    if(a >= 0) {
        //Gör ingenting - a ska vara lika med a
    }
    //...annars kommer det inom "else" att exekveras
    else {
        a = -a;
    }
    cout << "Beloppet av ditt tal är " << a << endl;
}
