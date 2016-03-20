#include<iostream>
#include<string>
#include"Card.h"
using namespace std;

Card::Card()
{
	
}

Card::Card(int CardRank, int CardSuit)
{
	Rank = CardRank;
	Suit = CardSuit;
}

int Card::GetRank()
{
	return Rank;
}

int Card::GetSuit()
{
	return Suit;
}

void Card::SetRank(int rank)
{
	Rank = rank;
}

void Card::SetSuit(int suit)
{
	Suit = suit;
}

int Card::compareBySuit(const Card & other)
{
	return Suit - other.Suit;
}

int Card::compareByRank(const Card& other)
{
	return Rank - other.Rank;
}

int Card::compareByValue(const Card & other)
{
	return Value - other.Value;
}

int Card::CompareTo(const Card & other)
{
	return Rank - other.Rank;
	return Suit - other.Suit;
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
	cout << GetRank() << " of " << GetSuit() << endl;
}