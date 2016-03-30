#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
using namespace std;
class Card
{
private:
	int rank;
	int suit;
	int value;
public:
	Card();
	Card(int cardrank);
	Card(int cardrank, int cardsuit);

	int GetRank();
	int GetSuit();
	void SetRank(int rank);
	void SetSuit(int suit);
	int compareBySuit(const Card& other);
	int compareByRank(const Card& other);
	int compareByValue(const Card& other);

	int CompareTo(const Card& other);

	string getSuitAsString();
	string getRankAsString();
	void display();



};

#endif


