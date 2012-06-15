#include <iostream>

using namespace std;

int main(){
    //Slinga utan uppdatering:
    for(int i = 1; i <= 16; ){
        i = i*2;
        cout << i << endl;
    }
    int moo = 64;
    //Slinga utan initialisering:
    for(; moo <= 512; moo *= 2){
        cout << moo << endl;
    }
    //Oändlig slinga:
    for(;;){
        cout << moo << endl;
        moo *= 2;

        //Vi kan dock använda nyckelordet 'break'
        //för att bryta oss ur en slinga:
        if(moo > 4096){
            break;
        }
    }
}
