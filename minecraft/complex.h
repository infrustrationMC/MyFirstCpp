#include "lib.h"
#ifndef _comp_
#define _comp_
using namespace std;
class complex
{
private:
	double im, re;
	double im1, im2;
	double re1, re2;
public:
	void c_out(double re,double im)
	{
		cout << re << "+" << im << "i";
	}

	void c_sum(double re1, double im1, double re2, double im2)
	{
		double re_sum = re1 + re2;
		double im_sum = im1 + im2;
		cout << re_sum << "+" << im_sum << "i";
	}
};
#endif _comp_