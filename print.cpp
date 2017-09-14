#include "print.h"

void print(string a)
{
	cout << a << endl;
}

void printp(void* a)
{
	char *b = (char *)a;
	cout << b << endl;
}