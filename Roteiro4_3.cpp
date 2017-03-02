#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dadoAleatorio (){
    int num;
    num = rand() % 6 + 1;
    return num;
}

int main(){

    srand(time(0));

    int dado = 0, contador = 0;
    int face[6] = {0,0,0,0,0,0};
    float porFace[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    cout << "Digite a quantidade de vezes: ";
    cin >> contador;

    while(contador!= 0){

        for(int i = 0; i < contador; i++){
            dado = dadoAleatorio();
            cout <<""<< i+1<<" jogada = " << dado << "\n";

            switch (dado){
                case 1:{
                    face[0]++;
                    break;
                }
                 case 2:{
                    face[1]++;
                    break;
                }
                 case 3:{
                    face[2]++;
                    break;
                }
                 case 4:{
                    face[3]++;
                    break;
                }
                 case 5:{
                    face[4]++;
                    break;
                }
                 case 6:{
                    face[5]++;
                    break;
                }
            }
        }
        cout << "\n";
        for(int i = 0; i < 6; i++){
            porFace[i] = face[i] * 100.0 / contador;
            cout << "Face " << i+1 << " caiu "<< face[i]<< " vez(es) (" << porFace[i] << "%).\n";
            face[i] = 0;
        }

        cout << "\nDigite a quantidade de vezes: ";
        cin >> contador;
    }

    return 0;

}
