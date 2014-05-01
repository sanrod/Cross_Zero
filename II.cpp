#include<stdlib.h>
int II(int mas[])
{
    srand(time(NULL));

    //rand()%50;
    int Kol-voHodov=0;
    for(int i=0; i<10; i++)
    {
        if(mas[i]!=-1)
            Kol-voHodov++;
    }
    switch(Kol-voHodov)
    {
    case 0:   int RandChislo=rand()%9;
              mas[RandChislo]=0; break;
    case 1:   if(mas[0]) ;
    }

}
