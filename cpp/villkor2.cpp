#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Skriv in ett heltal: ";
    cin >> a;
    int originalA = a; //Vi sparar ursprungsvärdet
    if(a == 1){
        a = a;
    }
    //Vi utnyttjar här att om resten vid division med 2 är 0
    //så är talet jämnt.
    else if(a % 2 == 0){
        a = a / 2;
    } else {
        a = 3 * a + 1;
    }
    cout << "f(" << originalA << ") = " << a << endl;
}
