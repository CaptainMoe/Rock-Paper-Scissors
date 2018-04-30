
int winner[3] = {2, 0, 1};

int winn(unsigned Player, unsigned Computer)
{
    if(winner[Player] == Computer)
        return 1;
    else if (winner[Computer] == Player)
        return 0;

    return -1;
}
