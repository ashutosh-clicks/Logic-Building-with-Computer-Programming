#include <stdio.h>

int main(){
    // Day of week using switch case
    /*int a;
    printf("Enter week day: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }*/

    //Days in a month 
    /*int a;
    printf("Enter Month Number: ");
    scanf("%d",&a);
    switch (a){
        case 1||3||5||7||8||10||12:
            printf("31 Days");
            break;
        case 2:
            printf("28 or 29 days depending on month");
            break;
        default:
            printf("30 days");
    }*/

    //Check wether a alphabet is vowel or consonant
    /*char a;
    printf("Enter alphabet: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        printf("%c is a vowel",a);
        break;
    case 'e':
    printf("%c is a vowel",a);
        break;
    case 'i':
        printf("%c is a vowel",a);
        break;
    case 'o':
    printf("%c is a vowel",a);
        break;
    case 'u':
        printf("%c is a vowel",a);
        break;
    
    default:
        printf("%c is a consonant",a);
        break;
    }*/

    //Max of two numbers using switch case
    /*int a,b,c,d;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    switch (a>b)
    {
    case 1:
        printf("%d is bigger than %d",a,b);
        break;
    
    default:
        printf("%d is bigger than %d",b,a);
        break;
    }*/

    //Check for odd or even
    /*int a;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("Even");
        break;
    
    default:
        printf("Odd");
        break;
    }*/

    //Check for positive negative or 0;
    /*int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    switch (a>0)
    {
    case 1:
        printf("Positive");
        break;
    
    default:
        switch (a==0)
        {
        case 1:
            printf("Zero");
            break;
        
        default:
            printf("Negative");
            break;
        }
        break;
    }*/


    //Simple calculator using switch case

    /*char c;
    int a, b;
    int p;

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    getchar();
    printf("Operation you want to do (+, -, /, *): ");
    scanf("%c", &c);

    if (c == '+') {
        p = a + b;
        printf("Result: %d + %d = %d\n", a, b, p);
    } else if (c == '-') {
        p = a - b;
        printf("Result: %d - %d = %d\n", a, b, p);
    } else if (c == '*') {
        p = a * b;
        printf("Result: %d * %d = %d\n", a, b, p);
    } else if (c == '/') {
        if (b != 0) {
            p = a / b;
            printf("Result: %d / %d = %d\n", a, b, p);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operation. Please use +, -, *, or /.\n");
    }*/
}
