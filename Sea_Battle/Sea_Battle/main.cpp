#include "header.h"
void main() {
	srand(time(0));
	player p;
	comp c;
	newone e;
	int q = 10, t = 10;
	set_model(p);
	print_model(p);
	set_ship(p);
	print_ship(p);
	set_comp(c);
	set_ship_comp(c);
	cout << "\n";
	set_new(e);
	print_new(e);
	do {
		play(c, p, e, t, q);
	} while (q > 0 || t > 0);
	
	
	

	

	system("pause");
}