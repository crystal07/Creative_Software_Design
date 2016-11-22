#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void input(Point &p);
void print(Point *pl, int pIndex);

int main() {
	const int SIZE = 100;
	Point *pl = new Point[SIZE];
	int pIndex = 0;

	while (1) {
		Point p{ 0,0 };
		input(p);
		if (p.x < 0 || p.y < 0) break;
		if (pIndex < SIZE) pl[pIndex++] = p;

		print(pl, pIndex);
	}

	delete[] pl;
	return 0;
}

void input(Point &p) {
	cin >> p.x >> p.y;
}

void print(Point *pl, int pIndex) {
	int xmax = 0, ymax = 0;
	int cd[100][100];

	for (int i = 0; i < pIndex; i++) {
		for (int j = 0; j < pIndex; j++) {
			cd[i][j] = 0;
		}
	}

	for (int test = 0; test < pIndex; test++) {

		//save maximum value
		if (xmax < pl[test].x) xmax = pl[test].x;
		if (ymax < pl[test].y) ymax = pl[test].y;

		//Input x and y
		for (int i = 0; i <= ymax; i++)/*y coordinate*/ {
			for (int j = 0; j <= xmax; j++)/*x coordinate*/ {
				for (int k = 0; k <= test; k++) {
					if (pl[k].x == j && pl[k].y == i) cd[j][i] = 1;
				}
			}
		}
	}

	//print x and y
	for (int i = 0; i <= ymax; i++) {
		for (int j = 0; j <= xmax; j++) {
			if (cd[j][i] == 1) cout << '*';
			else cout << '.';
		}
		cout << endl;
		
	}
}