#include <iostream>
//När man använder sig av strängar i sina program bör man också inkludera
//string ur standardbiblioteket.
#include <string>

using namespace std;

int main(){
    int age;
    cout << "Hur gammal var du detta datum 2012?" << endl;
    cin >> age;

    string answer;
    cout << "Har du fyllt år detta år? (ja/nej)" << endl;
    cin >> answer;

    if(answer == "ja"){
        cout << "Du föddes år " << 2012-age << endl;
    } else if(answer == "nej") {
        cout << "Du föddes år " << 2012-age-1 << endl;
    } else {
        cout << "Jag sa ju åt dig att skriva ja eller nej.. :(";
    }
}
