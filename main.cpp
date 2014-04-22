// main.cpp: определяет точку входа для консольного приложения.
//

#include "funField.h"
#include <stdio.h>
#include "step.h"


int main()
{

    int  massS[9];
    int prov;
    int x;
    for(int i=0;i<9;i++) massS[i]=-1;

    //massS[8]=0;
    //massS[3]=0;
    //massS[8]=1;
    funField(massS);
    x=step(massS,prov);
    if (x==-1)
    {
        printf("\nVi pitalis postavit v zanyatuy yacheiku\nSdelaite hod eshe raz");
        step(massS,prov);
    }
    else
    {
        massS[x]=0;
        funField(massS);
    }


	return 0;
}

