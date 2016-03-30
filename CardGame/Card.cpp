#include<iostream>
#include<string>
#include"Card.h"
using namespace std;

Card::Card()
{
	rank = 0;
	suit = 0;
}
Card::Card(int CardRank)
{
	rank = CardRank;
	suit = CardRank;
}

Card::Card(int CardRank, int CardSuit)
{
	rank = CardRank;
	suit = CardSuit;
}

int Card::GetRank()
{
	return rank;
}

int Card::GetSuit()
{
	return suit;
}

void Card::SetRank(int rank)
{
	rank = rank;
}

void Card::SetSuit(int suit)
{
	suit = suit;
}

int Card::compareBySuit(const Card & other)
{
	return suit - other.suit;
}

int Card::compareByRank(const Card& other)
{
	return rank - other.rank;
}

int Card::compareByValue(const Card & other)
{
	return value - other.value;
}

int Card::CompareTo(const Card & other)
{
	return rank - other.rank;
	return suit - other.suit;
}

string Card::getRankAsString() 
{
	string rankArray[] = { "Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
	return rankArray[Rank];
}

string Card::getSuitAsString() 
{
	string suitArray[] = { "Diamonds","Clubs","Hearts","Spades" };
	return suitArray[Suit];
}

void Card::display()
{
	cout << getRankAsString() << " of " << getSuitAsString() << endl;
}