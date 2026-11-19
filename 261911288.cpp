#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "input a number:"; 
    cin >> x;
    if (x % 2 != 0){
        cout << "This is an odd number"; 
    }
    else{
        cout << "This is an even number";
    }
}