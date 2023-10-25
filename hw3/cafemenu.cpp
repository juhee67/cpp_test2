#include "cafemenu.h"

using namespace std;

void cafe_menu::menu_display(void)
{
	cout << " " << coffee << " " << size << " " << price << endl;
}
void cafe_menu::mune_list(string coffee, string size, double price)
{
	this->coffee = coffee;
	this->size = size;
	this->price = price;
}
