#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int stonepaperscissor(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // pp
    // xx
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sp
    // ps
    // sx 
    // xs
    // xp
    // px
    

    if(you=='s' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='s'){
        return 1;
    }

    if(you=='s' && comp=='x'){
        return 1;
    }
    else if(you=='x' && comp=='s'){
        return -1;
    }

    if(you=='p' && comp=='x'){
        return -1;
    }
    else if(you=='x' && comp=='p'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='x';
    }
    
    printf("Enter 's' for stone, 'p' for water and 'x' for scissor\n");
    scanf("%c", &you);
    int result = stonepaperscissor(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}