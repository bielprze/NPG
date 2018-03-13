#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int stack_len;
void **stos;

int isEmpty()
{
	return stack_len==0 ? 1:0;
}

void stack_init()
{
	stos=malloc(24*sizeof(int));
	for(int i=0; i<24; i++)
		stos[i]=0;
	stack_len=0;
}

void push(void *element, int rozmiar)
{

}

void pop(size_t size_of_el)
{

}

int main()
{


	return 0;
}
