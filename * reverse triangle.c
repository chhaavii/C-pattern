#include <stdio.h>
int main(){
    int i, j, n;
    printf ("enter no. : ");
    scanf ("%d",&n);
    for(i=1;i<=n;i++)
    {
      for (j=i;j<=n;j++)
      {
        printf ("* ");
      }
      printf ("\n");
    }
  }

