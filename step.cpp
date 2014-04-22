#include"step.h"
#include<conio.h>
//#include<stdio.h>
int step(int mas[],int prov)
{
    char null='0';
    char symbol=getch();
    int location=symbol-null-1;
    if(mas[location]!=-1) prov=-1;
    else prov=location;
    return prov;
}
