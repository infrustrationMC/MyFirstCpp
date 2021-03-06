#include "lib.h"
#include <stdio.h>
#include <fstream>
using namespace std;

#define _MAX_CHAR_ARR_ 1000

void wait(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

#if 0
int main()
{
	long long n, ql;
	int c(1);
lb:
	cout << "Nhap so n: ";
	cin >> n;
	ql = n;
	cout << "====================" << n << "====================" << endl;
	if (n == 0)
		c = 1;
	while (n != 1)
	{
		if (n % 2 == 0) // số chẵn
		{
			n /= 2;
			cout << n << endl;
		}
		else
		{
			n = n * 3 + 1;
			cout << n << endl;
		}
		c++;
	}
	cout << "===" << ql << "===" << c << "===" << endl;
	c = 0;
	goto lb;
	return 0;
}
#endif Lẻ x3 cộng 1, chẵn chia đôi

#if 0
int main()
{
	int nNg, nT, nN;
	cout << "Nhap ngay sinh cua ban: ";
	cin >> nNg;
	cout << "Nhap thang sinh cua ban: ";
	cin >> nT;
	cout << "Nhap nam sinh cua ban: ";
	cin >> nN;
	cout << "Dit me may thang cho sinh vao ngay " << nNg << " thang " << nT << " nam " << nN << "." << endl;
	return 0;
}
#endif Ngày tháng năm sinh

#if 0
int main()
{
	int n;
	cout << "NHAP SO CUA BAN: ";
	cin >> n;
	if (n % 2 == 1)
		cout << " ---> Day la so le" << endl;
	else
		cout << " ---> Day la so chan" << endl;
	return 0;
}
#endif Kiểm tra số lẻ số chẵn

#if 0
#include <iostream>
#include <cstring>
using namespace std;

void chuyenDoiCoSo(char s[], int n) {
	int coSo = 0, soDu = 0;
	cout << "Nhap vao he co so can chuyen: ";
	cin >> coSo;

	int i = 0;
	while (n > 0) {
		soDu = n % coSo;
		if (soDu < 10) {
			s[i] = '0' + soDu;
		}
		else {
			s[i] = 'A' + (soDu - 10);
		}
		i++;
		n = n / coSo;
	}
	s[i] = '\0';
	for (int i = strlen(s) - 1; i >= 0; i--) {
		cout << s[i];
	}
}

int main(int argc, char const *argv[]) {
	int n = 0;
	char s[100];
	cout << "Nhap vao mot so tu nhien: ";
	cin >> n;

	chuyenDoiCoSo(s, n);
	cout << endl;
	return 0;
}
#endif Chuyển đổi giữa các hệ số

#if 0
int main()
{
	double a, b, c, dT, p, aP, bP, cP, dT2;
	cout << "=====Tinh dien tich tam giac voi do dai 3 canh cho truoc=====" << endl;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;
	p = (a + b + b) / 2;
	cout << "Nua chu vi cua tam giac la: " << p << endl;
	cout << "Theo cong thuc He-rong: S=sqrt(p(p-a)(p-b)(p-c))" << endl;
	aP = p - a;
	cout << "p - a = " << aP << endl;
	bP = p - b;
	cout << "p - b = " << bP << endl;
	cP = p - c;
	cout << "p - c = " << cP << endl;
	dT2 = p * (p - a)*(p - b)*(p - c);
	dT = sqrt(double(dT2));
	cout << "Dien tich cua tam giac la S = " << dT << endl;
	return 0;
}
#endif Diện tích tam giác với độ dài ba cạnh cho trước

#if 0
int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << n << " = ";
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			cout << i;
			n /= i;
			if (n != 1) cout << "*";
		}
		else i++;
	}
	cout << endl;
	return 0;
}
#endif Phân tích thừa số nguyên tố (copied)

#if 0
int main()
{
	double bk, dt;
	const double pi{ 3.14 };
	cout << "Nhap ban kinh hinh tron: r = ";
	cin >> bk;
	dt = bk * bk * pi;
	cout << "Dien tich hinh tron la S = pi * r * r = " << pi << " * " << bk << " * " << bk << " = " << dt << endl;
	return 0;
}
#endif Diện tích hình tròn

