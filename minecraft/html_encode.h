#ifndef html_encode
#define html_encode
#include "lib.h"
using namespace std;
void Char(char i)
{
	if (i >= 97 && i <= 122) //chu thuong
		cout << "%" << i - 96;
	else if (i >= 65 && i <= 90) //chu hoa
		cout << "%" << i - 24;
	else if (i >= 48 && i <= 57) //so
		cout << "%" << i - 18;
	switch (i)
	{
		case '\"':
			cout << "%22";
			break;
		case ' ':
			cout << "%20";
			break;
	}
}
#endif html_encode