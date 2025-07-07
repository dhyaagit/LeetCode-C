/*#include <stdio.h>
#include <string.h>

typedef struct 
{
    char title[50];
    int year;
    float rating;
} movie;

int main(){

movie m1;

strcpy(m1.title, "titles");
m1.year = 2025;
m1.rating = 99.99;

printf("%s %d %.2f", m1.title, m1.year, m1.rating);

    return 0;
}*/




// learn struct with array
/*
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char title[100];
    int page;
}book;

int main(){

book Books[3];

strcpy(Books[0].title, "harry potter");
Books[0].page = 300;

strcpy(Books[1].title, "dictionary");
Books[1].page = 500;

strcpy(Books[2].title, "quran");
Books[2].page = 362;

for (int i = 0; i < 3; i++)
{
    printf("book%d - title: %s , page: %d\n", i+1,  Books[i].title, Books[i].page);
    
}

return 0;
}*/