#if 0
int main()
{
	int p;
	cout << "Nhap mot so: ";
	cin >> p;
	for (int i = 1; i < p && (p%i == 0); i += p)
	{
		cout << i << endl;
	}
	return 0;
}
#endif Hàm kiểm tra số nguyên tố (developing)

#if 0
int main()
{
	int a, i, j;
	cout << "Ban hay nhap do dai canh : ";
	cin >> a;
	if (a < 60)
	{
		for (i = 1; i <= a; i++)
		{
			for (j = 1; j <= a; j++)
				cout << "* "; //luu y,co mot khoang trong o day
			cout << "\n";
		}
	}
	else
		cout << "Hinh vuong qua lon, khong the in ra duoc." << endl;
	return 0;
}
#endif Ctrinh xuất hình vuông đặc (copied)

#if 0
int main()
{
	double xA, xB, yA, yB, xI, yI;
	cout << "Nhap toa do cua diem A: ( xA ; yA ) = ";
	cin >> xA >> yA;
	cout << "Nhap toa do cua diem B: ( xB ; yB ) = ";
	cin >> xB >> yB;
	xI = (xA + xB) / 2;
	yI = (yA + yB) / 2;
	cout << "Toa do cua trung diem I la I( " << xI << " ; " << yI << " )" << endl;
	return 0;
}
#endif Hàm tìm tring điểm I đoạn thẳng AB trên mặt phẳng

#if 0
int main()
{
	double vBD, gt, t, vC;
	cout << "Nhap van toc ban dau: ";
	cin >> vBD;
	cout << "Nhap gia toc: ";
	cin >> gt;
	cout << "Nhap thoi gian: ";
	cin >> t;
	vC = vBD + gt * t;
	cout << "Van toc cuoi la: " << vC << endl;
	return 0;
}
#endif Vận tốc ban đầu, gia tốc, thời gian và vận tốc cuối

#if 0
int main()
{
lb3:
	double gP, pP;
	int h, m, s;
	cout << "Nhap gio trong ngay: ";
	cin >> h;
	if (h >= 0 && h < 25)
	{
	lb2:
		cout << "Nhap phut trong gio: ";
		cin >> m;
		if (m >= 0 && m < 61)
		{
		lb1:
			cout << "Nhap giay trong phut: ";
			cin >> s;
			if (s >= 0 && s < 61)
			{
				gP = 24 * 60 * h + 60 * m + s;
				pP = 60 * h + m + s / 60;
				cout << "Bay gio la " << h << " gio " << m << " phut " << s << " giay." << endl;
				cout << "Bay gio la giay thu " << gP << " trong ngay." << endl;
				cout << "Bay gio la phut thu " << pP << " trong ngay." << endl;
			}
			else
			{
				cout << "So giay khong hop le. Xin nhap lai." << endl;
				goto lb1;
			}
		}
		else
		{
			cout << "So phut khong hop le. Xin nhap lai." << endl;
			goto lb2;
		}
	}
	else
	{
		cout << "So gio khong hop le. Xin nhap lai." << endl;
		goto lb3;
	}
}
#endif Đếm tg trong ngày (deving)

//Từ đây trở đi, các tống sẽ đc kí hiệu bằng hàm sum() và biểu thức đại diện cho tổng. Tích sẽ là sumx()
//VD: sum(n) = 1 + 2 + ... + n
//VD: sumx(n) = n!

#if 0

void inA()
{
	cout << "A";
}

void inB()
{
	cout << "B";
}
void inC()
{
	cout << "C";
}
void inD()
{
	cout << "D";
}
void inE()
{
	cout << "E";
}

void inF()
{
	cout << "F";
}

