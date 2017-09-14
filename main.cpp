#include <iostream>
#include <string>
#include "print.h"

using namespace std;

int main()
{
	char u = 'U';
	char *ptr = &u;
	

	string str = "HELLO WORLD! HELLO WORLD!";
	cout << "hello world! hello world!" << endl;
	print(str);
	print(ptr);
	printp((void *)ptr);
	system("pause");
	return 0;

}
