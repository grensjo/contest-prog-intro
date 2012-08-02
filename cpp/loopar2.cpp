#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cout << "n = ";
    cin >> n;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    //Nu har vi läst in all indata, och börjar loopen!
    //a + (n - a%n)%n är den första multipeln av n som är över a
    //Försök övertyga dig själv om varför det är så.
    //Detta fungerar dock enbart för positiva tal
    for(int index = a + (n - a%n)%n; index <= b; index = index+n){
        cout << index << endl;
    }
}