int main()
{
	int red, green, blue, r1, r2, g1, g2, b1, b2;
label:
	cout << "\t\t\t\t\t==============================" << endl;
	cout << "\t\t\t\t\t Chuyen doi mau RGB sang HEX" << endl;
	cout << "\t\t\t\t\t==============================" << endl;
	cout << "Nhap ma RED: ";
	cin >> red;
	cout << "Nhap ma GREEN: ";
	cin >> green;
	cout << "Nhap ma BLUE: ";
	cin >> blue;
	if ((red < 256 && red >= 0) && (green < 256 && green >= 0) && (blue < 256 && blue >= 0))
	{
		r1 = red / 16;
		r2 = red % 16;
		g1 = green / 16;
		g2 = green % 16;
		b1 = blue / 16;
		b2 = blue % 16;
		cout << "Ma RGB ban da nhap la: ( " << red << " , " << green << " , " << blue << " )" << endl;
		cout << "Ma HEX cua mau da nhap la: #";
		switch (r1)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << r1;
			break;
		}
		switch (r2)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << r2;
			break;
		}
		switch (g1)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << g1;
			break;
		}
		switch (g2)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << g2;
			break;
		}
		switch (b1)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << b1;
			break;
		}
		switch (b2)
		{
		case 10:
			inA();
			break;
		case 11:
			inB();
			break;
		case 12:
			inC();
			break;
		case 13:
			inD();
			break;
		case 14:
			inE();
			break;
		case 15:
			inF();
			break;
		default:
			cout << b2 << endl;
			break;
		}
		cout << endl;
	}
	else
	{
		cout << "Ban da nhap sai ma RGB. Hay nhap lai ma." << endl;
		goto label;
	}
}
#endif Chuyển đổi màu RGB sang HEX

#if 0
int main()
{
	cout << "\t\t\t\t\t==============================" << endl;
	cout << "\t\t\t\t\t Chuyen doi mau HEX sang RGB" << endl;
	cout << "\t\t\t\t\t==============================" << endl;
	int v1, v2, v3, v4, v5, v6, r, g, b;
	cout << "Nhap ma"
}
#endif Chuyển đổi màu HEX sang RGB (deving)

//Từ đây, hàm srand() và rand() sẽ đc sử dụng

#if 0
int main()
{
	srand(time(NULL));
	int a = 0, n;
	n = rand() % 100;
	while (a < n)
	{
		n = rand() % 100;
		a++;
		cout << n << "\t" << a << endl;
	}
	return 0;
}
#endif Số ngẫu nhiên

//Từ đây mảng sẽ đc sử dụng

#if 0
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0;; i++)
	{
		SetConsoleTextAttribute(hConsoleColor, i);
		cout << i;
		cout << endl;
	}
}
#endif Đổi màu console

#if 0
#define MAX 10
int main()
{
	int arr[10]{ };
	for (int i = 0; i < MAX; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < MAX; i++) {
		cout << arr[i] << " " << endl;
	}

	return 0;
}
#endif Mảng 1

#if 0

int main()
{
	int so, chuc, donvi;
	cout << "Nhap so co hai chu so ban can xuat cach doc: ";
	cin >> so;
	donvi = so % 10;
	chuc = so / 10;
	cout << "Cach doc so " << so << " la: ";
	switch (chuc)
	{
	case 1:
		cout << "Muoi";
		break;
	case 2:
		cout << "Hai muoi";
		break;
	case 3:
		cout << "Ba muoi";
		break;
	case 4:
		cout << "Bon muoi";
		break;
	case 5:
		cout << "Nam muoi";
		break;
	case 6:
		cout << "Sau muoi";
		break;
	case 7:
		cout << "Bay muoi";
		break;
	case 8:
		cout << "Tam muoi";
		break;
	case 9:
		cout << "Chin muoi";
		break;
	}
	switch (donvi)
	{
	case 0:
		cout << ".";
		break;
	case 1:
		cout << " mot.";
		break;
	case 2:
		cout << " hai.";
		break;
	case 3:
		cout << " ba.";
		break;
	case 4:
		cout << " bon.";
		break;
	case 5:
		cout << " lam.";
		break;
	case 6:
		cout << " sau.";
		break;
	case 7:
		cout << " bay.";
		break;
	case 8:
		cout << " tam.";
		break;
	case 9:
		cout << " chin.";
		break;
	}
}
#endif In ra cách đọc số có 2 chữ số

