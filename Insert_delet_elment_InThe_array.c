  // insert element in the array
  /* #include <stdio.h>
    int main (){

        int i ,tab[50], pos, taille, nbr;

        printf("enter the size of the array: ");
        scanf("%d", &taille);
        
        printf("enter the element of the array: \n");
        for ( i = 0; i < taille; i++)
        {
            printf("tab[%d]: ", i+1);
            scanf("%d", &tab[i]);
        }

        printf("give a number to inser: ");
        scanf("%d", &nbr);
        
        printf("enter the position of this number: ");
        scanf("%d", &pos);

        if (pos<=0 ||  pos > taille+1 )
        {
           printf("Error, size exceeded!");
        }else
        {
            for ( i = taille; i >= pos; i--)
            {
                tab[i]= tab[i-1];
            }
            tab[pos-1] = nbr;
            taille++;
            for ( i = 0; i < taille; i++)
            {
                printf("%d\t", tab[i]);   
            }   
        }
        return 0;
    }  

*/
    

// delet element in the array
  #include <stdio.h>
    int main (){

        int i ,tab[50], pos, taille;

        printf("enter the size of the array: ");
        scanf("%d", &taille);
        
        printf("enter the element of the array: \n");
        for ( i = 0; i < taille; i++)
        {
            printf("tab[%d]: ", i+1);
            scanf("%d", &tab[i]);
        }

        
        printf("enter the position to delet: ");
        scanf("%d", &pos);

        if (pos<=0 ||  pos > taille+1 )
        {
           printf("Error, size exceeded!");
        }else
        {
            for ( i = pos; i <= taille-1; i++)
            {
                tab[i-1] = tab[i];
                
            }
            taille--;
        
            for ( i = 0; i < taille; i++)
            {
                printf("%d\t", tab[i]);   
            }   
        }
        return 0;
    }