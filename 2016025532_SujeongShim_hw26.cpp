#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	int size, j=0;

	//���ڵ��� �޾ƿ´�.
	string num_list;
	getline(cin, num_list);

	size = num_list.length();
	

	//���ο� ����Ʈ�� �����ϰ�, ����Ʈ�� ���� �־��ش�.
	int *num = new int[size / 2+1];

	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			num[j] = num_list[i] - 48;
			j++;
		}
	}

	//������ ������������ �����Ѵ�.
	int temp;
	size = (size / 2)+1;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) cout << num[i] << " ";
	cout << endl;
	
	system("PAUSE");
	return 0;
}