#include <stdio.h>
#define MAX 1000
int main()
{
    int M[MAX][MAX],n,i,j,soma;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
          if (i==(n-1-j)){
              printf("%d\n",M[i][j]);
          }
        }
    }
    return 0;
}