#pragma once
class stack
{
public:
	double *bottom;
	double *top;
	int size;
	stack();
	void clean();
	stack(int maxn);
	~stack();
	void push(double v);
	double pop();
	int full();
	int empty();
	void print();
	int items();
	void set(int max);

};