#if 0
int main()
{
	int so, tram, chuc, dvi;
	cout << "Nhap so co ba chu so ban can xuat cach doc: ";
	cin >> so;
	dvi = so % 10;
	tram = so / 100;
	chuc = (so - tram * 100 - so % 10) / 10;
	cout << "Cach doc so " << so << " la: ";
	switch (tram)
	{
	case 1:
		cout << "Mot";
		break;
	case 2:
		cout << "Hai";
		break;
	case 3:
		cout << "Ba";
		break;
	case 4:
		cout << "Bon";
		break;
	case 5:
		cout << "Nam";
		break;
	case 6:
		cout << "Sau";
		break;
	case 7:
		cout << "Bay";
		break;
	case 8:
		cout << "Tam";
		break;
	case 9:
		cout << "Chin";
		break;
	}
	cout << " tram ";
	switch (chuc)
	{
	case 0:
		cout << "linh";
		goto skip;
		break;
	case 1:
		cout << "";
		break;
	case 2:
		cout << "hai ";
		break;
	case 3:
		cout << "ba ";
		break;
	case 4:
		cout << "bon ";
		break;
	case 5:
		cout << "nam ";
		break;
	case 6:
		cout << "sau ";
		break;
	case 7:
		cout << "bay ";
		break;
	case 8:
		cout << "tam ";
		break;
	case 9:
		cout << "chin ";
		break;
	}
	cout << "muoi";
skip:
	switch (dvi)
	{
	case 0:
		cout << ".";
		break;
	case 1:
		cout << " mot.";
		break;
	case 2:
		cout << " hai.";
		break;
	case 3:
		cout << " ba.";
		break;
	case 4:
		cout << " bon.";
		break;
	case 5:
		cout << " lam.";
		break;
	case 6:
		cout << " sau.";
		break;
	case 7:
		cout << " bay.";
		break;
	case 8:
		cout << " tam.";
		break;
	case 9:
		cout << " chin.";
		break;
	}
	cout << "\n";
	return 0;
}
#endif In ra cách đọc số có 3 chữ số

#if 0
#define PI 3.14159
int main()
{
	cout << PI;
	for (double i = 0; i <= 180; i += 15)
	{
		cout << "sin(" << i << ") = " << sin(i*(180 / PI)) << endl;
	}
	for (double i = 0; i <= 180; i += 15)
	{
		cout << "cos(" << i << ") = " << cos(i*(180 / PI)) << endl;
	}
	for (double i = 0; i <= 180; i += 15)
	{
		cout << "tan(" << i << ") = " << tan(i*(180 / PI)) << endl;
	}
}
#endif In ra bảng //sin cos tan (lỗi vì ct tính theo rad)

#if 0
int main()
{
	cout << "\t\t\tNhap va xuat thong tin co ban" << endl;
	string ten;
	cout << "Nhap ten day du cua ban (viet hoa chu cai dau, khong dau): ";
	getline(cin, ten);
	cin.ignore();
	cout << "Nhap tuoi cua ban: ";
	int tuoi, ngaysinh, thangsinh;
	cin >> tuoi;
	cout << "Nhap ngay sinh cua ban: ";
	cin >> ngaysinh;
	cout << endl;
	cout << "Nhap thang sinh cua ban: ";
	cin >> thangsinh;
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Ten cua ban la: " << ten << endl;
	cout << endl;
	cout << "Ban " << tuoi << " tuoi, sinh ngay " << ngaysinh << " thang " << thangsinh << " nam " << 2018 - tuoi << endl;
	return 0;
}
#endif Chương trình nhập và xuất thông tin cơ bản

#if 0
int kiemtratgvuong(int a, int b, int c)
{
	if (a*a + b * b == c * c)
		return 1;
	else
		return 0;
}

int main()
{
	cout << "Nhap 3 canh cua tam giac: ";
	int a, b, c;
	cin >> a >> b >> c;
	int vuong = kiemtratgvuong(a, b, c);
	if (vuong == 1)
		cout << "Day la tam giac vuong" << endl;
	else
		cout << "Day khong la tam giac vuong" << endl;
}
#endif Kiểm tra tam giác vuông

#if 0
class hop
{
public:
	int dai;
	int rong;
	int cao;
};

int main()
{
	hop hop1;
	cin >> hop1.cao;
	cin >> hop1.dai;
	cin >> hop1.rong;
	int V = hop1.cao * hop1.dai * hop1.rong;
	cout << V << endl;
}
#endif Klass(ko hieu)

