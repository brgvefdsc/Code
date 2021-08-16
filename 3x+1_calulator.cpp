#include <iostream>
#include <windows.h>
using namespace std;

void odd_finder (int n){
    if(n % 2 == 0){
        n = n/2;
        cout << n << " ";
        Sleep(50);
        odd_finder(n);

    }
    else{
        n = n*3 + 1;
        Sleep(50);
        cout << n << " ";
        odd_finder(n);

        
    }
}
int main() {
    int n;
    cout << "\nPlease Press 'control-c' to stop code once loop has started (Doing this will close this window) \n \n";
    cout << "Enter an integer: ";
    cin >> n;

    odd_finder(n);



}
