#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Hur gammal är du?" << endl;
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