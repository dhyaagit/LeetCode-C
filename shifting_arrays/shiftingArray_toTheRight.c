//shifting array to the right
#include <stdio.h>
int main(){

int arr[5] = {10,20,30,40,50};
int i, temp = 0;

temp = arr[5-1];

for ( i = 5-1; i > 0; i--)
{
    arr[i]= arr[i-1];
}

arr[0] = temp;

for ( i = 0; i < 5; i++)
{
    printf("%d ", arr[i]);
}



    return 0;
}