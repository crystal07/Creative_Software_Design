#include <iostream>
using namespace std;

void magicSquare(int n);

int main() {
	int size=-1;

	while (size != 0) {
		//마방진의 크기를 입력받는다.
		cout << "Input the size of magic square : ";
		cin >> size;

		//마방진을 생성한다.
		if (size > 0 && size%2 == 1) magicSquare(size);

	}

	return 0;
}

void magicSquare(int n) {
	int **square = new int* [n];
	for (int i = 0; i < n; i++) square[i] = new int[n];

	//마방진 초기화
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) square[i][j] = 0;
	}

	int row = 0, col = n/2;
	int orow, ocol;
	
	for (int i = 1; i <= n*n; i++) {
		square[row][col] = i;
		orow = row;
		ocol = col;

		if (row == 0) row = n - 1;
		else row--;
		if (col == n - 1) col = 0;
		else col++;
	
		if (square[row][col] != 0) {
			if (orow == n) orow = 0;
			else orow++;
			row = orow;
			col = ocol;
		}
		
	}

	//마방진을 출력한다.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << " " << square[i][j];
		cout << endl;
	}

	for (int i = 0; i < n; i++) delete[] square[i];
	delete[] square;
}
