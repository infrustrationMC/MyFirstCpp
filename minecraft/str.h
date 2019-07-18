#include <string>
#include <string.h>
#include "lib.h"
using namespace std;

#ifndef _str_
#define _str_
int strl(string a)
{
	int length = a.size();
	return length;
}

string strc(string a, string b)
{
	string strR = a + b;
	return strR;
}

string strc(string a, string b, string c)
{
	string strR = a + b + c;
	return strR;
}

char strlowl(char a)
{
	if ((a >= 'A') && (a <= 'Z'))
	{
		int k = (int)a + 32;
		char r = static_cast<char>(k);
		return r;
	}
	else
	{
		char Err[] = "Error";
		return Err[10];
	}
}

char strupl(char a)
{
	if ((a >= 'a') && (a <= 'z'))
	{
		int k = (int)a - 32;
		char r = static_cast<char>(k);
		return r;
	}
	else
	{
		char Err[] = "Error";
		return Err[10];
	}
}

char strcop(char destination[], char source[])
{
	int i(0);
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	return source[i-1];
}
#endif _str_