/*
// init an matrix
#include <stdio.h>
int main(){
    int i , j , arr[3][2] ;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: ", i , j);
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}*/

/*
// sum of all element in the matrix
#include <stdio.h>
int main(){
    int i , j , arr[3][2], sum =0 ;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: ", i , j);
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
            
        }
        printf("\n");
    }
    printf("the sum is: %d" , sum);
    return 0;
}*/




/*
// calculate the avrage of an matrix
#include <stdio.h>
int main(){

    int column , row, sum = 0, matrix[10][10];
    
float avrage = 0;

printf("give the nbrs of rows: ");
scanf("%d", &row);

printf("give the number of columns: ");
scanf("%d", &column);

printf("this matrix is %d*%d matrix \n", row, column);

printf("fill the matrix: \n");
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        printf("matrix[%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);

        sum = sum + matrix[i][j];
    }
    
}
    avrage = (float)sum / (row*column);

printf("the avrage of this matrix is: %.2f", avrage);
    return 0;
}*/




/*
// add two matrix 
#include <stdio.h>
int main(){

int i,j,mat1[2][2]={{5,1},{4,3}},  mat2[2][2]={{2,3},{4,6}}, resMat[2][2];
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            resMat[i][j] = mat1[i][j] * mat2[i][j]; // we can add(+) & also subtract (-) her
        }
        
    }
    
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("%d ", resMat[i][j]);
    }
    printf("\n");
}


return 0;
}*/



/*
//multiply two matrix
#include <stdio.h>
int main(){

int i, j, mat1[2][2]={{5,1},{4,3}}, mat2[2][2]={{2,3},{4,6}},  resMat[2][2];
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
           int sum = 0 ;

            for (int k = 0; k < 2; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            
            resMat[i][j] = sum;
        }
        
    }
    printf("\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d ", resMat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

return 0;
}*/




/*
// calculate the transpose of the matrix
#include <stdio.h>
int main(){

    int i, j, rows, column;

    printf("give the number of the rows and column: \n");
    scanf("%d %d", &rows , &column);

    int matrix[rows][column],  trans[rows][column];

    printf("fill the matrix elments: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("the matrix is: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
            trans[j][i] = matrix[i][j];
        }
        
    }

    printf("the transopose of this matrix is: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
           printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}*/





/*
// check identity matrix
#include <stdio.h>
int main(){

int i, j, rows, column;

    printf("give the number of the rows and column(must be a square matrix): \n");
    scanf("%d %d", &rows , &column);
if (rows != column)
{
    printf("this is not a square matrix, then its not an identity matrix");
}else
{
    int matrix[rows][column];
    
    printf("fill the element of the matrix: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    int isIdentity = 1;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < column; j++)
        {
           if (i == j && matrix[i][j] != 1)
           {
                isIdentity = 0;
           }else if ( i != j && matrix[i][j] != 0)
           {
                isIdentity = 0;
           }
           
        }
        
    }
    printf("\n");
    if (isIdentity == 1)
    {
        for ( i = 0; i < rows; i++)
        {
            for ( j = 0; j < column; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        
        printf("the given matrix is an identity matrix\n");

    }else
    {
        printf("The given matrix is not Identity Matrix");
    }

}

    return 0;
}*/







/*
// sum of diagonal elements
#include <stdio.h>

#define row 3
#define column 3
int sumDiagonal(int result){

    int i ,j ,sum = 0, mat[row][column];

    printf("fill the matrix elements: \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            
            printf("matrix[%d][%d]= ", i, j );
            scanf("%d", &mat[i][j]);
        }
    }
    printf("your matrix= \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d ", mat[i][j]);            
        }
        printf("\n");
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
        }
    }

return sum;
}

int main(){
    int sum;

printf("the sum of diagonal elements  is: %d", sumDiagonal(sum));

    return 0;
}*/