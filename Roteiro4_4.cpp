#include <iostream>
using namespace std;

float percentual (int voto, int totalVotos){
    float p = (voto * 100.0)/totalVotos;
    return p;
}

int main(){

    int votos[23];
    int i;
    int voto = 0;
    int votosInvalidos = 0;
    int votosValidos  = 0;
    int votosMelhorJogador = 0;
    int indiceMelhorJogador = 0;
    float percMelhorJogador = 0.0f;

   for(i = 0; i < 23; i++){
        votos[i] = 0;
    }

    cout << "Enquete: Quem foi o melhor jogador?\n\n"

    cout <<"Informe o valor de 1 a 23 ou 0 para sair: ";
    cin >> voto;

    while (voto!= 0){
        if ((voto >= 1)&&(voto <= 23)){
            votos[voto-1]++;
            votosValidos++;
        } else{
            votosInvalidos++;
        }
        cout <<"Informe o valor de 1 a 23 ou 0 para sair: ";
        cin >> voto;
    }

    // ---------- IMPRIMIR RESULTADO ------------------

    cout << "\nResultado da votacao:\n\n";
    cout << "Foram computados " << votosValidos << " votos validos.\n\n";

    if(votosValidos != 0){
       cout <<"JOGADOR\tVOTOS\tPERCENTUAL\n";
        for (i = 0; i  < 23; i++){
            cout << "" <<i+1 << "\t" << votos[i] << "\t" << percentual(votos[i], votosValidos)<<"\n";
            if(votos[i]>= votosMelhorJogador){
                votosMelhorJogador = votos[i];
                indiceMelhorJogador = i+1;
                percMelhorJogador =  percentual(votos[i], votosValidos);
            }
        }
        cout << "\n\nO melhor jogador: numero " << indiceMelhorJogador << " com "
                << votosMelhorJogador << " votos (" << percMelhorJogador << "%)\n";

    } else{
        cout <<"Nao houve votos validos.\n";
    }


    return 0;

}
