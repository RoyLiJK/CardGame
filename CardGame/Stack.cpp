#include<iostream>
#include<string>
#include"Card.h"
#include"Stack.h"
using namespace std;

Stack::Stack()
{
	capacity = 100;
	size = 0;
	stack = new Card*[capacity];
}

Stack::Stack(int cap)
{
	capacity = 100;
	size = 0;
	stack = new Card*[capacity];
}

int Stack::getSize()
{
	return size;
}

bool Stack::isFull()
{
	return size == capacity;
}

bool Stack::isEmpty()
{
	return size == 0;
}

bool Stack::push(Card * c)
{
	if (isFull()) 
	{
		cout << "stack is full";
		return false;
	}
		stack[size] = c;
		size++;
		return true;

}

Card * Stack::pop()
{
	if (isEmpty())
	{
		cout << "stack is empty";
		return NULL;
	}
		size--;
		Card* temp = stack[size];
		return temp;
}

Card * Stack::peek()
{
	if (isEmpty())
	{
		cout << "stack is empty";
		return NULL;
	}
	Card* temp = stack[size];
	return temp;
}

void Stack::display()
{

	for (int i = size - 1; i >= 0; i--)
	{
		
		stack[i]->display();
		
	}
}

