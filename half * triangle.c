#include <stdio.h>
int main(){
    int i, j, n,k;
    printf ("enter no. : ");
    scanf ("%d",&n);
    for(i=0;i<=n;i++)
    {
      for (j=0;j< 2*(n-1)-i;j++)
      {
        printf (" ");
      }
      for (k=0;k<=i;k++)
      {
        printf ("* ");

      }
     printf ("\n");
      }
  }
