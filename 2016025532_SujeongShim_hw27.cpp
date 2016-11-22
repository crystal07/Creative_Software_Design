#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	
	Point P[100];
	int xmax=0, ymax=0;
	int cd[100][100];

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			cd[i][j] = 0;
		}
	}

	for (int test = 0; ; test++) {
		//input x and y coordinate
		cout << "x : ";
		cin >> P[test].x;
		cout << "y : ";
		cin >> P[test].y;
		if (P[test].x < 0 || P[test].y < 0) break;

		//save maximum value
		if (xmax < P[test].x) xmax = P[test].x;
		if (ymax < P[test].y) ymax = P[test].y;

		//Input x and y
		for (int i = 0; i <= ymax; i++)/*y coordinate*/ {
			for (int j = 0; j <= xmax; j++)/*x coordinate*/ {
				for (int k = 0; k <= test; k++) {
					if (P[k].x == j && P[k].y == i) cd[j][i] = 1;
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

	return 0;
}