#if 0
int main()
{
	cout << "\t\t\t\t\tTRO CHOI DOAN SO" << endl;
	int real, guess, max, min;
	cout << "May tinh se dua ra 1 so bat ki trong khoang tu min den max. Ban co the nhap gia tri min va max. Khoang cach giua min va max cang lon thi tro choi cang kho." << endl;
nhaplai:
	cout << "Nhap gia tri min: ";
	cin >> min;
	cout << "Nhap gia tri max: ";
	cin >> max;
	if (min < max)
	{
		cout << "Ban se nhan duoc goi y neu so cua ban lon hon hoac nho hon so cua may. Ban san sang chua? " << endl;
		cout << "A. Chua." << endl;
		cout << "B. Roi!!" << endl;
	saiso:
		cout << "Nhap 1 neu ban san sang va 0 neu chua." << endl;
		int sansang;
		int j = 0;
		cin >> sansang;
		if (sansang == 1)
		{
			srand(time(0));
			real = rand() % (max - min + 1) + min;
			//cout << real << " " << j << endl;
			cout << "Game da bat dau!!" << endl;
		sai:
			cout << "Ban hay nhap so ban du doan: ";
			cin >> guess;
			if (guess == real, j != 0)
			{
				cout << "Xin chuc mung, ban da doan dung!!" << endl;
				goto skip;
				j++;
			}
			else if (guess < real, j != 0)
			{
				cout << "So ban doan nho hon so cua may." << endl;
				j++;
				goto sai;
			}
			else if (guess > real, j != 0)
			{
				cout << "So ban doan lon hon so cua may." << endl;
				j++;
				goto sai;
			}
			else
			{
				cout << "Error";
			}
		}
		else if (sansang == 0)
		{
			cout << "End game." << endl;
			for (int i = 5; i >= 0; i--)
			{
				cout << "\t\t" << i << endl;
				wait(1);
			}
			exit(0);
		}
		else
			goto saiso;
	skip:
		if (j != 0)
			cout << "Ban da doan dung sau " << j - 1 << " lan nhap." << endl;
		else if (j == 0, guess == real)
			cout << "Ban da doan dung sau lan nhap dau tien!!! Xin chuc mung ban!!\n\n\n\n\n";
	}
	else
	{
		cout << "Ban da nhap sai, gia tri min lon hon hoac bang max." << endl;
		goto nhaplai;
	}
}
#endif Trò chơi đoán số random

#if 0
int dequy(long long c);
int main()
{
	long long c;
	cin >> c;
	for (long long i = 0; i <= c; i++)
	{
		cout << i << "! = " << dequy(i) << endl;
	}
}

int dequy(long long c)
{
	if (c == 0 || c == 1)
		return 1;
	else
		return c * dequy(c - 1);
}
#endif Đệ quy err

#if 0
int soDao(int so)
{
	int nSoDao(0);
	while (so != 0)
	{
		int DV = so % 10;
		nSoDao = (nSoDao * 10) + DV;
		so /= 10;
	}
	return nSoDao;
}
bool doiXung(int n)
{
	if (n == soDao(n))
		return true;
	else
		return false;
}

int main()
{
	int n;
	cout << "INP" << endl;
	cin >> n;
	cout << "OUT" << endl;
	if (doiXung(n) == 1)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
}
#endif Kiểm tra số đối xứng

#if 0
void printStar(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
}

void printSpace(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " ";
	}
}

