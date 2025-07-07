#include <stdio.h>
int main(){

int n , i ,j ,space ;

printf("give the line of the triengle: ");
scanf("%d", &n);

for ( i = 0; i < n; i++)
{
    for ( j = 1; j <= (n*2)-1; j++)
    {
      if (j >= n-i && j<=n+i)
      
        printf("*");
      else
      
        printf(" ");
       
      }
      printf("\n");
    }

    return 0;
} 


