#include "end_of_game.h"
bool endOfGame (int mas[9])
{
	bool check = false;
	int check_number = 0;
	for (int i = 0; i < 9; i = i + 3)
	{
		if ((mas[i] == 0) && (mas[i + 1] == 0) && (mas[i + 2] == 0))
		{
			check = true;
			check_number = 1;
		}
		if ((mas[i] == 1) && (mas[i + 1] == 1) && (mas[i + 2] == 1))
		{
			check = true;
			check_number = 2;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((mas[i] == 0) && (mas[i + 3] == 0) && (mas[i + 6] == 0))
		{
			check = true;
			check_number = 1;
		}
		if ((mas[i] == 1) && (mas[i + 3] == 1) && (mas[i + 6] == 1))
		{
			check = true;
			check_number = 2;
		}
	}
	if ((mas[0] == 0) && (mas[4] == 0) && (mas[8] == 0))
	{
		check = true;
		check_number = 1;
	}
	if((mas[0] == 1) && (mas[4] == 1) && (mas[8] == 1))
	{
		check = true;
		check_number = 2;
	}
	if ((mas[2] == 0) && (mas[4] == 0) && (mas[6] == 0))
	{
		check = true;
		check_number = 1;
	}
	if ((mas[2] == 1) && (mas[4] == 1) && (mas[6] == 1))
	{
		check = true;
		check_number = 2;
	}
	if (check_number == 1)
		printf("Player 2 Win!!!");
	if (check_number == 2)
		printf("Player 1 Win!!!,player 2 looooooooooser!!!!");
	return check;
}
