#include "header.h"
void set_model(player& p) {
	int b = 0;
	char s[] = "respublika";
	char c[] = "1234567890";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (i > 0 && j == 0) {
				p.model[i][j] = c[b];
				b++;
			}
			else p.model[i][j] = ' ';
		}
	}
	b = 0;
	for (int i = 1; i < 12; i++) {
		p.model[0][i] = s[b];
		b++;
	}
}
void print_model(player& p) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << p.model[i][j] << setw(3);
		}
		cout << "\n";
	}
}
void set_ship(player& p) {
	int k[10] = { 4,3,3,2,2,2,1,1,1,1 };
	for (int i = 0; i < 10; i++) {
		p.s.num[i] = k[i];
	}
}
void print_ship(player& p) {
	int m, s = 0, a=0;
	char n;
	for (int i = 0; i < 10; i++) {
		cout << p.s.num[i] << "-decker ship\n";
		cout << "letter: ";
		(cin >> n).get();
		cout << "num: ";
		(cin >> m).get();
		if (m == 0) m = 10;
		if (p.s.num[i] > 1) {
			cout << "form " << n << ":\n";
			cout << "1 - move left\n2 - move right\n3 - move down\n4 - move up\nchoice: ";
			cin >> a;
		}
		for (int j = 1; j < 12; j++) {
			if (n == p.model[0][j]) s = j;
		}
		p.model[m][s] = '0';
		for (int j = 0; j < p.s.num[i]-1; j++) {
			if (a == 1) p.model[m][--s] = '0';
			if (a == 2) p.model[m][++s] = '0';
			if (a == 3) p.model[++m][s] = '0';
			if (a == 4) p.model[--m][s] = '0';
		}
		print_model(p);
	}
}
void set_comp(comp& c) {
	int b = 0;
	char s[] = "respublika";
	char m[] = "1234567890";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (i > 0 && j == 0) {
				c.f[i][j] = m[b];
				b++;
			}
			else c.f[i][j] = ' ';
		}
	}
	b = 0;
	for (int i = 1; i < 12; i++) {
		c.f[0][i] = s[b];
		b++;
	}
}
void print_comp(comp& c) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << c.f[i][j] << setw(3);
		}
		cout << "\n";
	}
}
void set_new(newone& e) {
	int b = 0;
	char s[] = "respublika";
	char m[] = "1234567890";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (i > 0 && j == 0) {
				e.k[i][j] = m[b];
				b++;
			}
			else e.k[i][j] = ' ';
		}
	}
	b = 0;
	for (int i = 1; i < 12; i++) {
		e.k[0][i] = s[b];
		b++;
	}
}
void print_new(newone& e) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << e.k[i][j] << setw(3);
		}
		cout << "\n";
	}
}
void set_ship_comp(comp& c) {
	int k = rand() % 3 + 1;
	if (k == 1){
	c.f[1][10] = '0';
	c.f[1][9] = '0';
	c.f[1][8] = '0';
	c.f[1][7] = '0';
	//3
	c.f[1][4] = '0';
	c.f[2][4] = '0';
	c.f[3][4] = '0';
	//3
	c.f[5][2] = '0';
	c.f[6][2] = '0';
	c.f[7][2] = '0';
	//2
	c.f[1][1] = '0';
	c.f[1][2] = '0';
	//2
	c.f[9][9] = '0';
	c.f[10][9] = '0';
	//1
	c.f[10][1] = '0';
	c.f[9][4] = '0';
	c.f[9][6] = '0';
	c.f[6][7] = '0';
	}
	if (k == 2) {
		c.f[6][4] = '0';
		c.f[6][5] = '0';
		c.f[6][6] = '0';
		c.f[6][7] = '0';
		//3
		c.f[8][1] = '0';
		c.f[9][1] = '0';
		c.f[10][1] = '0';
		//3
		c.f[2][2] = '0';
		c.f[3][2] = '0';
		c.f[4][2] = '0';
		//2
		c.f[2][9] = '0';
		c.f[3][9] = '0';
		//2
		c.f[10][8] = '0';
		c.f[9][8] = '0';
		//1
		c.f[1][4] = '0';
		c.f[2][6] = '0';
		c.f[6][2] = '0';
		c.f[10][10] = '0';
	}
	if (k == 3) {
		c.f[2][7] = '0';
		c.f[2][6] = '0';
		c.f[2][8] = '0';
		c.f[2][9] = '0';
		//3
		c.f[9][8] = '0';
		c.f[9][9] = '0';
		c.f[9][10] = '0';
		//3
		c.f[4][10] = '0';
		c.f[5][10] = '0';
		c.f[6][10] = '0';
		//2
		c.f[9][1] = '0';
		c.f[9][2] = '0';
		//2
		c.f[5][7] = '0';
		c.f[5][8] = '0';
		//2
		c.f[6][1] = '0';
		c.f[7][1] = '0';
		//1
		c.f[10][5] = '0';
		c.f[7][6] = '0';
		c.f[5][4] = '0';
		c.f[1][2] = '0';
	}
	if (k == 4) {
		c.f[2][1] = '0';
		c.f[2][3] = '0';
		c.f[2][4] = '0';
		c.f[2][2] = '0';
		//3
		c.f[7][4] = '0';
		c.f[7][3] = '0';
		c.f[7][2] = '0';
		// 3
		c.f[9][4] = '0';
		c.f[9][1] = '0';
		c.f[9][2] = '0';
		//2
		c.f[5][5] = '0';
		c.f[5][6] = '0';
		//2
		c.f[7][7] = '0';
		c.f[7][8] = '0';
		c.f[7][9] = '0';
		//2
		c.f[9][8] = '0';
		c.f[9][9] = '0';
		//1
		c.f[3][7] = '0';
		c.f[2][3] = '0';
		c.f[9][6] = '0';
		c.f[4][2] = '0';
	}
}
void play(comp& c, player& p, newone& e,int t,int  q) {
	int m, s = 0, a = 0;
	char n;
	do {
		a = 0;
		cout << "letter: ";
		(cin >> n).get();
		cout << "num: ";
		(cin >> m).get();
		if (m == 0) m += 10;
		for (int j = 1; j < 12; j++) {
			if (n == p.model[0][j]) s = j;
		}
		if (c.f[m][s] == '0') {
			e.k[m][s] = '#';
			a = 1;
			t--;
			print_new(e);
		}
		else {
			e.k[m][s] = '-';
			print_new(e);
		}
	} while (a==1);
	q = 4;
	do {
		a = 0;
		m = rand() % 10 + 1;
		s = rand() % 10 + 1;
		if (p.model[m][s] == '0') {
			p.model[m][s] = '#';
			do {
				q = 4;
				q = rand() % 4;
				if (q == 0) {
					if (p.model[m][s + 1] == ' ') p.model[m][s + 1] = '#';
				}
				if (q == 1) {
					if (p.model[m][s - 1] == ' ') p.model[m][s - 1] = '#';
				}
				if (q == 2) {
					if (p.model[m + 1][s] == ' ') p.model[m][s + 1] = '#';
				}
				if (q == 3) {
					if (p.model[m - 1][s] == ' ') p.model[m][s + 1] = '#';
				}
				else q = 4;
			} while (q == 4);
			a = 1;
			q--;
			print_model(p);
		}
		if (p.model[m][s] == ' ') {
			p.model[m][s] = '-';
			print_model(p);
		}
		if (p.model[m][s] == '-') a = 1;
		if (p.model[m][s] == '#') a = 1;
	} while (a>0);

}
