#include<stdio.h>
#include<math.h>

    int main()

    {
        float massa, aceleracao, tempo , velocidade, velo_final,massa2;
        double comp_pista,trabalho;
        scanf("%f",&massa);
        scanf("%f",&aceleracao);
        scanf("%f",&tempo);

        massa2 = massa * 1000;
        velocidade = aceleracao * tempo;
        trabalho = massa2 * pow(velocidade,2) /2;
        velocidade = aceleracao * tempo * 3.6;
        comp_pista = (aceleracao * pow(tempo,2)) /2;

        printf("VELOCIDADE = %.2f\n",velocidade);
        printf("ESPACO PERCORRIDO = %.2f\n",comp_pista);
        printf("TRABALHO REALIZADO = %.2f\n",trabalho);
        return 0;
    }
    