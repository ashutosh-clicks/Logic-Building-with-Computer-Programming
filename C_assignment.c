#include <stdio.h>

int main(){
    // Max of 2 numbers
    /*int n1,n2;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    if( n1>n2){
        printf("%d is greater than %d",n1,n2);
    }
    else if (n1==n2){
        printf("Both the numbers are equal");
    }
    else{
        printf("%d is greater than %d",n2,n1);
    }*/


    //Max of 3 numbers
    /*int n1,n2,n3;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    printf("Enter 3rd number: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3){
        printf("%d is the greatest of the three numbers",n1);

    }
    else if (n2>n1 && n2>n3){
        printf("%d is the greatest of the three numbers",n2);

    }
    else{
        printf("%d is the greatest of the three numbers",n3);

    }*/


    //Check wether a number is positive negative or zero
    /*int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if (a<0){
        printf("%d is a negative number",a);
    }
    else if (a == 0){
        printf("%d is zero",a);
    }
    else{
        printf("%d is a positive number",a);
    }*/

    //Check wether a number is divisable by 5 and 11
    /*int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%5 == 0 && a%11 == 0){
        printf("Yes %d is divisible by both 5 and 11",a);
    }
    else{
        printf("No %d number is not divisible by either 5 or 11 or both",a);
    }*/

   //Check wether a number is odd or even
    /*int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }*/


    //Check wether a year is leap year or notep
    /*int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if(y%4 == 0 || y%400 == 0){
        printf("Yes %d is a leap year",y);
    }
    else{
        printf("%d is not a leap year",y);
    }*/

    //check wether a character is alphabet or not
    /*char a;
    printf("Input a charcter: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a' ... 'z':
        printf("%c is an alphabet",a);
        break;
    case 'A' ... 'Z':
        printf("%c is an alphabet",a);
        break;
    default:
        printf("Not an alphabet");
        break;
    }*/


    //Check wether an alphabet is a consonant or a vowel.
    /*char a;
    printf("Input a charcter: ");
    scanf("%c",&a);
    int i = 0;
    if(a == 'a' ||a == 'e' ||a == 'i' ||a == 'o' ||a == 'u' ||a == 'A' ||a == 'E' ||a == 'I' ||a == 'O' ||a == 'U'){
        printf("%c is a vowel",a);
    }
    else{
        printf("%c is a consonant",a);
    }


    /*
    Ignore
    .
    .
    .
    switch (a)
    {
    case 'a' | 'A'|'e'|'i'|'I'|'o'|'O'|'u'|'U'|'E':
        printf("%c is a vowel",a);
        break;
    
    default:
        printf("%c is not a vowel",a);
        break;
    }
    printf("Not a vowel");
    for(i;i<9;i++){
        if(vowels[i] == a){
            printf("%c is a vowel",a);
            break;
        }
        
    }
    if(vowels[9] != a){
        printf("%c is not a vowel",a);
    }
    .
    .
    .
    Ignore
    */



    //Check wether a character is alphabet number or special character
    /*char a;
    printf("Input a charcter: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a' ... 'z':
        printf("%c is an alphabet",a);
        break;
    case 'A' ... 'Z':
        printf("%c is an alphabet",a);
        break;
    case '0' ... '9':
        printf("%c is a number",a);
        break;
    default:
        printf("%c is a special character",a);
        break;
    }*/

    //Check if the alphabet is uppercase or lowercase
    /*char a;
    printf("Input a charcter: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a' ... 'z':
        printf("%c is a lowercase alphabet",a);
        break;
    case 'A' ... 'Z':
        printf("%c is an uppercase alphabet",a);
        break;
    }*/

    //Enter number and print week day
    /*int n;
    printf("Input week number: ");
    scanf("%d",&n);
    switch (n){
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
    default:
        printf("Invalid Input");
        break;
    }*/

    //Input month number and print days in that month
    /*int m;
    printf("Input week number: ");
    scanf("%d",&m);
    if (m == 1|| m ==3|| m ==5|| m == 7|| m == 8||m == 10|| m ==12){
        printf("31 Days");
    }
    else if(m == 2){
        printf("28 or 29 days depending on the year");
    }
    else{
        printf("30 Days");
    }*/
    
    //Write program to count total number of notes in a given amount
    /*int a;
    int temp;
    printf("Enter Amount: ");
    scanf("%d",&a);
    int n2k = 0,n5h = 0,n2h = 0,n1h = 0;
    int n50 = 0,n20 = 0,n10 = 0,n5 = 0,n2 = 0,n1 = 0;
    if (a>=2000){
        n2k = a/2000;
        a = a - n2k*2000;
    }
    if (a>=500){
        n5h = a/500;
        a = a - n5h*500;
    }
    if(a>=200){
        n2h = a/200;
        a = a-n2h*200;
    }
    if(a>=100){
        n1h = a/100;
        a = a - n1h*100;
    }
    if(a>=50){
        n50 = a/50;
        a = a - n50*50;
    }
    if(a>=20){
        n20 = a/20;
        a = a - n20*20;
    }
    if(a>=10){
        n10 = a/10;
        a = a - n10*10;
    }
    if(a>=5){
        n5 = a/5;
        a = a - n5*5;
    }
    if(a>=2){
        n2 = a/2;
        a = a - n2*2;
    }
    if(a>=1){
        n1 = a/1;
        a = a - n1*1;
    }
    printf("2000 notes: %d \n",n2k);
    printf("500 notes: %d\n",n5h);
    printf("200 notes: %d\n",n2h);
    printf("100 notes: %d\n",n1h);
    printf("50 notes: %d\n",n50);
    printf("20 notes: %d\n",n20);
    printf("10 notes: %d\n",n10);
    printf("5 notes: %d\n",n5);
    printf("2 notes: %d\n",n2);
    printf("1 notes: %d\n",n1);
    */


    //Input angles of a triangle and check if it is valid or not
    /*int a,b,c;
    printf("Enter Angle 1: ");
    scanf("%d",&a);
    printf("Enter Angle 2: ");
    scanf("%d",&b);
    printf("Enter Angle 3: ");
    scanf("%d",&c);
    if(a+b+c == 180){
        printf("Angles make a triangle");
    }
    else{
        printf("Invalid angles for a triangle");
    }*/

    //Enter sides of a triangle and check wether triangle is valid or not
    /*int a,b,c;
    int check;
    printf("Enter side 1: ");
    scanf("%d",&a);
    printf("Enter side 2: ");
    scanf("%d",&b);
    printf("Enter side 3: ");
    scanf("%d",&c);
    if (a < b+c && b < c+a && c < b+a)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Invalid sides for triangle");
    }*/
    
    //Check wether a triangle is equilateral isosceles or scalene
    /*int a,b,c;
    printf("Enter side 1: ");
    scanf("%d",&a);
    printf("Enter side 2: ");
    scanf("%d",&b);
    printf("Enter side 3: ");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("Equilateral Triangle");
    }*/
    
}