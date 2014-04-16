/*
  -вывод поля из файла в консоль (drawField)

*/
#include<iostream>
#include"funField.h"
#include<stdio.h>
#include <windows.h>

char mass[7][7];
char f(int x)
{
    if (x==0)
        return 'O';
    if(x==1)
        return 'X';
    if(x==(-1))
        return ' ';

}
void funOut(char mass[][7])
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            printf("%c", mass[i][j]);
        }
        printf("\n");
    }
}

int funField(int mas[])
{
    system("cls");
    int i,j;

    for(i=0; i<7; i++)
    {
        for(j=0;j<7;j++)
        {
            if(((i!=0)||(i!=2)||(i!=4)||(i!=6))&&((j!=0)||(j!=2)||(j!=4)||(j!=6)))  mass[i][j]=0xFF;
            if((i==0)&& (j==0)) mass[i][j]=0xC9;
            if((i==0)&&(j==6)) mass[i][j]=0xBB;
            if((i==6)&&(j==0)) mass[i][j]=0xC8;
            if((i==6)&&(j==6)) mass[i][j]=0xBC;
            if(((i==0)||(i==2)||(i==4)||(i==6))&&((j!=0)&&(j!=6))) mass[i][j]=0xCD;
            if (((i==2)||(i==4)) && ((j==2)||(j==4))) mass[i][j]=0xCE;
            if(((i!=0)&&(i!=6))&&((j==0)||(j==2)||(j==4)||(j==6))) mass[i][j]=0xBA;
        }
    }

    mass[1][5]=f(mas[0]);
    mass[3][5]=f(mas[1]);
    mass[5][5]=f(mas[2]);
    mass[1][3]=f(mas[3]);
    mass[3][3]=f(mas[4]);
    mass[5][3]=f(mas[5]);
    mass[1][1]=f(mas[6]);
    mass[3][1]=f(mas[7]);
    mass[5][1]=f(mas[8]);
    funOut(mass);
        return 0;
}
