#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<string>
#include"Card.h"
using namespace std;

class Stack
{
	private:
		Card** stack;
		int size;
		int capacity;

	public:
		Stack();
		Stack(int cap);
		int getSize();
		bool push(Card* c);
		Card* pop();
		Card* peek();
		string display();
		bool isFull();
		bool isEmpty();
};

#endif
