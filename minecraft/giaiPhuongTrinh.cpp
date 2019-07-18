#include "lib.h"
#define _MAX_CHAR_ARR_ 1000
using namespace std;

#if 0
#define maxNghiem 10000
int main()
{
	cout << "\tGiai phuong trinh nghiem nguyen bac nhat 3 bien ax + by + cz = d" << endl;
	int a, b, c, d, count(0), xCount(0), yCount(0), zCount(0);
	int Nghiem[3][maxNghiem];
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << "Nhap d: ";
	cin >> d;
	printf("Phuong trinh cua ban: %dx + %dy + %dz = %d\n", a, b, c, d);
	for (int x = 0; x <= d / a; ++x)
	{
		for (int y = 0; y <= (d - a * x) / b; y++)
		{
			for (int z = 0; z <= floor((d - a * x - b * y) / c * 1.0); ++z)
			{
				if (a * x + b * y + c * z == d)
				{
					printf("( %d , %d , %d )\n", x, y, z);
					x = Nghiem[1][xCount];
					xCount++;
					y = Nghiem[1][yCount];
					yCount++;
					z = Nghiem[1][zCount];
					zCount++;
					count++;
				}
			}
		}
	}
	if (count == 0)
	{
		cout << "Phuong trinh vo nghiem." << endl;
	}
	else
	{
		cout << "Phuong trinh co " << count << " nghiem." << endl;
	}
	/*     PHẦN TÌM NGHIỆM ĐỂ LẠI SAU
	int xSearch, ySearch, zSearch, searchMode;
	cout << "Chon mode tim kiem: \n1.Tim x\n2.Tim y\n3.Tim z\n4.Quit\nNhap mode: ";
	cin >> searchMode;
	switch (searchMode)
	{
	case 1: //Mode tìm  các phần tử x
	cout << "Nhap gia tri x can tim: ";
	cin >> xSearch;
	while (1)
	{
	}
	exit(0);
	case 2: //Mode tìm  các phần tử y
	exit(0);
	case 3: //Mode tìm  các phần tử z
	exit(0);
	case 4:
	exit(0);
	}
	*/
	return 0;
}
#endif Giải phương trình nghiệm nguyên bậc 1 3 biến x, y, z : ax + by + cz = d

#if 0
int main()
{
	int a, b, c, a_, b_, c_;
	cout << "\t\t\t\tGIAI HE 2 PT BAC NHAT 2 AN\n"
		<< "\t\ta * x + b * y = c\n"
		<< "\t\ta'* x + b'* y = c'\n"
		<< "Nhap cac so a, b, c, a', b', c': \n";
	cout << "a  = "; cin >> a;
	cout << "b  = "; cin >> b;
	cout << "c  = "; cin >> c;
	cout << "a' = "; cin >> a_;
	cout << "b' = "; cin >> b_;
	cout << "c' = "; cin >> c_;
	int D, Dx, Dy;
	D = a * b_ - a_ * b;
	Dx = c * b_ - b * c_;
	Dy = a * c_ - a_ * c;
	printf("%d %d %d\n", D, Dx, Dy);
	printf("HPT ban da nhap: \n\t\t%dx + %dy = %d\n\t\t%dx + %dy = %d\n", a, b, c, a_, b_, c_);
	if (D != 0)
	{
		printf("HPT co 1 nghiem duy nhat: ( x , y ) = ( %d , %d )\n", Dx / D, Dy / D);
	}
	else if ((Dx != 0) || (Dy != 0))
	{
		cout << "HPT vo nghiem.\n";
	}
	else if ((Dx == 0) && (Dy == 0))
	{
		for (int x = 0; x <= c / a; ++x)
		{
			for (int y = 0; y <= (c - a * x) / b; ++y)
			{
				if (a * x + b * y == c)
				{
					printf("( x , y ) = ( %d , %d )\n", x, y);
				}
			}
		}
	}
}
#endif Giải hệ 2 pt bậc nhất 2 ẩn (deving)

#if 0
int a, b;

void nhapHS()
{
	cout << "Nhap he so a: ";
	cin >> a;
	cout << "Nhap he so b: ";
	cin >> b;
}

void vn()
{
	cout << "Bat phuong trinh vo nghiem." << endl;
}

void vsn()
{
	cout << "Bat phuong trinh co vo so nghiem." << endl;
}

