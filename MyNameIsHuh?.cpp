#include <iostream>


using namespace std;

int main(){
// sets varible as string and takes input
  string name;
  cout << "Who's mr slim shady: ";
  getline(cin, name);

// for loop repeats for how many letters are in the name
  for(int i = 0; i < name.size(); i++){
    printf("My name is huh \n");

    if(i == name.size() - 1){
      
      cout << endl << name << endl;

    }
  }
  
}
