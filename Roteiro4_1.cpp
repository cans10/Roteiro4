#include <iostream>
using namespace std;

int main(){

    int x = 0, y = 0;

    cout << "Digite um numero: ";
    cin >> x;

    while(x != 0){
        cout << "Digite um numero: ";
        cin >> x;
        if(x >= y){
            y = x;
        }
    }
    cout << "O maior numero digitado foi " << y << ".\n";

    return 0;

}
