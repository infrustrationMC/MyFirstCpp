#include "lib.h"
#ifndef _isdigit_
#define _isdigit_
#define _MAX_CHAR_ARR_ 1000
bool isdigit_(char _isdigit[_MAX_CHAR_ARR_])
{
	int Return = 1;
	for (int i = 0; i < _MAX_CHAR_ARR_; i++)
	{
		char check = _isdigit[i];
		if ((check > 47) && (check < 57))
			Return *= 1;
		else
			Return *= 0;
	}
	bool r = bool(Return);
	return r;
}
#endif _isdigit_