int main()
{
	cout << "\t\t\t\t\t\t\t";
	//printSpace();
	//printStar();
	//Line 1
	printSpace(1);
	printStar(3);
	printSpace(3);
	printStar(3);
	printSpace(4);
	printStar(1);
	printSpace(4);
	printStar(3);
	//Line 2
	cout << endl << "\t\t\t\t\t\t\t";
	printStar(1);
	printSpace(3);
	printStar(1);
	printSpace(1);
	printStar(1);
	printSpace(3);
	printStar(1);
	printSpace(2);
	printStar(2);
	printSpace(3);
	printStar(1);
	printSpace(3);
	printStar(1);
	//Line 3
	cout << endl << "\t\t\t\t\t\t\t";
	printStar(1);
	printSpace(3);
	printStar(1);
	printSpace(1);
	printStar(1);
	for (int i = 0; i < 4; i++)
	{
		printSpace(3);
		printStar(1);
	}
	//Line 4
	cout << endl << "\t\t\t\t\t\t\t";
	printSpace(4);
	printStar(1);
	printSpace(1);
	printStar(1);
	printSpace(3);
	printStar(1);
	for (int i = 0; i < 3; i++)
	{
		printSpace(3);
		printStar(1);
	}
	//Line 5
	cout << endl << "\t\t\t\t\t\t\t";
	printSpace(3);
	printStar(1);
	printSpace(2);
	printStar(1);
	for (int i = 0; i < 2; i++)
	{
		printSpace(3);
		printStar(1);
	}
	printSpace(4);
	printStar(3);
	//Line 6
	cout << endl << "\t\t\t\t\t\t\t";
	printSpace(2);
	printStar(1);
	for (int i = 0; i < 5; i++)
	{
		printSpace(3);
		printStar(1);
	}
	//Line 7
	cout << endl << "\t\t\t\t\t\t\t";
	printSpace(1);
	printStar(1);
	printSpace(4);
	printStar(1);
	for (int i = 0; i < 4; i++)
	{
		printSpace(3);
		printStar(1);
	}
	//Line 8
	cout << endl << "\t\t\t\t\t\t\t";
	printStar(1);
	printSpace(5);
	printStar(1);
	for (int i = 0; i < 4; i++)
	{
		printSpace(3);
		printStar(1);
	}
	//Line 9
	cout << endl << "\t\t\t\t\t\t\t";
	printStar(5);
	printSpace(2);
	printStar(3);
	printSpace(3);
	printStar(3);
	printSpace(3);
	printStar(3);
	cout << endl << "\t\t\t\t\t\t\t";
	for (int i = 0; i < 10; i++)
	{
		cout << "\n" << endl;
	}
}
#endif CHÚC MỪNG NĂM MỚI MẬU TUẤT 2018!!

#if 0
void inSoPhuc(int thuc, int ao)
{
	cout << thuc << " + " << ao << "i";
}

void congSoPhuc(int thuc1, int ao1, int thuc2, int ao2)
{
	int thuc = thuc1 + thuc2;
	int ao = ao1 + ao2;
	cout << thuc << " + " << ao << "i";
}

void truSoPhuc(int thuc1, int ao1, int thuc2, int ao2)
{
	int thuc = thuc1 - thuc2;
	int ao = ao1 - ao2;
	cout << thuc << " + " << ao << "i";
}

void nhanSoPhuc(int thuc1, int ao1, int thuc2, int ao2)
{
	int thuc = thuc1 * thuc2 - ao1 * ao2;
	int ao = ao1 * thuc2 + ao2 * thuc1;
	cout << thuc << " + " << ao << "i";
}

void chiaSoPhuc(int a, int b, int c, int d)
{
	double thuc = (double)(a * c + b * d) / (double)(c * c + d * d);
	double ao = (double)(b * c - a * d) / (double)(c * c + d * d);
	cout << thuc << " + " << ao << "i";
}

double modul(int thuc, int ao)
{
	double zet = (double)thuc * thuc + (double)ao * ao;
	double z = sqrt(zet);
	return z;
}

void soPhucLienHop(int thuc, int ao)
{
	cout << thuc << " - " << ao << "i";
}

int main()
{
	int a, b, c, d;
	cout << "Nhap so phuc a+bi" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "So ban vua nhap la ";
	inSoPhuc(a, b);
	cout << "\n";
	cout << "Module cua so ban vua nhap la ";
	cout << "z = " << modul(a, b) << endl;
	cout << "So phuc lien hop cua so ban vua nhap la ";
	soPhucLienHop(a, b);
	cout << "\n";
	cout << "Nhap so phuc c+di" << endl;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	cout << "So ban vua nhap la ";
	inSoPhuc(c, d);
	cout << "\n";
	cout << "Module cua so ban vua nhap la ";
	cout << "z = " << modul(c, d) << endl;
	cout << "So phuc lien hop cua so ban vua nhap la ";
	soPhucLienHop(c, d);
	cout << "\n";
	cout << "Tong cua hai so phuc ban vua nhap la ";
	congSoPhuc(a, b, c, d);
	cout << endl;
	cout << "Hieu cua hai so phuc ban vua nhap la ";
	truSoPhuc(a, b, c, d);
	cout << endl;
	cout << "Tich cua hai so phuc ban vua nhap la ";
	nhanSoPhuc(a, b, c, d);
	cout << endl;
	cout << "Thuong cua hai so phuc ban vua nhap la ";
	chiaSoPhuc(a, b, c, d);
	cout << endl;
}
#endif Số phức

