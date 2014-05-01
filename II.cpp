#include<stdlib.h>
#include<time.h>

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
int ProverkaProigrish(int mas[],char Symbol)
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
void Random(int mas[],char Symbol)
{
    for(int i=0;i<9;i++)
        if(mas[i]==-1) mas[i]=Symbol;
}

int II(int mas[])
{
    srand(time(NULL));
    char SymbolI=0;
    char SymbolProtivnik=1;
    //rand()%50;
    int Kol_voHodov=0;
    for(int i=0; i<9; i++)
    {
        if(mas[i]!=-1)
            Kol_voHodov++;
    }
    switch(Kol_voHodov)
    {
    case 0:   int RandChislo=rand()%9;
              mas[RandChislo]=SymbolI; break;
    case 1:   if(mas[4]==(-1)) mas[4]=SymbolI;
              else mas[6]=SymbolI; break;
    case 2:
    case 3:
    case 4:
    case 5: if(Proverka(mas[],SymbolI)) if(Proverka(mas[],SymbolProtivnik))
    case 6: if(Proverka(mas[],SymbolI)) if(Proverka(mas[],SymbolProtivnik))
    case 7: if(Proverka(mas[],SymbolI)) if(Proverka(mas[],SymbolProtivnik)) Random(mas[],SymbolI);
    case 8: for(int i=0; i<9; i++)
            if(mas[i]==(-1)) mas[i]=SymbolI; break;
    }

}
