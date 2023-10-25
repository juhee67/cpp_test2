#include <iostream>
using namespace std;

#if 1							// 3장 PPT-55
#include "circle.h"

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << " donut의 면적은 " << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << " pizza의 면적은 " << area << "\n";
}
#endif


#if 0							// 4장 PPT-19
int main()
{
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;
	if(n <= 0) return 0;
	int* p = new int[n];
	if (!p)
	{
		cout << "메모리를 할당할 수 없습니다. ";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << "번째 정수: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << sum / n << endl;

	delete[] p;
}
#endif


#if 0							// 4장 PPT-35
int main()
{
	string name;
	cin >> name;
	cout << name;
}
#endif