#if 0
#include "center.h"

int main()
{
	string str, fill;
	unsigned int n;
	cout << "Nhap vao chuoi: ";
	getline(cin, str);
	cout << "Nhap vao do dai: ";
	cin >> n;
	if ((str.size() < n) && n > 0)
	{
		cout << "Nhap vao chuoi muon thay the, nhap &0% cho khoang trang: ";
		cin >> fill;
		if (fill == "&0%")
		{
			cout << "Chuoi xuat: " << endl << center(str, n, " ") << "\n\n\n\n";
		}
		else
		{
			cout << "Chuoi xuat: " << endl << center(str, n, fill) << "\n\n\n\n";
		}
	}
	else
	{
		wcerr << "Error";
		goto skip;
	}

skip:
	return 0;
}
#endif Hàm /* .center() */ của Python trong C++

#if 0
#include <string.h>
int main()
{
	char strINP[_MAX_CHAR_ARR_];
	cout << "INP" << endl;
	cin >> strINP;
	bool check = isdigit(strINP);
	if (check = true)
	{
		cout << "YES";
	}
	else
	{
		printf("NO");
	}
}
#endif Hàm /* .isdigit() */ của Python trong C++

/*
					BETTER STRING LIBRARY: str.h
strl() thay cho strlen()
strc(2 hoặc 3 string) thay cho strcat
strcop() thay cho strcpy()
strupl() và strlowl() chuyển đổi 1 kí tự
_strupr_s() và _strlwr_s() giữ nguyên
*/

#if 0
#include "str.h"
int main()
{
	char d[_MAX_CHAR_ARR_] = "DziUfHizFjoHcHJioGFnMf";
	char s[_MAX_CHAR_ARR_];
	strcop(d, s);
	cout << d << " " << s;
}
#endif Test thư viện //str.h

#if 0
int demSCS(int inp)
{
	int count(0);
	while (inp != 0)
	{
		inp /= 10;
		count++;
	}
	return count;
}

bool SoTuMan(int inp)
{
	int soMu = demSCS(inp);
	int BoNho, Tong(0);
	int Tam = inp;
	while (Tam != 0)
	{
		BoNho = Tam % 10;
		Tong += pow(BoNho, soMu);
		Tam /= 10;
	}
	return (Tong == inp);
}

int main()
{
	int INP;
	cout << "INP" << endl;
	cin >> INP;
	cout << "OUT" << endl;
	if (SoTuMan(INP))
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
}
#endif Check số tự mãn (Số bằng tổng các lũy thừa mũ số chữ số của các chữ số của số đó)

