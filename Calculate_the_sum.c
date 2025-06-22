

#include <stdio.h>
int main(){
int i,sum,n;
i = 1;
sum = 0;
printf("enter the number n: ");
scanf("%d", &n);
while (i<=n)
{
  sum = sum + i;
  i++;
}
printf("result betwen s=1+2+...+n and %d is= %d", n, sum);

    return 0;
}
