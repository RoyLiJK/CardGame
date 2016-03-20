#include<iostream>
#include"Card.h"

int main()
{
	Card A, B;
	A.SetRank(3);
	B.SetRank(5);
	cout << A.GetRank() << endl;
	cout << B.GetRank() << endl;
	cout << A.compareByRank(B);


	return 0;
}