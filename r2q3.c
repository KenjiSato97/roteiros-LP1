#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double Porcento(int votos, int total){

    return votos*100.0/total;
}


int main(void){

    int jogador[23] = {0}, voto, t=0, i;
    int maior=0, vencedor;
    double porcento;

    while(1){

        printf("Digite o voto: ");
        scanf("%d", &voto);

        if(voto == 0){
            break;
        }
        if(voto > 23 || voto < 0){
            printf("Voto invalido, digite novamente\n");
        }
        else{
            jogador[voto-1] = jogador[voto-1] + 1;
            t++;
        }
    }

    for(i=0; i<23; i++){
        if(jogador[i] > maior){
            maior = jogador[i];
            vencedor = i+1;
        }
    }

    for(i=0; i<23; i++){

        if(jogador[i]>0){
            printf("\nO jogador %d teve %d votos, %.2lf%%", i+1, jogador[i], Porcento(jogador[i], t));
        }
    }
    printf("\n\nO melhor jogador da partida foi o camisa %d com %d votos, porcentagem de %.2lf%%\n", vencedor, maior, Porcento(maior, t));


    return 0;
}
