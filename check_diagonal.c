#include <stdio.h>
#include <stdbool.h>

int main() {
   int i, n, j, m;
   int mat[20][30];
   bool diagonal;
   printf("enter the number of n:");
   scanf("%d", &n);
   while(n<1 || n>20);
   printf("enter the number of m:");
   scanf("%d", &m);
   while(m<1 || m > 20);
   for( j=0 ; j <= m-1 ; j++){
     for( i=0 ; i <= n-1 ; i++){
        printf("enter the value of [%d][%d]= ", i ,j);
        scanf("%d", & mat[i][j]);
     }
   }
   
  
   diagonal=true;
   for( i=0 ; i <= n-1 ; i++){
    for( j=0 ; j <= m-1 ; j++){
        if ((i==j) & ( mat[i][j]==0 )){
        diagonal=false;}
        if((i != j ) & (mat[i][j]!=0)){
        diagonal=false;}
    }}
    if( diagonal){
    printf("its diagonal");
   }else{
      printf("its not diagonal");
   }
   return 0;
}
