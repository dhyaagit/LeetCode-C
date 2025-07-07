/* 

// the matrix 3d 
#include <stdio.h>

#define dimension 2
#define row 3
#define column 3

int main(){
// matrix [2][3][3];
int matrix[dimension][row][column];
int i , j, k , sum = 0;

printf("fill the elements of the matrix: \n");
for ( i = 0; i < dimension; i++)
{
    for ( j = 0; j < row; j++)
    {
        for ( k = 0; k < column; k++)
        {
            printf("matrix[%d][%d][%d]: ", i,j,k);
            scanf("%d", &matrix[i][j][k]);
        }
        
    }
    
}
for ( i = 0; i < dimension; i++)
{
    for ( j = 0; j < row; j++)
    {
        for ( k = 0; k < column; k++)
        {
            printf("%d ", matrix[i][j][k]);
            
            
            sum = sum + matrix[i][j][k];
        }
        printf("\n");
    }
    
    printf("\n");
}

printf("the sum of all element in the matrix is: %d", sum);

    return 0;
}*/