int main()
{
	cout << "Giai bat phuong trinh bac nhat ax + b < 0" << endl;
	nhapHS();
	if (a == 0 && !(b == 0))
	{
		if (b > 0)
			vn();
		else if (b == 0)
			vn();
		else
			vsn();
	}
	else if (!(a == 0) && b == 0)
	{
		if (a < 0)
			cout << "BPT co nghiem x > 0" << endl;
		else
			cout << "BPT co nghiem x < 0" << endl;
	}
	else if ((a == 0) && (b == 0))
	{
		vn();
	}
	else
	{
		if (a > 0)
			cout << "BPT co nghiem la x < " << -b << "/" << a << endl;
		else
			cout << "BPT co nghiem la x > " << -b << "/" << a << endl;
	}
	return 0;
}
#endif Hàm giải bất phương trình bậc nhất (deving)

#if 0
int main()
{
	double a, b, c, d;
	cout << std::setprecision(7);
	cout << "====================--GIAI PHUONG TRINH BAC HAI ax2+bx+c=0--====================" << endl;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if (a == 0 && !(b == 0) && !(c == 0))
	{
		cout << "Day la phuong trinh bac nhat." << endl;
		if (b > 0 && c > 0)
		{
			cout << "Phuong trinh co 1 nghiem x = " << -b << " / " << c << " hay x = " << -b / c << "." << endl;
		}
		else
		{
			cout << "Phuong trinh co 1 nghiem x = " << -b << " / " << c << " hay x = " << -b / c << "." << endl;
		}
	}
	else if (a == 0 && b == 0 && !(c == 0))
	{
		cout << "Phuong trinh co dang c = 0. Phuong trinh co vo so nghiem." << c << "." << endl;
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		cout << "Phuong trinh co dang 0 = 0. Phuong trinh co vo so nghiem." << endl;
	}
	else
	{
		cout << "Delta=" << d << endl;
		if (d < 0)
		{
			cout << "Phuong trinh vo nghiem." << endl;
		}
		else if (d == 0)
		{
			cout << "Phuong trinh co nghiem kep la x1 = x2 = " << -b << "/" << 2 * a << " hay x1 = x2 = " << -b / (2 * a) << endl;
		}
		else
		{
			cout << "X1 la " << (-b + (sqrt(double(d)))) / 2 * a << endl;
			cout << "X2 la " << (-b - (sqrt(double(d)))) / 2 * a << endl;
		}
	}
	return 0;
}
#endif Giải phương trình bậc 2

#if 0
#define maxNghiem 10000
int main()
{
	cout << "\tGiai phuong trinh nghiem nguyen bac nhat 2 bien ax + by = c" << endl;
	int a, b, c, count(0), Count(0);
	int Nghiem[2][maxNghiem];
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	printf("Phuong trinh cua ban: %dx + %dy = %d\n", a, b, c);
	for (int x = 0; x <= c / a; ++x)
	{
		for (int y = 0; y <= (c - a * x) / b; ++y)
		{
			if (a * x + b * y == c)
			{
				printf("( %d , %d )\n", x, y);
				count++;
				Nghiem[0][Count] = x;
				Nghiem[1][Count] = y;
				Count++;
				//Kiem tra nghiem
				//cout << Count << " ";
				//cout << Nghiem[0][Count - 1] << " " << Nghiem[1][Count - 1] << endl;
			}
		}
	}
	if (count == 0)
	{
		cout << "Phuong trinh vo nghiem." << endl;
	}
	else
	{
		cout << "Phuong trinh co " << count << " nghiem." << endl;
	}
	// ĐANG NẰM XÓ CHỜ CÁCH GIẢI QUYẾT
	/*
	int mode, xSearch, ySearch;
	cout << "Mode:\n1.Tim x\n2.Tim y\n3.Quit\nNhap mode: ";
	cin >> mode;
	switch (mode)
	{
	case 1:
	cout << "Tim x can nhap: ";
	cin >> xSearch;
	cout << "Voi x = " << xSearch << " co (cac) nghiem y tuong ung sau: ";
	if (xSearch == Nghiem[0][Count - 1])
	{
	cout << "y = " << Nghiem[1][Count - 1];
	}
	break;
	case 2:
	cout << "Tim y can nhap: ";
	cin >> ySearch;
	cout << "Voi y = " << ySearch << " co (cac) nghiem x tuong ung sau: " << endl;
	if (ySearch == Nghiem[1][count - 1])
	{
	printf("%d %d", ySearch, Nghiem[1][count - 1]);
	cout << "x = " << Nghiem[0][count - 1];
	}
	break;
	case 3:
	exit(0);
	}
	*/
}
#endif Giải phương trình nghiệm nguyên bậc 1 2 biến x,y : ax + by = c