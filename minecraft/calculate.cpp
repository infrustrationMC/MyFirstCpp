#include "lib.h"
#define _MAX_CHAR_ARR_ 1000
using namespace std;

//Từ đây trở đi, các tống sẽ đc kí hiệu bằng hàm sum() và biểu thức đại diện cho tổng. Tích sẽ là sumx()
//VD: sum(n) = 1 + 2 + ... + n
//VD: sumx(n) = n!

#if 0
int tong(int n);

int main()
{
	int soNguyen, tongCS(0);
	cout << "INP" << endl;
	cin >> soNguyen;
	tongCS = tong(soNguyen);
	cout << "OUT" << endl << tongCS << endl;
}

int tong(int n)
{
	int nTong(0);
	while (n != 0)
	{
		int nDV = n % 10;
		nTong += nDV;
		n = (n - nDV) / 10;
	}
	return nTong;
}
#endif Tính tổng các chữ số của 1 số nguyên bất kì

#if 0
int main()
{
	int a, b;
	cout << "Nhap 2 so can tim UCLN, cach nhau bang 1 dau cach: ";
	cin >> a >> b;
	cout << "UCLN cua 2 so " << a << " va " << b << " la: ";
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout << a << endl;
}
#endif Tìm ƯCLN

#if 0
int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int main()
{
	int a, b, uc, bc;
	cout << "Nhap 2 so can tim BCNN, cach nhau bang 1 dau cach: ";
	cin >> a >> b;
	cout << "BCNN cua 2 so " << a << " va " << b << " la: ";
	uc = UCLN(a, b);
	bc = a * b / uc;
	cout << bc << endl;
}
#endif Tìm BCNN

#if 0
#include "giatien.h"
using namespace tienvakm;
double tinhTien(double km);

int main()
{
	//double tien;
	double km;
	cout << setprecision(15);
	cout << "Nhap so kilomet ban da di: ";					//Comment các dòng code: Ctrl K rồi Ctrl C
	cin >> km;												//Uncomment: Ctrl K rồi Ctrl U
	tinhTien(km);
}

double tinhTien(double km)
{
	double tien(0);
	if (km <= KM_MO_CUA)
		cout << "So tien ban phai tra la " << GIA_MO_CUA << " dong." << endl;
	else if (km > KM_MO_CUA && km <= KM_CHANG_NGAN)
	{
		tien = GIA_MO_CUA + (km - KM_MO_CUA) * CHANG_NGAN;
		cout << "So tien ban phai tra la " << tien << " dong." << endl;
	}
	else if (km > KM_CHANG_NGAN)
	{
		tien = GIA_MO_CUA + CHANG_NGAN * (KM_CHANG_NGAN - KM_MO_CUA) + (km - KM_CHANG_NGAN) * CHANG_DAI;
		cout << "So tien ban phai tra la " << tien << " dong." << endl;
	}
	else if (km > KM_GIAM_GIA)
	{
		tien = (GIA_MO_CUA + CHANG_NGAN * (KM_CHANG_NGAN - KM_MO_CUA) + (km - KM_CHANG_NGAN) * CHANG_DAI) * (1 - PHAN_TRAM_GIAM_GIA);
		cout << "So tien ban phai tra la " << tien << " dong." << endl;
	}
	return tien;
}
// KM_MO_CUA kilômét đầu GIA_MO_CUA đồng
// KM_MO_CUA kilômét < km <= KM_CHANG_NGAN kilômét CHANG_NGAN đồng
// km > KM_CHANG_NGAN kilômét CHANG_DAI đồng
// km > KM_GIAM_GIA --> PHAN_TRAM_GIAM_GIA% off
#endif Tính tiền taxi

#if 0
int main()
{
	int n;
	long long X(1);
	cout << "INP" << endl;
	cin >> n;
	cout << "OUT" << endl;
	for (int i = 0; i < n; i++)
	{
		X *= (2 * i + 1);
		cout << "Tich cac so le tu 1 den " << 2 * i + 1 << " la " << X << endl;
	}
}
#endif sumx(2n+1)

