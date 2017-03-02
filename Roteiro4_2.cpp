#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int numAleatorio (){
    int num;
    num = rand() % 100 + 1;
    return num;
}

int main(){

    srand(time(0));

    int x = 0;
    int y = numAleatorio();
    bool acertou = false;

    cout << "O maior numero digitado foi " << y << ".\n";

    while (acertou != true){
        cout << "Digite um numero: ";
        cin >> x;
            if(x < y){
                cout << "Muito baixo. Tente novamente.\n";
            } else if (x > y){
                cout << "Muito alto. Tente novamente.\n";
            } else{
                cout << "Parabens!!! Voce acertou.\n";
                acertou = true;
            }
    }

    return 0;
}
