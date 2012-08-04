#include <iostream>

using namespace std;

int main (){
    int summa = 0;
    for(int index = 0; index<100; index++){
        int tal;
        cin >> tal;
        summa += tal;
    }
    cout << summa << endl;
}
