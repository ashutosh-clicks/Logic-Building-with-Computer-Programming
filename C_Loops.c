#include <stdio.h>

int main(){
    //Loop to print all natural number from 1 to n
    /*int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d ",i);
    }*/
    
    //Loop to print all natural number from n to 1
    /*int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        printf("%d ",i);
    }*/

    //Loop to print alphabet from a to z
    /*for(char i = 97; i <=122 ; i++){
        printf("%c",i);
    }*/

    // Loop to print all even numbers from 1 to 100
    /*for(int i = 1; i <=100; i++){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }*/

    //Loop to print all odd numbers from 1 to 100
    /*for(int i = 1;i < 100; i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
    }*/

    //Sum of number between 1 to n
    /*int n;
    int temp = 0;
    printf("Input n: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
         temp += i ;

    }
    printf("%d", temp);*/

    //Sum of all even numbers from 1 to n
    /*int n;
    int temp = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0; i<=n;i++){
        if(i%2 == 0){
            temp += i;
        }
    }
    printf("%d",temp);*/

    // Sum of all odd number from 1 to n
    /*int n;
    int temp = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0; i<=n;i++){
        if(i%2 != 0){
            temp += i;
        }
    }
    printf("%d",temp);*/

    //Loop to print multiplication table of any number
    /*int n;
    int p = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 1;i<=10;i++){
        p = n * i;
        printf("%d x %d = %d\n",n,i,p);
    }*/

   
    //Loop to count digits in a number
    /*int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int count = 0;
    while(a!=0){
        a = a/10;
        count++;
    }
    printf("%d",count);*/

    //Loop to print first and last digit of a number
    /*int a,f,l,temp;
    f = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp = a;
    while(a>=10){
        f = a/10;
        a  = f;
        // printf("%d",f);
    }
    
    l = temp%10;
    
    printf("First: %d\nLast: %d", f,l);*/

    
    //Loop to find the sum of first and last digits of a number
    /*int a,f,l,temp;
    f = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp = a;
    while(a>=10){
        f = a/10;
        a  = f;
        // printf("%d",f);
    }
    
    l = temp%10;
    int sum = l+f;
    printf("The sum is: %d",sum);*/


    //Loop to swap first and last digits of a number
    //Naaaah🗣️🗣️🗣️🗣️


    //Loop to find sum of all digits of a number
    /*int n,sum,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp = n;
    sum = 0;
    while(n!=0){
        sum += n % 10;
        n = n / 10;
    }
    printf("%d",sum);*/

    
}