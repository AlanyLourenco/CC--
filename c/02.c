#include <stdio.h>


int resqe(int pos1, int pos2, int chuva[50001])
{
         int resultado;
           int i = pos1+1;//talvez o sequencial deva ser testado apenas durante o intervalo entre os dois anos
            resultado = 1;//pressupôe-se verdadeiro
            while(i < pos2)
            {
               if(chuva[i] > chuva[pos2])
               {
                 return resultado = -1;//resultado é falso
               }
               i++;
            }
         return 1;
}

 int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}



int main(){
    int anosc, testes = 1,i = 0, j = 0, ano1, ano2,seq=0,sequencial = 0,pos1 = -1, pos2 = -1,resultado;
    int anos[50001];
    int chuva[50001];


    while(1)
    {
      scanf("%d",&anosc);
       if(anosc == 0)
      {
         scanf("%d", &testes);
         if(testes == 0)
         {
            return 0;
         }
      }
      seq = 0;
      sequencial = 0;//pressupoe-se
      for(i = 0; i < anosc; i++)
      {
         scanf("%d %d",&anos[i],&chuva[i]);
         //printf("ano = %d, chuva =  %d\n", anos[i], chuva[i]);

         if(i > 0 && anos[i] == anos[i-1]+1)
         {
            seq++;
         }
      }
      if(seq == anosc-1)
      {
         sequencial = 1;
      }
     // printf("sequenacia = %d\n",sequencial);

      scanf("%d", &testes);
      j = 0;
      for(j = 0 ; j < testes; j++)
      {
         scanf("%d %d", &ano1, &ano2);
        pos1 = binarySearch(anos,0,(anosc -1), ano1);
        pos2 = binarySearch(anos,0,(anosc -1), ano2);

         if(sequencial == 1 && pos1>-1 && pos2>-1)
         {
            //função
            resultado = resqe(pos1, pos2, chuva);

         }
         else
         {
            resultado = 0;// resultado é talvez
         }

          printf("\n");
         if(resultado == 1)
         {
            printf("true\n");
         }
         else if(resultado == 0)
         {
            printf("maybe\n");
         }
         else
         {
            printf("false\n");
         }
         //  printf("\n=============TESTES DE ANOS INTERIORES===========");
      }
    //  printf("\n=============ESTOU DE FORA=========");

    }
   
   return 0;

}