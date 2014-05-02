// main.cpp: определяет точку входа для консольного приложения.
//

#include "funField.h"
#include <stdio.h>
#include "step.h"
#include "end_of_game.h"


int main()
{

    int  massS[9];
    int prov;
    int x;
    int CorZ=1;
    for(int i=0;i<9;i++) massS[i]=-1;

    //massS[8]=0;
    //massS[3]=0;
    //massS[8]=1;
    funField(massS);
    while (!endOfGame(massS))
    {
        x=step(massS,prov);
        if (x==-1)
        {
            printf("\nVi pitalis postavit v zanyatuy yacheiku\nSdelaite hod eshe raz");
            step(massS,prov);
        }
        else
        {
            massS[x]=CorZ;
            funField(massS);
        }

        if (CorZ==1) CorZ=0;
        else CorZ=1;
    }

    if (whoiswinner() == 1)
            printf("Player 2 Win!!!");
    if (whoiswinner() == 2)
            printf("Player 1 Win!!!,player 2 looooooooooser!!!!");

	return 0;
}