#if 0
int main()
{
	int tong(0), s(0);
	int n;
	cout << "INP" << endl;
	cin >> n;
	cout << "OUT" << endl;
	for (int i = 1; i <= n; i++)
	{
		tong += i;
		s += tong;
	}
	cout << s << endl;
}
#endif //sum(sum(n)) = 1+(1+2)+(1+2+3)+...+(1+2+..+n)

#if 0
int main()
{
	double n, S(0), i;
	cout << "----------Chuong trinh tinh A = sum(1/(n*(n+1))----------\n";
	cout << "Nhap so n: n = ";
	cin >> n;
	cout << setprecision(10);
	for (i = 1; i < n; i++)
	{
		S += (1 / (i*(i + 1)));
	}
	cout << "A = " << S << endl;
}
#endif sum(1/(n*(n+1))

#if 0
int main()
{
	int n, tong(0);
	cout << "----------Chuong trinh tinh tong cac so tu 1 den n----------\n";
leibol:
	cout << "Nhap so n: n = ";
	cin >> n;
	if (!(n == 1) && !(n == 0) && !(n < 0))
	{
		for (int i = 1; i <= n; i++)
		{
			tong += i;
			cout << "Tong cac so tu 1 den " << i << " la " << tong << endl;
		}
	}
	else
	{
		cout << "Chuong trinh khong ho tro phep tinh voi n = " << n << endl;
		goto leibol;
	}
	return 0;
}
#endif Tính tổng các số từ 1 đến n (sum(n))

#if 0
int main()
{
	int n, tong(0), i;
	cout << "----------Chuong trinh tinh tong A=1^2+2^2+...+n^2----------\n";
	cout << setprecision(15);
leibol:
	cout << "Nhap so n: n = ";
	cin >> n;
	if (!(n == 1) && !(n == 0) && !(n < 0) && !(n > 1000))
	{
		for (i = 1; i <= n; i++)
		{
			tong += i * i;
		}
		cout << "Tong cac binh phuong tu 1 den " << n << "^2 = " << n * n << " la " << tong << endl;
	}
	else
	{
		cout << "Chuong trinh khong ho tro phep tinh voi n = " << n << endl;
		goto leibol;
	}
	return 0;
}
#endif Tính tổng A = sum(n²)

#if 0
int main()
{
	long double n, A{ 0 }, i;
	printf("----------Chuong trinh tinh tong A = 1 / 1 + 1 / 2 + 1 / 3 + ... + 1 / n----------\n");
	cout << setprecision(15);
lb:
	printf("Nhap so n: n = ");
	cin >> n;
	if (!(n == 1) && !(n == 0) && !(n < 0) && !(n > 1000))
	{
		for (i = 1; i <= n; i++)
			A = A + 1 / i;
		cout << "Gia tri cua A la A = " << A << endl;
	}
	else
	{
		cout << "Chuong trinh khong ho tro phep tinh voi n = " << n << endl;
		goto lb;
	}
}
#endif A = sum(1/n)

#if 0
int main()
{
	double n, S(1), i;
	cout << "----------Chuong trinh tinh giai thua cua mot so----------\n";
	cout << setprecision(15);
lb:
	cout << "Nhap so n: n = ";
	cin >> n;
	if (!(n == 1) && !(n == 0) && !(n < 0) && !(n > 100))
	{
		for (i = 1; i <= n; i++)
			S = S * i;
		cout << n << " ! = " << S << endl;
	}
	else
	{
		cout << "Chuong trinh khong ho tro phep tinh voi n = " << n << endl;
		goto lb;
	}
}
#endif A = n!

#if 0
double tich2so(double a, double b)
{
	return a * b*1.0;
}

int main()
{
	cout << std::setprecision(10);
	double a, b;
	cout << "Nhap so a: ";
	cin >> a;
	cout << endl;
	cout << "Nhap so b: ";
	cin >> b;
	cout << endl;
	cout << "Tich 2 so la: " << tich2so(a, b) << endl;
	return 0;
}
#endif Hàm tính tích 2 số