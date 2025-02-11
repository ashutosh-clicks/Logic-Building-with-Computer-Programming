#include <stdio.h>
#include <math.h>

int main(){
    int a = 1; 
    int b = 2;
    int c = 3;

    if(a >= b) {
        if(a >= c){
            printf("A is biggest");
        }
        else{
            printf("C is biggest");
        }
    else{
        if(b >= c){
            printf("B is biggest");
        }
        else{
            printf("C is biggest");
        }
    }
    }
}