#include<iostream>
#include<string>
#include"Card.h"
using namespace std;

Card::Card()
{
	Rank = "unknown";
	Suit = "unknown";
}

Card::Card(string CardRank, string CardSuit)
{
	Rank = CardRank;
	Suit = CardSuit;
}

string Card::GetRank()
{
	return Rank;
}

string Card::GetSuit()
{
	return Suit;
}

string Card::SetRank(string rank)
{
	Rank = rank;
}

string Card::SetSuit(string suit)
{
	Suit = suit;
}
