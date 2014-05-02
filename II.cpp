#include<stdlib.h>
#include<time.h>
#include"end_of_game.h"
int Proverka(int mas[],char Symbol)
{
    //Proverka vertikali 1
    if (mas[0]==Symbol && mas[3]==Symbol && mas[6]==-1)
        mas[6]=Symbol;
    else if (mas[0]==Symbol && mas[3]==-1 && mas[6]==Symbol)
        mas[3]=Symbol;
    else if (mas[0]==-1 && mas[3]==Symbol && mas[6]==Symbol)
        mas[0]=Symbol;

    //Proverka vertikali 2
    else if (mas[1]==Symbol && mas[4]==Symbol && mas[7]==-1)
        mas[7]=Symbol;
    else if (mas[1]==Symbol && mas[4]==-1 && mas[7]==Symbol)
        mas[4]=Symbol;
    else if (mas[1]==-1 && mas[4]==Symbol && mas[7]==Symbol)
        mas[1]=Symbol;

    //Proverka vertikali 3
    else if (mas[2]==Symbol && mas[5]==Symbol && mas[8]==-1)
        mas[8]=Symbol;
    else if (mas[2]==Symbol && mas[5]==-1 && mas[8]==Symbol)
        mas[5]=Symbol;
    else if (mas[2]==-1 && mas[5]==Symbol && mas[8]==Symbol)
        mas[2]=Symbol;

    //Proverka gorizontali 1
    else if(mas[0]==Symbol && mas[1]==Symbol && mas[2]==-1)
        mas[2]=Symbol;
    else if (mas[0]==Symbol && mas[1]==-1 && mas[2]==Symbol)
        mas[1]=Symbol;
    else if (mas[0]==-1 && mas[1]==Symbol && mas[2]==Symbol)
        mas[0]=Symbol;

    //Proverka gorizontali 2
    else if (mas[3]==Symbol && mas[4]==Symbol && mas[5]==-1)
        mas[5]=Symbol;
    else if (mas[3]==Symbol && mas[4]==-1 && mas[5]==Symbol)
        mas[4]=Symbol;
    else if (mas[3]==-1 && mas[4]==Symbol && mas[5]==Symbol)
        mas[3]=Symbol;

    //Proverka gorizontali 3
    else if (mas[6]==Symbol && mas[7]==Symbol && mas[8]==-1)
        mas[8]=Symbol;
    else if (mas[6]==Symbol && mas[7]==-1 && mas[8]==Symbol)
        mas[7]=Symbol;
    else if (mas[6]==-1 && mas[7]==Symbol && mas[8]==Symbol)
        mas[6]=Symbol;

    //Proverka diagonali 1
    else if (mas[6]==Symbol && mas[4]==Symbol && mas[2]==-1)
        mas[2]=Symbol;
    else if (mas[6]==Symbol && mas[4]==-1 && mas[2]==Symbol)
        mas[4]=Symbol;
    else if (mas[6]==-1 && mas[4]==Symbol && mas[2]==Symbol)
        mas[6]=Symbol;

    //Proverka diagonali 2
    else if (mas[0]==Symbol && mas[4]==Symbol && mas[8]==-1)
        mas[8]=Symbol;
    else if (mas[0]==Symbol && mas[4]==-1 && mas[8]==Symbol)
        mas[4]=Symbol;
    else if (mas[0]==-1 && mas[4]==Symbol && mas[8]==Symbol)
        mas[0]=Symbol;

    else return false;
    return true;
}


void Copy(int masOld[],int masNew[])
{
    for(int i=0;i<9;i++)
        masNew[i]=masOld[i];
}
int Win(int masProba[],int SymbolI,int SymbolProtivnik)
{
    for(int i=0;i<9; i++)
   {
       char Zam;
       if(masProba[i]==-1)
       {
           Zam=masProba[i];
           masProba[i]=SymbolI;
           if(endOfGame(masProba)) if(whoiswinner()==SymbolProtivnik+1) masProba[i]=Zam;
           else { mas[i]; return true;}
       }
   }
    return false;
}

int II(int mas[])
{
    srand(time(NULL));
    char PostavlenoChisel=0;
    int masProba[9];
    Copy(mas,masProba);
    char SymbolI=0;
    char SymbolProtivnik=1;
    for(int i=0;i<9;i++)
    {
        if(mas[i]!=-1) PostavlenoChisel++;
    }
    if(PostavlenoChisel==0) {
                                mas[rand()%9]=SymbolI;
                                return true;
                            }
    //rand()%50;
    for(int i=0;i<9;i++)
    {
        if(Win(masProba,SymbolI,SymbolProtivnik)) {  Copy(masProba,mas); return true;}
        if(Win(masProba,SymbolProtivnik,SymbolI)) ;
        masProba[i]=SymbolI;
        //if(Win(masProba,SymbolProtivnik)) continue;

   }

}
