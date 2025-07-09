
// project students management 
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[100];
    float grade;
} student;

int main(){
int max ;

printf("enter the number of students: ");
scanf("%d", &max);
getchar();

student students[max];
int choice, nbr=0;
do
{

    printf("\n 1. Add Student\n 2. Show All\n 3. Best Student\n 0. Exit\n Your Choice:  ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1)
    {
        if (nbr >= max) {
             printf("You have to reach the max number of students\n");
        continue;
    }

       

        printf("enter the name: ");
        fgets(students[nbr].name, sizeof(students[nbr].name), stdin);
        students[nbr].name[strcspn(students[nbr].name, "\n")] = '\0';
        printf("enter his grade: ");
        scanf("%f", &students[nbr].grade);
        getchar();

        nbr++;
    }else if (choice == 2)
    {
        for (int i = 0; i < nbr; i++)
        {
            printf("student%d -name: %s , grade: %.2f \n", i+1, students[i].name, students[i].grade);
        }
        
    }else if (choice == 3)
    {
        int bestIndex = 0;
    for (int i = 1; i < nbr; i++) {
        if (students[i].grade > students[bestIndex].grade) {
           bestIndex = i;
         }
    }
    printf("The best grade is for student: %s with grade %.2f\n", students[bestIndex].name, students[bestIndex].grade);
            
    }
    
    
} while (choice != 0);


    return 0;
}
