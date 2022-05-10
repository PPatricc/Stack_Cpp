#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

class stack
{
public:
	void push(int a);
	int pop();
	void clear();
	stack();
	~stack();
  int EntireSize=10;

private:
	int top;
	int* dane;
};
stack::stack()
{
    this->top=0;
    this->dane=(int*)malloc(10*sizeof(int));
}

stack::~stack()
{
    free(this->dane);
}

void stack::clear()
{
    this->top=0;
}

void stack::push(int a)
{
    if(this->top>=EntireSize){
        this->dane = (int*)(realloc(this->dane, ((this->EntireSize)+5)*sizeof(int)));
        (this->EntireSize)+=5;
    }
    this->dane[this->top++]=a;
}

int stack::pop()
{
    assert(this->top>0);
    return this->dane[--this->top];
}