#if 0
int main()
{
	/*
	**********
	 *********
	  ********
	   *******
		******
		 *****
		  ****
		   ***
			**
			 *
	*/
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 10 - i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 10; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 10 - i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
#endif In tam giác vuông bằng dấu sao *

#if 0
int main()
{
	/* Tạo 1 tệp

	ofstream out("text.mp3");
	out << "My text here: " << endl;
	out.close();

	*/
	/* Mở tệp và lấy dữ liệu

	string str;
	ifstream infile;
	infile.open("input.inp");
	getline(infile, str);
	infile.close();
	printf("STR: %d\n", str);

	*/
}
#endif Play with system

#if 0
#include "lib_p.h"
#include "str.h"
//----------
//----------
//----------
//----------
#if 0
string convert(string input)
{
	return input;
}

int main()
{
	string input;
	cout << "Ban hay nhap cac not nhac theo thu tu, cach nhau bang mot dau cach. Nhap dau | de xuong dong. Nhap == de ket thuc." << endl;
	getline(cin, input);
	cout << "Bai nhac ban vua nhap: " << endl;
	char str[_MAX_CHAR_ARR_];
	strncpy(str, str.c_str(), sizeof(str));
	str[sizeof(str) - 1] = 0;
}
#endif Chuyển đổi note ABCD -> Do Re Mi (ERR)

#if 0
int main()
{
	char input[_MAX_CHAR_ARR_];
	cout << "Nhap mang can dao nguoc: ";
	cin.getline(input, _MAX_CHAR_ARR_);
	int out_char_num = strlen(input);
	char output[_MAX_CHAR_ARR_];
	for (int i = 0; i < out_char_num; i++)
	{
		output[out_char_num - i - 1] = input[i];
	}
	cout << "Mang da dao nguoc: ";
	for (int i = 0; i < out_char_num; i++)
	{
		cout << output[i];
	}
	cout << endl;
	return 0;
}
#endif Đảo ngược mảng ký tự

#if 0
#include "html_encode.h"
int main()
{
	char i[_MAX_CHAR_ARR_];
	cin.getline(i, _MAX_CHAR_ARR_);
	for (int j = 0; j < strlen(i); j++)
	{
		Char(i[j]);
	}
	cout << "\n";
}
#endif Encode HTML cho char_[]
//----------
//----------
//----------
//----------
#endif String zone

#if 0
int main()
{
	int sJahr, eJahr, Jahr;
	cout << "\t\t\tCHUONG TRINH NAM NHUAN" << endl;
	cout << "1.Kiem tra mot nam co phai la nam nhuan.\n2.Tim nam nhuan giua 2 nam cho truoc.\nChon mode: ";
	int mode;
	cin >> mode;
	if (mode == 1)
	{
		cout << "Nhap vao nam can kiem tra nam nhuan: ";
		cin >> Jahr;
		if (Jahr % 4 == 0)
		{
			cout << "Nam " << Jahr << " la nam nhuan." << endl;
		}
		else
		{
			cout << "Nam " << Jahr << " khong phai la nam nhuan." << endl;
		}
	}
	else if (mode == 2)
	{
		cout << "Nhap vao nam bat dau va nam ket thuc cach nhau bang mot khoang trang: ";
		cin >> sJahr >> eJahr;
		cout << "Cac nam nhuan giua hai nam " << sJahr << " va " << eJahr << " la: ";
		for (int i = sJahr; i <= eJahr; i++)
		{
			if (i % 4 == 0)
			{
				cout << i << " ";
			}
		}
	}
}
#endif Kiểm tra năm nhuận. Tìm năm nhuận giữa 2 năm cho trước

#if 0
int main()
{
	int n;
	cout << "Nhap n: " << endl;
	cin >> n;
	for (int i = 1; i < 11; i++)
	{
		cout << n << "\t*\t" << i << "\t=\t" << n * i << endl;;
	}
}
#endif Xuất bảng cửu chương

#if 0
int main()
{
	string can[10] = { "Canh" , "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
	string chi[12] = { "Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Meo","Thin","Ty","Ngo","Mui" };
	int Nam;
	cout << "Nhap nam: ";
	cin >> Nam;
	int Can = Nam % 10;
	int Chi = Nam % 12;
	cout << can[Can] << " " << chi[Chi] << endl;
}
#endif Đọc tên năm

#if 0
void inHangDay(int canh)
{
	cout << "*";
	for (int i = 0; i < canh; i++)
	{
		cout << " *";
	}
	cout << "\n";
}
void inHangThieu(int canh)
{
	cout << "*";
	for (int i = 0; i < canh + 1; i++)
	{
		cout << "  ";
	}
	cout << " *\n";
}

int main()
{
	int n;
	cout << "Nhap chieu dai canh: ";
	cin >> n;
	inHangDay(n);
	for (int i = 0; i < n - 2; i++)
	{
		inHangThieu(n - 2);
	}
	inHangDay(n);
}
#endif In hình vuông rỗng có cạnh bằng n

#if 0
int main()
{
	int nDec, nDectemp;
	int c(0);
	int cBin_rev[_MAX_CHAR_ARR_], cBin[_MAX_CHAR_ARR_];
	cout << "Nhap vao so can chuyen doi sang he so 2: ";
	cin >> nDec;
	nDectemp = nDec;
	do
	{
		cBin_rev[c] = nDec % 2;
		nDec /= 2;
		c++;
	} while (nDec != 1);
	cBin_rev[c] = 1;
	for (int j = 0; j < c; j++)
	{
		cBin[c - 1 - j] = cBin_rev[j];
	}
	printf("So %d trong he so 2 la: 1", nDectemp);
	for (int i = 0; i < c; i++)
	{
		cout << cBin[i];
	}
	cout << "\n";
}
#endif DEC to BIN 