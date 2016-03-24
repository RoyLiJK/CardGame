#include<iostream>
#include<string>
#include"Card.h"
#include"Stack.h"
using namespace std;

int main()
{
	Stack s(10);

	for (int i = 0; i < 10; i++)
	{
		s.push(new Card(i));
		s.display();
	}

	return 0;
}