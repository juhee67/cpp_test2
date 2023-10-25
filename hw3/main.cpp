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

	menu[1].mune_list("ī��_�Ƹ޸�ī��", "Short", 3.6);
	menu[2].mune_list("ī��_�Ƹ޸�ī��", "Tall", 4.1);
	menu[3].mune_list("ī��_��", "Short", 4.1);
	menu[4].mune_list("ī��_��", "Tall", 4.6);
	menu[5].mune_list("īǪġ��", "Short", 4.1);
	menu[6].mune_list("īǪġ��", "Tall", 4.6);
	menu[7].mune_list("ī���ī", "Short", 4.1);
	menu[8].mune_list("ī���ī", "Tall", 5.6);
	menu[9].mune_list("ī���_�����ƶ�", "Short", 3.6);
	menu[10].mune_list("ī���_�����ƶ�", "Tall", 5.6);
	menu[11].mune_list("��Ÿ����_��ü_��", "Short", 5.1);
	menu[12].mune_list("��Ÿ����_��ü_��", "Tall", 5.6);

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
					cout << num[i] << "�� ���� �޴��Դϴ�..." << endl;
					return 1;
				}
				if (num[i] == 0)
				{
					count = i;
					break;
				}
			}
			cout << "�ֹ��� ��ǰ : " << endl;
			for (i = 0; i < count; i++)
			{
				result += menu[num[i]].print_order() * 1000;
				cout << endl;
			};
			cout << "�հ� : " << result << "��" << endl;
			total += result;
			result = 0;
			break;

		case 2:
			cout << "============ ���� ��� ===========" << endl;
			for (i = 1; i <= 12; i++)
			{
				if (coffee_num[i] != 0)
				{
					menu[i].print_order();
					cout << " " << coffee_num[i] << "��" << endl;
					coffee_num[i] = 0;
				}
			}
			cout << "����� �Ѱ� : " << total << "��" << endl;
			total = 0;
			break;

		case 3:
			return 0;
			break;

		default:
			cout << "��Ȯ�� ��ȣ�� �Է����ּ���!" << endl;
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
			cout << num[i] << "�� ���� �޴��Դϴ�..." << endl;
			return 1;

		}
		if (num[i] == 0)
		{
			count = i;
			break;
		}
	}

	//				cout << endl;
	cout << "�ֹ��� ��ǰ : " << endl;
	for (i = 0; i < count; i++)
	{
		result += menu[num[i]].print_order() * 1000;
		cout << endl;
	};
	cout << "�հ� : " << result << "��" << endl;

	total += result;
	result = 0;

	//				cout << endl;
	//				cout << "�� �ֹ��Ͻðڽ��ϱ� ? ( �Ͻø� : 1, �ƴϸ�:0) : ";
	//				cin >> flag;

	//				if (flag == 0)
	//				{
	cout << "============ ���� ��� ===========" << endl;
	for (i = 1; i <= 12; i++)
	{
		if (coffee_num[i] != 0)
		{
			menu[i].print_order();
			cout << " " << coffee_num[i] << "��" << endl;
			coffee_num[i] = 0;
		}
	}
	cout << "����� �Ѱ� : " << total << "��" << endl;
	total = 0;

	break;
	//				}
}
break;
#endif