#include <stdio.h>

int main()
{ int senha;
char cat;
    scanf("%d %c",&senha,&cat);
    if (senha<100000){
    printf("SENHA INVALIDA: %d - MINIMO 6 DIGITOS\n",senha); }
    else if ((cat=='A')&&(senha==321456))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if((cat=='A')&&(senha==9510753)){
        printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if ((cat=='A')&&(senha==78955632))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    
    else if ((cat=='G')&&(senha==321456))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if((cat=='G')&&(senha==9510753)){
        printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if ((cat=='G')&&(senha==78955632))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    
    else if ((cat=='U')&&(senha==321456))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if((cat=='U')&&(senha==9510753)){
        printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
    else if ((cat=='U')&&(senha==78955632))
        {printf("ACESSO PERMITIDO A CATEGORIA %c\n",cat);}
   
    else if ((senha>=6)&&(senha!=321456)&&(senha!=9510753)&&(senha!=78955632)){
        printf("ACESSO NEGADO\n");}
    if ((cat!='A')&&(cat!='G')&&(cat!='U')){
        printf("CATEGORIA INVALIDA: %c\n",cat);}
 return 0;
}