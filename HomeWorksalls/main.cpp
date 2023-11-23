#include <iostream>
using namespace std;
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_6
//#define TASK_7

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int x = 0, a, b, c;
	for (int i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (c == b || b == a || c == a)
		{
			x++;
		}

	}
	std::cout << " „исел " << x << std::endl;
#endif // TASK_1

#ifdef TASK_2
	int x = 0, a, b, c;
	for (int i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (c != b && b != a && c != a)
		{
			x++;
		}
	}
	std::cout << " „исел " << x << std::endl;

#endif // TASK_2

#ifdef TASK_3
	int a = 0, b = 0, c = 0, d = 0;
	std::cout << "¬ведите любое целое число :" << std::endl; std::cin >> a;
	while (a > 0)
	{
		b = a % 10;
		if ((b != 3) && (b != 6))
		{
			d = d + b * pow(10, c);
			c++;
		}
		a = a / 10;
	}
	std::cout << "¬аше число :" << d << std::endl;
#endif // TASK_3

#ifdef TASK_4
	int a, b;
	std::cout << "¬ведите любое целое число :" << std::endl; std::cin >> a;
	for (int i = a - 1; i > 1; i--)
	{
		b = i;
		if ((a % (b * b) == 0) && (a % (b * b * b) != 0))
		{
			std::cout << b << "\n";
		}
	}
#endif // TASK_4
	          

#ifdef TASK_6
	int a = 0, b = 0;
	cout << "¬ведите любое целое число :";
	cin >> a;
	bool c;
	for (int i = 1; i <= a; i++)
	{
		c = ((a % (i)) == 0);

		if (c == 1) { cout << i << endl; }

	}
#endif // TASK_6

#ifdef TASK_7
	int a = 0, b,;
	cout << "¬ведите 2 числе через пробел :";
	cin >> a >> b;
	bool c, d;
	for (int i = 1; i <= a; i++)
	{
		c = ((a % (i)) == 0); d = ((b % (i)) == 0);

		if ((c && d) == 1) { cout << i << endl; }

	}
#endif // TASK_7


	
}