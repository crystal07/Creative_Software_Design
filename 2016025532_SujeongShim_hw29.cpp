#include <iostream>
using namespace std;

struct YourVectorNode {
	int value;
	YourVectorNode * next;
};

int main() {

	YourVectorNode *head = NULL;
	YourVectorNode *node = NULL;

	while (true) {
		int input;
		cout << "1 : AND / 2 : FIND / 3 : PRINT / 0 : QUIT" << endl;
		cin >> input;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
		if (input == 0) break;
		else if (input == 1) {
			int value;
			cout << "Input Value > ";
			cin >> value;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			//add vector node with value
			YourVectorNode * cur = new YourVectorNode();
			cur->value = value;
			if (head == NULL) {
				head = cur;
			}
			else {
				node = head;
				while (node->next != NULL) {
					node = node->next;
				}
				node->next = cur;
				node->next->next = NULL;
			}
		}
		else if (input == 2) {
			int index;
			cout << "Input index > ";
			cin >> index;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			//print value at index
			node = head;
			for (int i = 0; i < index; i++) node = node->next;
			cout << node->value << endl;
		}
		else if (input == 3) {
			//print all values
			node = head;
			while (node != NULL) {
				cout << node->value << " ";
				node = node->next;
			}
			cout <<endl;
		}
	}

	node = head;
	while (node != NULL) {
		head = node;
		node = node->next;
		delete[] head;
	}
	
	return 0;
}