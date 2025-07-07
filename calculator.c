#include <stdio.h>

int main(){
    
 // declaration of variable section 

    char operator; 
    double num1;
    double num2;
    double result;
 
 do {
    printf(">>>>Enter one of these operators (+, -, /, *): ");
    scanf(" %c", &operator);
    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf(">>>>Invalid operator, Pls try again!\n");
    }
} while (operator != '+' && operator != '-' && operator != '*' && operator != '/');
    printf(">>enter the first number: ");
    scanf("%lf",&num1);
    printf(">>enter the second number: ");
    scanf("%lf",&num2);
    switch (operator)
    {
    case '+':
        result =num1 + num2 ;
        break;
    case '/':
        result =num1 / num2 ;
        break;
    case '-':
        result =num1 - num2 ;
        break;
    case '*':
        result =num1 * num2 ;
        break;
    default:
    printf("unexpected error  \n");
        return 1;
    }
    // print the result

    printf("<------the result is %.2lf------>", result);
    return 0;
}