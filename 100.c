#include <stdio.h>
#define MAX 10000


int main() {
  int vCount[MAX+1], vOrd[MAX], n, i, j;
  
  scanf("%d",&n);
  while(n!=0) {
    for(i=0;i<MAX+1;i++)
       vCount[i] = 0;
    for(i=0; i<n; i++)
       scanf("%d",&vOrd[i]);
    for(i=0;i<n;i++)
      vCount[vOrd[i]]++;
    for(i=0;i<MAX+1;i++)
      { if(vCount[i]!=0)
           for(j=0;j<vCount[i];j++)
              printf("%d ",i);
       }
     printf("\n");
   scanf("%d",&n);
  }
 return 0;
}