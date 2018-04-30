#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "Objects.h"

void prompt(char *message)
{
    printf("=>%s\n", message);
}


void drawScissor()
{
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
}

void drawRock()
{
    printf("    _______\n");
    printf("---'   ____)\n");
    printf("      (_____)\n");
    printf("      (_____)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
}

void drawPaper()
{
    printf("     _______\n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)\n");
}

int input(char *pick)
{
    int choice = -1;
    prompt("Your Turn");
    while(true)
    {
        printf("=>");
        scanf("%s", pick);
        //lowercase pick
        for(int i = 0; pick[i]!='\0'; i++)
        {
            pick[i] = tolower(pick[i]);
        }
        if(strcmp("scissors", pick)==0)
        {
            choice = Scissors;
            drawScissor();
            break;
        }
        else if(strcmp("rock", pick)==0)
        {
            choice = Rock;
            drawRock();
            break;
        }
        else if(strcmp("paper", pick)==0)
        {
            choice = Paper;
            drawPaper();
            break;
        } else {
            prompt("Invalid Input! try again");
        }
    }
    return choice;
}

int Computer_input()
{
    srand(time(NULL));
    int computer_choice = rand()%(2-0+1) + 0 ;
    prompt("Computer's Turn");
    switch (computer_choice)
    {
        case 0:
            drawRock();
            break;
        case 1:
            drawPaper();
            break;
        case 2:
            drawScissor();
            break;
    }
    return computer_choice;
}
