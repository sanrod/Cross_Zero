// main.cpp: ���������� ����� ����� ��� ����������� ����������.
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
    bool CorZ=false;
    for(int i=0;i<9;i++) massS[i]=-1;

    //massS[8]=0;
    //massS[3]=0;
    //massS[8]=1;
    funField(massS);
    while (endOfGame(massS))
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

        CorZ=!CorZ;
    }

	return 0;
}

