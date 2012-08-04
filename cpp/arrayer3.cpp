#include <iostream>
#include <string> 

using namespace std;

//Vi deklarerar här en sträng-array med fyra element
string directions[] = {"norr", "öster", "söder", "väster"};

//Arrayer med förflyttningen för varje väderstreck
int deltaX[] = {0, 1, 0, -1};
int deltaY[] = {1, 0, -1, 0};

//Vi skapar här en funktion som letar upp indexet
//för vädersträcket man skrev in
int getDirectionIndex(string direction){
	for(int i = 0; i < 4; i++){
		if(direction == directions[i]){
			return i;
		}
	}
	//Om vi inte hittade vädersträcket skrev användaren
	//fel, så vi returnerar "-1" som felkod.
	return -1;
}

int main(){
	//Vår nuvarande position
	int x = 0;
	int y = 0;
	//En oändlig loop; samma som for( ; true ; ) { ... }
	while(true){
		cout << "Vilket vädersträck vill du gå mot?" << endl;
		string move;
		cin >> move;
		int directionIndex = getDirectionIndex(move);
		//Vi kollar här om vi fick en felkod:
		if(directionIndex == -1){
			cout << "Ogiltigt vädersträck!" << endl;
		} else {
			//Annars flyttar vi oss i vädersträckets riktning!
			x += deltaX[directionIndex];
			y += deltaY[directionIndex];
			cout << "Din nuvarande position är (" << x << "," << y << ")" << endl;
		}
	}
}