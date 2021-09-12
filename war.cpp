/* How to play war: split the 52 card deck each player places a card down who evers cards has the most value is takes both, play till
one player has taken the whole deck */ 
#include <iostream>
#include <stdio.h>
using namespace std;

void cardscambler(){
    int scambled_deck[52] = {};
    
    for(int i = 0; i != 52; i++){
        int scarmbled_card = rand() %52;
        
//Looks to see if the random number genorated is already in list
        for(int b = 0; b < 52; b++){
            
            if(scarmbled_card == scambled_deck[b]){
                while(scarmbled_card == scambled_deck[b]){
                    scarmbled_card = rand() %52;
                }
            }

        }
        scambled_deck[i] = scarmbled_card;
        cout << "Scambled Deck's " << i + 1 << " Card is " << scambled_deck[i] << endl;
    }
}
int main(){
    const string deck[] {
    "clubs_ace", "diamonds_ace", "hearts_ace", "spades_ace",
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
    
    const int decksize = 52;
    
/*    for(int i = 0; i != decksize; i++){
        cout << "Card Number " << i + 1 << " is " << deck[i] << endl;
    }
*/   
    cardscambler();
}