// Card shuffling and dealing program
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void shuffle( int wDeck[] [13])
{
	int row , cols, card;
	
	for ( card = 1; card <= 52; card++)
	{
		do{
			row = rand() % 4;
			cols = rand() % 13;
	}
	while (wDeck[row][cols] != 0 );
	wDeck[row][cols] = card;
	}
}
void deal(const int wDeck[][13] , const char *wFace[], const char *wSuit[])
{
	int card , rows, cols;
	const char * space;
	for ( card = 1; card <= 52; card++)
	{
		for (int r = 0; r < 4; r++) 
		{
		for ( int c = 0; c < 13; c++)
			{
			if (wDeck[r][c] == card)
				{
					cout << card << ". " << wFace[c] << " of " << wSuit[r] << endl;
				}
			}
		}
	}	
}
int main ()
{
	const char *suite[4] = { "Heart" , "Diamonds" , "Cubs" , "Spades"};
	const char *face[13] = { "Ace" , "Deuce" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten" , "Jack" , "Queen" , "King"};
	int deck[4][13] = { 0 };
	
	srand ( time ( 0 ));
	
	shuffle (deck);
	deal ( deck, face, suite );
	return 0;
}
