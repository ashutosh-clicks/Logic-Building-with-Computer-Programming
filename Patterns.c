#include <stdio.h>

int main(){
    //No.1
    /*for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            printf("1");
        }
        printf("1\n");
        
    }*/

    //No.2
    /*for(int i = 0;i<5;i++){
        if(i%2 == 0){
            for(int j = 0;j<5;j++){
                printf("1");
            }
            printf("\n");
        }
        else{
            for(int j = 0;j<5;j++){
                printf("0");
            }
            printf("\n");
        }    
    }*/

    //No.3
    /*for(int i = 1;i<6;i++){
            for(int j = 0;j<5;j++){
                if(j%2 == 0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
                printf("\n");
    }*/


    //No.4
    /*for(int i = 0; i<5;i++){
        for(int j = 0;j<5;j++){
            if(i == 0|| j == 0||i == 4 || j == 4){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }*/


    //No.5
    /*for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(i == 2 && j == 2){
                printf("0");
            }
            else{
                printf("1");
            }

        }    
        printf("\n");
    }*/

    
    //No.6
    /*for(int i = 1;i<=5;i++){
        for(int j = 1; j<=5; j++){
            if(i%2 == 0){
                if(j%2 == 0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            else{
                if(j%2 == 0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
        printf("\n");
    }*/


    //No.7
    /*for(int i = 1;i<=5;i++){
        for(int j = 1; j<=5; j++){
            if(i <=2 || i>3 ){
                if(j>3 || j<3){
                printf("1");
                }
                else{
                    printf("0");
                }
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }*/


    //No.8
    /*for(int i = 1;i<=5;i++){
        for(int j = 1; j<=5; j++){
            if(i == j){
                printf("1");
            }
            else{
                if(i == 1 && j ==5 || i ==5 && j== 1 ||
                i == 2 && j ==4 || i ==4 && j ==2){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
        
        }
            printf("\n");
    }*/


    //No.9
    /*for(int i =1; i<=5;i++){
        for(int j = 1;j<=5;j++){
            if((i == 5 || i == 1) && (j ==1 || j==5)){
                printf("0");
            }
            else if((i>1 && i <5) && (j>1 && j<5)){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }*/

    //No.10
    /*for(int i =1; i<=5;i++){
        for(int j = 1;j<=5;j++){
            printf("%d",i);
        }
        printf("\n");
    }*/

    //No.11
    /*for(int i =1; i<=5;i++){
        for(int j = 1;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }*/


    //No.12
    /*int t = 0;
    for(int i =1; i<=5;i++){
        for(int j = 1;j<=5;j++){
            printf("%d",j+t);
        }
        t = t+1;
        printf("\n");
    }*/

    
    //No.13
    /*int t = 1;
    for(int i =1; i<=5;i++){
        for(int j = 1;j<=5;j++){
            printf("%d",t);
            t = t+1;
        }
        
        printf("\n");
    }*/

    
    //No.14
    /*for(int i=1; i<=5; i++)
    {
        for(int j=5; j>5-i; j--){
            printf("%d", j);
        }

        for(int j=1; j<=5-i; j++){
            printf("%d", (5 - i + 1));
        }

        printf("\n");
    }*/


    //No.15
    /*for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("%d", j);
        }

        for(int j=i; j>1; j--)
        {
            printf("%d", 5);
        }

        printf("\n");
    }*/
}