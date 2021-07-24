#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main (){
string insults[] = {"Suck my Dick" , "Lick my Ass", "Ass Face", "Dick head", "Penis Breath", "Dumbass"};
int timestoloop;
printf("How Many Times should I insult you? ");
cin >> timestoloop;

    for(int i = 0; i < timestoloop; i++){

        int randomNum = rand() % sizeof(insults)/sizeof(insults[0]);
        cout << insults[randomNum] << endl;

    }
}
