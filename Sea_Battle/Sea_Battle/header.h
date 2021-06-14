#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
using namespace std;
struct ship {
	int num[10];
};
struct player {
	char model[12][12];
	ship s;
};
struct comp {
	char f[12][12];
	ship s;
};
struct newone {
	char k[12][12];
};
void set_model(player& p);
void print_model(player& p);
void set_ship(player& p);
void print_ship(player& p);
void set_comp(comp& c);
void print_comp(comp& c);
void set_ship_comp(comp& c);
void set_new(newone& e);
void print_new(newone& e);
void play(comp& c, player& p, newone& e, int t, int  q);