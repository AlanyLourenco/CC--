#include <stdio.h>

int Verificacao(int c, int dr, int rt)
{
    int AcoGrau;
    if (c<7 && dr>50 && rt>80000)
    {
        AcoGrau = 10;
    }
    else if (c<7 && dr>50 && rt<=80000)
    {
        AcoGrau = 9;
    }
    else if (c<7 && dr<=50 && rt<=80000)
    {
        AcoGrau = 8;
    }
    else if ((c>=7 && dr<=50 && rt<=80000) || (c>=7 && dr>50 && rt>80000) || (c>=7 && dr<=50 && rt>80000))
    {
        AcoGrau = 7;
    }
    return AcoGrau;
}

main ()
{
    int c,dr,rt, grau;
    scanf("%d",&c);
    scanf("%d",&dr);
    scanf("%d",&rt);
    grau = Verificacao(c, dr, rt);
    printf("ACO DE GRAU = %d\n", grau);
    return 0;
}