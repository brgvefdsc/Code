/* How to play war: split the 52 card deck each player places a card down who evers cards has the most value is takes both, play till
one player has taken the whole deck */ 
#include <iostream>
#include <stdio.h>
using namespace std;

void cardscambler(){
    int player_one_deck[26] = {};
    
    for(int i = 0; i != 26; i++){
        int player_one_card = rand() %52;
        
        for(int b = 0; b < 26; b++){
            
            if(player_one_card == player_one_deck[b]){
                cout << "\n \n Int " << player_one_card <<" appears twice in player1 deck" << endl;
            }

        }
        player_one_deck[i] = player_one_card;
        cout << "player ones " << i + 1 << " Card is " <<player_one_deck[i] << endl;
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