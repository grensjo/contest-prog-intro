#include <iostream>

using namespace std;

int main (){
    int summa = 0;
    for(int index = 0; index<100; index = index+1){
        int tal;
        cin >> tal;
        summa += tal;
    }
    cout << summa << endl;
}
