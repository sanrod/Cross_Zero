// main.cpp: определяет точку входа для консольного приложения.
//

#include"funField.h"

int main()
{
    int  massS[9];
    for(int i=0;i<9;i++) massS[i]=-1;

    massS[3]=0;
    massS[8]=1;
    funField(massS);


	return 0;
}

