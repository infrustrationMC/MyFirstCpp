#include <string>
#include <string.h>
#include "str.h"
#ifndef center_
#define center_
using namespace std;
string center(string inp, int n, string fillchar)
{
	int length = strl(inp);
	double fillcountfront = floor((n - length) / 2.0);
	double fillcountbehind = n - length - fillcountfront;
	string returnstr;
	for (int i = 0; i < fillcountfront; i++)
	{
		returnstr += fillchar;
	}
	returnstr += inp;
	for (int i = 0; i < fillcountbehind; i++)
	{
		returnstr += fillchar;
	}
	return returnstr;
}
#endif center_

