#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char you, char comp)
{
    if (you==comp){
        return 0;
    }
    else if ((you=='r' && comp=='s') || (you=='p' && comp=='r') || (you=='s' && comp=='p')){
        return 1;
    }
    else{
        return -1;
    } 
}
int main()
{
    char you,comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    if (number<=33){
        comp='r';
    }
    else if (number<=66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Enter 'r' for rock, 'p' for paper, or 's' for scissors : ");
    scanf("%c", &you);

    int result = rockpaperscissor(you, comp);
    if (result==0){
        printf("Game Drawn !  ");
    }
    else if (result==1){
        printf("You win !  ");
    }
    else{
        printf("You lose !  ");
    }

    printf("You chose '%c' and the computer chose '%c'", you, comp);
    
    

    return 0;
}