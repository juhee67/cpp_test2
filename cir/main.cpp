#include <iostream>
using namespace std;

#if 1							// 3�� PPT-55
#include "circle.h"

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << " donut�� ������ " << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << " pizza�� ������ " << area << "\n";
}
#endif


#if 0							// 4�� PPT-19
int main()
{
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n;
	if(n <= 0) return 0;
	int* p = new int[n];
	if (!p)
	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�. ";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << "��° ����: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << sum / n << endl;

	delete[] p;
}
#endif


#if 0							// 4�� PPT-35
int main()
{
	string name;
	cin >> name;
	cout << name;
}
#endif

