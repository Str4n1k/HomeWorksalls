#include <iostream>
#include <conio.h>
using namespace std;

#ifdef ENUM_FOR_TASK_1
enum Userchoice
{
	����� = 0,
	�����������_���� = 1,
	�����_���� = 2,
	�������_�������������� = 3,
	�����������_����� = 4
};
#endif // ENUM_FOR_TASK_1
#ifdef DEFINE_FOR_TASK_2
//#define UPPER_LEFT_ANGLE    (char)218
//#define UPPER_RIGHT_ANGLE   (char)191
//#define LOWER_RIGHT_ANGLE   (char)217
//#define LOWER_LEFT_ANGLE    (char)192
//#define HORIZONTAL_LINE     (char)196
//#define VERTICAL_LINE       (char)179
//#define WHITE_BOX           (char)219
//#define BLACK_BOX           ' '
//#define WHITE_BOX          "\xDB\xDB"
//#define BLACK_BOX          "\x20\x20"  
#endif // DEFINE_FOR_TASK_2

//#define ENUM_FOR_TASK_1
//#define TASK_1
//#define TASK_2
//#define DEFINE_FOR_TASK_2



void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int a, e, b, x = 0, c = 0, d, sum = 0,choice,enumUserchoice;
	std::cout << "������� ����� :" << std::endl; std::cin >> a;
	b = a;
	e = a;
	while (a)
	{
		a /= 10;
		x++;
	}
	while (e)
	{
		if (e % 10 == 0)
			c++;
		e /= 10;
	}
	for (d = 0; b > 0; d++)
	{
		sum += b % 10;
		b /= 10;
	}
	while (a != 0)
	{
		sum += a % 10;
		a /= 10;
	}
	cout << endl;

	std::cout << "�������� :" << endl <<
		"0 = �����" << endl <<
		"1 = ����������� ����" << endl <<
		"2 = ����� ����" << endl <<
		"3 = ������� ��������������" << endl <<
		"4 = ����������� �����" << endl;
	std::cin >> choice;
	enumUserchoice = (enum Userchoice)choice;
	switch (enumUserchoice)
	{
	case �����:
		cout <<"�� ����� " << endl;
		break;
	case �����������_����:
		cout << "����������� ����: " << x << endl;
		break;
	case �����_����:
		cout << "����� ����: " << sum << endl;
		break;
	case �������_��������������:
		cout << "������� ��������������: " << (double)sum / d << endl;
		break;
	case �����������_�����:
		cout << "����������� �����: " << c << endl;
		break;
	default:
		cout << "�������� �����" << endl;
		break;
	}
#endif // TASK_1
#ifdef TASK_2
	int n;
	cout << "������� ������ �����: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			//else (i % 2 == j % 2 ? cout << WHITE_BOX << WHITE_BOX : cout << BLACK_BOX << BLACK_BOX);
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}

#endif // TASK_2

	int human1, sum, count;
	std::cout << "����� ���������� � ���������" << endl;
	std::cout << "������� ����� �������?" << endl; std::cin >> count;
	std::cout << count << endl;


}
