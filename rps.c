#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Draw.h"
#include "Objects.h"


char player_input[10];
int player_turn, computer_turn;
int main()
{
    prompt("Rock Paper Scissorss?");
    player_turn = input(player_input);
    computer_turn = Computer_input();
    if(winn(player_turn, computer_turn) == 1)
        prompt("You won this turn");
    else if (winn(player_turn, computer_turn) == 0)
        prompt("Computer won this turn");
    else if (winn(player_turn, computer_turn) == -1)
        prompt("It is a tie this turn");
    return 0;
}
