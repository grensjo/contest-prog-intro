#include <iostream>

using namespace std;

int main(){
    int tal = 5;
    //Likhetsoperatorn ger värdet sann om de två jämförda värdena är samma
    //Observera att likhetsoperatorn består av dubbla likhetstecken, till
    // skillnad från tilldelningsoperatorn.
    bool a = tal == 5;

    //På motsatt sätt fungerar olikhetsoperatorn
    bool b = tal != 4;

    //Större-än-operatorn kollar om ett tal är större eller mindre än ett annat
    bool c = tal > 2;
    bool d = tal < 2;

    //Dessa kan kombineras till större-eller-lika-med-operatorn:
    bool e = tal <= 5;
    bool f = tal >= 6;

    //Negationsoperatorn ! inverterar ett booleskt värde
    //Dvs !sant blir till falskt, och !falskt blir till sant
    bool g = !true;
    bool h = !(5 == 5);

    //Konjunktion ("och") finns också i C++ i form av &&-operatorn
    //Det gäller att a&&b == sant om och endast om både a och b är sanna
    bool i = true && true;
    bool j = true && false;

    //Disjunktion finns i två former. Dels den inklusiva disjunktionen
    //"eller" (ofta kallad "or") som skrivs ||...
    bool k = true || false;
    bool l = false || false;

    //...men också i form av exklusiv disjunktion (ofta kallad "xor"):
    //det ena eller det andra, men inte båda. Detta skrivs med ^
    bool m = true ^ false;
    bool n = true ^ true;

    //När ett booleskt värde skrivs ut betyder 0 falskt och 1 sant
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ';
    cout << e << ' ' << f << ' ' << g << ' ' << h << ' ';
    cout << i << ' ' << j << ' ' << k << ' ' << l << ' ';
    cout << m << ' ' << n << endl;
}
