#include <stdio.h>
#include <stdlib.h>
int main(){

int arr[10], i, occ[10]={0,0,0,0,0,0,0,0,0,0};

//case of-----> let the user fill the array
/* for ( i = 0; i < 10; i++)
{
    do
    {        
        printf("give an numbers in arr[%d]: ", i);
        scanf("%d", &arr[i]);
    } while (arr[i]<= 0 && arr[i]>= 9);
}
*/



// case of-----> let computer fill the array
srand(time(NULL));

printf("filling of the array:\n");
for (i = 0; i < 10; i++) {
    arr[i] = rand() % 10; 
    printf("arr[%d] = %d\n", i, arr[i]);
}

 


printf("\n");
for (i = 0; i < 10; i++)
{
    occ[arr[i]]++ ;
}
for ( i = 0; i < 10; i++)
{
    if (occ[i]!=0)
    {
        printf("the doubles numbers of %d are: %d \n", i, occ[i]);
    }
    
}
    return 0;
}