//Once compiled this spits out a much of random charaters for seemingly no reason if you know why please share I'm pretty interested in this
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string deck[] {"clubs_ace", "diamonds_ace", "hearts_ace", "spades_ace",
      "clubs_two", "diamonds_two", "hearts_two", "spades_two",
       "clubs_three","diamonds_three", "hearts_three", "spades_three",
        "clubs_four","diamonds_four","hearts_four","spades_four",
         "clubs_five", "diamonds_five", "hearts_five", "spades_five",
         "clubs_six", "diamonds_six","hearts_six", "spades_six",
         "clubs_seven", "diamonds_seven", "hearts_seven", "spades_seven", 
         "clubs_eight", "diamonds_eight", "hearts_eight", "spades_eight",
         "clubs_nine", "diamonds_nine", "hearts_nine", "spades_nine",
         "clubs_ten", "diamonds_ten", "hearts_ten", "spades_ten",
         "clubs_jack", "diamonds_jack","hearts_jack","spades_jack",
         "clubs_queen", "diamonds_queen","hearts_queen", "spades_queen",
         "clubs_king" ,"diamonds_king" ,"hearts_king" ,"spades_king" };
    
    for(int i = 1; i < sizeof(deck); i++){
        cout << "The cards are " << deck[i] << endl;
        cout << i;
    }
    
}
