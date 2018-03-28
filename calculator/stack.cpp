#include "stack.h"
#include <iostream>


stack::stack()
{
	top = 0;
	bottom = top;
	size = 0;
	/*bottom = new double[5];
	if (bottom)
		size = 5;
	else
		size = 0;
	top = bottom;
	for (int i = 0; i < size; i++)
		bottom[i] = 0;
	//throw gcnew System::NotImplementedException();*/
}

void stack::clean()
{
	for (int i = 0; i < size; i++)
		bottom[i] = 0;
	//throw gcnew System::NotImplementedException();
}



stack::stack(int maxn)
{
	bottom = new double[maxn];
	if (bottom)
		size = maxn;
	else
		size = 0;
	top = bottom;
	for (int i = 0; i < size; i++)
		bottom[i] = 0;
//throw gcnew System::NotImplementedException();
}

stack::~stack()
{
	//delete[]bottom;
	//throw gcnew System::NotImplementedException();
}

void stack::push(double v)
{
	*(top++) = v;
	//throw gcnew System::NotImplementedException();
}

double stack::pop()
{
	return *(--top);
}

int stack::full()
{
	return (items() >= size);
}

int stack::empty()
{
	return (top == bottom);
}

void stack::print()
{
	std::cout << "Elementy na stosie: " << std::endl;
	for (int i=size-1; i >= 0; i--)
	{
		std::cout << bottom[i] << ", ";
	}
	//throw gcnew System::NotImplementedException();
}

int stack::items()
{
	return top - bottom;
}

void stack::set(int max)
{
	if (bottom)
		delete[]bottom;

		bottom = new double[max];
		if (bottom)
			size = max;
		else
			size = 0;
		top = bottom;
		for (int i = 0; i < size; i++)
			bottom[i] = 0;
	//throw gcnew System::NotImplementedException();
}
