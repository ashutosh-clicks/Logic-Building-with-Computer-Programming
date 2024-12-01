#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <conio.h>

int board(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf(". ");
        }
        printf("%d", i);
        printf("\n");
    }
}
int dice(){
    return rand() % 6 + 1;
}
int main(){
     board();
    int player1;
    int gamestate;
    gamestate = 0;

    if(gamestate == 0){
        printf("*\n");
        printf("Press any key to start.");
        char start;
        if(start == getch()){
            gamestate = 1;
        }
    }

}

