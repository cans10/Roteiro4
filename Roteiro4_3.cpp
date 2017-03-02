#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dadoAleatorio (){
    int num;
    num =rand() % 6 + 1;
    return num;
}

int main(){

    srand(time(0));

    int x, d = 0, contador = 0;
    int y = dadoAleatorio();
    int face[6] = {0,0,0,0,0,0};
    float d1[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    cout << "jogue o dado \n";
    cin >> d;

    while(d != 0){

        contador++;

        switch (d){
            case 1:{
                face[0] = face[0]+ 1;
                cout << "face 1 = "<<face[0]<<"\n";
                break;
            }
             case 2:{
                face[1] = face[1] + 1;
                 cout << "face 1 = "<<face[1]<<"\n";
                break;
            }
             case 3:{
                face[2]++;
                 cout << "face 1 = "<<face[0]<<"\n";
                break;
            }
             case 4:{
                face[3]++;
                 cout << "face 1 = "<<face[0]<<"\n";
                break;
            }
             case 5:{
                face[4]++;
                 cout << "face 1 = "<<face[0]<<"\n";
                break;
            }
             case 6:{
                face[5]++;
                cout << "face 1 = "<<face[0]<<"\n";
                break;
            }
        }
        cout << "jogue o dado \n";
        cin >> d;
      }


   for(int i = 0; i <= 6; i++){
        d1[1] = face[i] / contador * 100;
        cout << "Face " << i+1 << " = " << d1[i] << " porcento.\n";
   }

    return 0;

}
