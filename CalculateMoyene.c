#include <stdio.h>
int main(){
    int note;
    printf("enter your note: ");
    scanf("%d", &note);
    if (note < 0 || note > 20)
    {
      printf("invalid note!");}
    if (note >= 0 && note < 10 )
    {
      printf("ur not valid");
    }if (note >= 10 && note <= 20)
    {
        printf("ur valid");
    }
    
    

    
    
    
    return 0;
}