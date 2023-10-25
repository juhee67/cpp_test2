#include "cafemenu.h"
#include "cafe.h"
using namespace std;

int main(void)
{
	int n = 0;
	int i = 0;
	int count = 0;
	int num[12] = {0, };
	int coffee_num[14] = {0, };
	double result = 0;
	double total = 0;
	cafe menu[14];

	menu[1].mune_list("카페_아메리카노", "Short", 3.6);
	menu[2].mune_list("카페_아메리카노", "Tall", 4.1);
	menu[3].mune_list("카페_라떼", "Short", 4.1);
	menu[4].mune_list("카페_라떼", "Tall", 4.6);
	menu[5].mune_list("카푸치노", "Short", 4.1);
	menu[6].mune_list("카푸치노", "Tall", 4.6);
	menu[7].mune_list("카페모카", "Short", 4.1);
	menu[8].mune_list("카페모카", "Tall", 5.6);
	menu[9].mune_list("카라멜_마끼아또", "Short", 3.6);
	menu[10].mune_list("카라멜_마끼아또", "Tall", 5.6);
	menu[11].mune_list("스타벅스_돌체_라떼", "Short", 5.1);
	menu[12].mune_list("스타벅스_돌체_라떼", "Tall", 5.6);

	cout << "========== CAFE MENU LIST =========" << endl;
	for (i = 1; i <= 12; i++)
	{
		cout << "[" << i << "]";
		menu[i].menu_display();
	}

	while (1)
	{
		cout << "========== MODE SELECT ===========" << endl;
		cout << " 1. Order Menu" << endl;
		cout << " 2. Print Order" << endl;
		cout << " 3. Exit" << endl;
		cout << "==================================" << endl;
		cout << "Select Mode number! : ";
		cin >> n;

		switch (n)
		{
		case 1:
			cout << "Choice List number! : ";
			for (i = 0; i < 12; i++)
			{
				cin >> num[i];
				coffee_num[num[i]] += 1;
				if (num[i] > 12 || num[i] < 0)
				{
					cout << num[i] << "는 없는 메뉴입니다..." << endl;
					return 1;
				}
				if (num[i] == 0)
				{
					count = i;
					break;
				}
			}
			cout << "주문한 상품 : " << endl;
			for (i = 0; i < count; i++)
			{
				result += menu[num[i]].print_order() * 1000;
				cout << endl;
			};
			cout << "합계 : " << result << "원" << endl;
			total += result;
			result = 0;
			break;

		case 2:
			cout << "============ 매출 통계 ===========" << endl;
			for (i = 1; i <= 12; i++)
			{
				if (coffee_num[i] != 0)
				{
					menu[i].print_order();
					cout << " " << coffee_num[i] << "개" << endl;
					coffee_num[i] = 0;
				}
			}
			cout << "매출액 총계 : " << total << "원" << endl;
			total = 0;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "정확한 번호를 입력해주세요!" << endl;
			break;
		}
	}
	return 0;
}






















#if 0
while (1)
{
	cout << "Choice List number! : ";
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
		coffee_num[num[i]] += 1;

		if (num[i] > 12 || num[i] < 0)
		{
			cout << num[i] << "는 없는 메뉴입니다..." << endl;
			return 1;

		}
		if (num[i] == 0)
		{
			count = i;
			break;
		}
	}

	//				cout << endl;
	cout << "주문한 상품 : " << endl;
	for (i = 0; i < count; i++)
	{
		result += menu[num[i]].print_order() * 1000;
		cout << endl;
	};
	cout << "합계 : " << result << "원" << endl;

	total += result;
	result = 0;

	//				cout << endl;
	//				cout << "더 주문하시겠습니까 ? ( 하시면 : 1, 아니면:0) : ";
	//				cin >> flag;

	//				if (flag == 0)
	//				{
	cout << "============ 매출 통계 ===========" << endl;
	for (i = 1; i <= 12; i++)
	{
		if (coffee_num[i] != 0)
		{
			menu[i].print_order();
			cout << " " << coffee_num[i] << "개" << endl;
			coffee_num[i] = 0;
		}
	}
	cout << "매출액 총계 : " << total << "원" << endl;
	total = 0;

	break;
	//				}
}
break;
#endif