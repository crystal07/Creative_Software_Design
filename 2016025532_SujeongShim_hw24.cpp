#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int radius=-1;
	int x, y;

	while (radius != 0) {
		//원의 지름을 입력받는다.
		cout << "Input : ";
		cin >> radius;
		
		//3이상의 홀수 값이 들어오면 원을 출력, 아니면 Invalid Input 출력. 0이면 종료
		if (radius >= 3 && radius % 2 == 1) {
			//x^2+y^2=radius^2
			for (y = radius/2; y >= -radius/2; y--) {
				for (x = -radius/2; x <= radius/2; x++) {
					if (pow(x, 2) + pow(y, 2) <= pow(radius/2, 2)) cout << '*';
					else cout << ' ';
				}
				cout << endl;
			}
		}
		else if (radius == 0) break;
		else cout << "Invalid Input!" << endl;
	}

	return 0;
}