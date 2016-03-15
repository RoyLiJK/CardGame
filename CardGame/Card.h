#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
using namespace std;
class Card
{
private:
	string Rank;
	string Suit;

public:
	Card();
	Card(string cardrank, string cardsuit);
	string GetRank();
	string GetSuit();
	string SetRank(string rank);
	string SetSuit(string suit);




};

#endif


