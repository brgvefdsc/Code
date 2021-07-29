/* not a full working version but just someothing to get the ball rolling just to make sure it's something I can realisticly do 
Fun Fact: Wrote most of his during history class */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char letters[25] = {'a', 'b'};
    string expression;
    int variable;
    
    getline(cin, expression);
    cin >> variable;

    for(int i = 0; i < 25; i++){
        int x = expression.find(letters[i]);
        
        if(i != -1){
            cout << "great scott it worked";
            break;
        }
    }
}
