#include <iostream>
#include <time.h>

using namespace std;

int one(int a)
{
	return a;
}
int one(int a, int b)
{
	return a + b;
}
int one(int a, int b, int c)
{
	return a + b + c;
}
int one(int a, int b, int c, int d)
{
	return a + b + c + d;
}
int one(int a, int b, int c, int d, int e)
{
	return a + b + c + d + e;
}



//-------------------------------------------------------------------


int two(int a)
{
	return a;
}
int two(int a, int b)
{
	if(a>b){
		return a>b ? a: b;
	}
}
int two(int a, int b, int c)
{
	if (a > b && a > c) {
		return a;
	}
	else if (a < b && a < c)
	{
		if (b > c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}
int two(int a, int b, int c, int d)
{
	if (a > b && a > c && a > d) {
		return a;
	}
	else if (a < b && a < c && a < d)
	{
		if (b > c)
		{
			return b;
		}
		else if (c > d)
		{

		}
		else
		{
			return d;
		}
	}
}
int two(int a, int b, int c, int d, int e)
{
	if (a > b && a > c && a > d && a > e) {
		return a;
	}
	else if (a < b && a < c && a < d && a < e)
	{
		if (b > c)
		{
			return b;
		}
		else if (c > d)
		{
			return c;
		}
		else if (d > e)
		{
			return d;
		}
		else
		{
			return e;
		}
	}
}


//-------------------------------------------------------------------


void poisk(int a, int b, bool n)
{
	if (n == true)
	{
		for (int i = a; i < b; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << endl;
			}
		}
	}
	else
	{
		for (int i = a; i < b; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << endl;
			}
		}
	}
}


//-------------------------------------------------------------------


void end(int day, int month, int year)
{
	bool f = false;
	if (year%4==0 || year%400==0 && year%100!=0)
	{
		f = true;
	}
	if (day <= 0 || day > 31)
	{
		cout << "Error!!!" << endl;
	}
	else
	{
		switch (month)
		{
		case 1: cout << day << " Cічня " << year << " років" << endl;
			break;
		case 2: cout << day << " Лютня " << year << " років" << endl;
			break;
		case 3: cout << day << " Березеня " << year << " років" << endl;
			break;
		case 4: cout << day << " Квітня " << year << " років" << endl;
			break;
		case 5: cout << day << " Травня " << year << " років" << endl;
			break;
		case 6: cout << day << " Червня " << year << " років" << endl;
			break;
		case 7: cout << day << " Липня " << year << " років" << endl;
			break;
		case 8: cout << day << " Серпня " << year << " років" << endl;
			break;
		case 9: cout << day << " Вересень " << year << " років" << endl;
			break;
		case 10: cout << day << " Жовтень " << year << " років" << endl;
			break;
		case 11: cout << day << " Листопад " << year << " років" << endl;
			break;
		case 12: cout << day << " Грудень " << year << " років" << endl;
			break;
		default:cout << "Error!!!" << endl;
			break;
		}

		if (f = true)
		{
			cout << "Високосний" << endl;
		}
		else
		{
			cout << "Не високосний" << endl;
		}
	}
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	cout << one(2) << endl;

	//-------------------------------------------------------------------

	cout << two(2) << endl;

	//-------------------------------------------------------------------

	poisk(4, 10, true);

	//-------------------------------------------------------------------

	end(11, 5, 2000);

	return(0);
}