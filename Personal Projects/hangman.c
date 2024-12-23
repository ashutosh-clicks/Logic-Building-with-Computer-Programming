#include <stdio.h>
#include <string.h>

int main(){
    char word[12];
    printf("Enter Your Word: ");
    scanf("%s",&word);
    char guess;
    int gamestate = 0;
    int n = 1;
    int length = strlen(word);


    while (gamestate == 0){

        

        for(int i = 0; i<length;i++ ){
            if(word[i] == guess){
                printf("%c",word[i]);
            }
            else{
                printf("_");
            }
            // printf("_");
            printf("Your %d guess: ",n);
            scanf("%c\n",&guess);
            n++;
        }

        

        
        
    }

}