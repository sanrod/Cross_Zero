/*
  -вывод пол€ из файла в консоль (drawField)
  -в зависимости от выбора цифры, записать Cross.txt или Zero.txt в соответствующую €чейку(setPlayEl(int numCell,int cell))
  -
*/
#include<iostream>
#include"funField.h"
#include<stdio.h>
int funField(char mass[15][15])
{
    int i,j;
    for(i=0; i<15; i++)
    {
        for(j=0;j<15;j++)
        {
            if(((i!=0)||(i!=4)||(i!=9)||(i!=14))&&((j!=0)||(j!=4)||(j!=9)||(j!=14)))  mass[i][j]=0xFF;
            if((i==0)&& (j==0)) mass[i][j]=0xC9;
            if((i==0)&&(j==14)) mass[i][j]=0xBB;
            if((i==14)&&(j==0)) mass[i][j]=0xC8;
            if((i==14)&&(j==14)) mass[i][j]=0xBC;
            if(((i==0)||(i==4)||(i==9)||(i==14))&&((j!=0)&&(j!=14))) mass[i][j]=0xCD;
            if (((i==4)||(i==9)) && ((j==4)||(j==9))) mass[i][j]=0xCE;
            if(((i!=0)&&(i!=14))&&((j==0)||(j==4)||(j==9)||(j==14))) mass[i][j]=0xBA;
            printf("%c",mass[i][j]);
        }
        printf("\n");
    }
        return 0;
}
