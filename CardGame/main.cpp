#include<iostream>
#include"Card.h"

int main()
{
	Card A;
	A.SetRank("Ace");
	cout << A.GetRank() << endl;

	return 0;
}