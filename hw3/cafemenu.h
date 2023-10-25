#pragma once
#include <iostream>
#include <string>

using namespace std;

class cafe_menu
{
public:
	void menu_display();
	void mune_list(string coffee, string size, double price);
protected:
	string coffee;
	string size;
	double price;
};
