

#include <stdio.h>

void reverseArray(int arr[10]){
int n, reverse[10];

   do {
   
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n > 10 || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and 10.\n");
    }

} while (n > 10 || n <= 0);
  
 
    printf("fill the array elements: \n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        reverse[i] = arr[n-i-1];
    }
    
    printf("the reverse would be: ");
    for (int i = 0; i < n; i++)
    {
       printf("%d ", reverse[i]);
    }
    
}
int main (){

    int arr[10];
    reverseArray(arr);
    
    return 0;
}