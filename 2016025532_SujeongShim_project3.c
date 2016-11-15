#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����ü ���� �� Ÿ�� ����
typedef struct record {
	char id[11];
	char name[11];
	char major[21];
	char phone[15];
	char hobby[18];
	struct record * next;
} STUDENT;

typedef STUDENT * LINK;
LINK head = NULL;

//�Լ� prototype
void menu(); //� ����� ������ �� �ִ°��� �����ִ� �Լ�
void menu2(); //select ���������� � ������� �ڷḦ ������ �� ������ �����ִ� �Լ�
void menu3(); //delete ���������� � ������� �ڷḦ ���� �� �ִ��� �����ִ� �Լ�
void Input(); //�л��� ������ �Է¹޾� ����Ʈ�� �������ִ� �Լ�
void Find(); //�л��� ���� �� �Ϻη� �л��� ã�� ���� ������ִ� �Լ�
void Delete(); //�л��� ���� �� �Ϻη� �л��� ã�� ����Ʈ���� �������ִ� �Լ�

int main() {
	int choose=-1;
	LINK node=head;

	while (choose != 4) {
		menu();
		printf("Please enter the number >> ");
		scanf("%d", &choose);
		switch (choose) {
		case 1: //����Ʈ ��� �߰�
			Input();
			break;
		case 2: //����Ʈ ��� Ž��
			Find();
			break;
		case 3: //����Ʈ ��� ����
			Delete();
			break;
		default:
			break;
		}
	}

	return 0;
}

void menu() {
	printf("\n\n");
	printf("**********************************\n");
	printf("*       Student Management       *\n");
	printf("*       Su-Jeong Shim            *\n");
	printf("*       2016025532               *\n");
	printf("**********************************\n");
	printf("1. Input a new student Infomation\n");
	printf("2. Find a student using condition\n");
	printf("3. Delete a student using condition\n");
	printf("4. Quit\n");
	printf("\n\n");
}

//2���� 3�� ��� �ڷῡ ���� phone���� ã�� �� �߰�
void menu2() {
	printf("->2. selected find menu\n");
	printf("1. Full list\n");
	printf("2. Search by name\n");
	printf("3. Search by id\n");
	printf("4. Search by major\n");
	printf("5. Search by phone\n");
	printf("6. Search by hobby\n");
	printf("7. Undo\n");
}

void menu3() {
	printf("->3. selected delete menu\n");
	printf("1. Delete All\n");
	printf("2. Delete by name\n");
	printf("3. Delete by id\n");
	printf("4. Delete by major\n");
	printf("5. Delete by phone\n");
	printf("6. Delete by hobby\n");
	printf("7. Undo\n");
}

void Input() {
	LINK node = (LINK)malloc(sizeof(STUDENT));
	LINK current = head;

	//�л��� ���� ���� �Է�
	printf("->1. selected input menu\n");
	printf("1) id : ");
	scanf(" %s", node->id);
	printf("2) name : ");
	scanf(" %s", node->name);
	printf("3) major : ");
	scanf(" %s", node->major);
	printf("4) phone : ");
	scanf(" %s", node->phone);
	printf("5) hobby : ");
	scanf(" %s", node->hobby);
	
	//����Ʈ�� ����
	if (head == NULL) {
		head = node;
		head->next = NULL;
	}
	else {
		while (current->next != NULL) current = current->next;
		current->next = node;
		current->next->next = NULL;
	}

	printf("->succeeded\n");
}

void Find() {
	int choice = -1;
	int count = 0;
	char id[11] = { '\0', };
	char name[11] = { '\0', };
	char major[21] = { '\0', };
	char phone[15] = { '\0', };
	char hobby[21] = { '\0', };
	LINK node = head;

	//������ ��� �Է�
	menu2();
	printf("Please enter the number >> ");
	scanf("%d", &choice);

	//�Էµ� ��� ����
	switch (choice) {
	case 1: //��ü �л� ����
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			count++;
			printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			node = node->next;
		}
		break;
	case 2: //�̸����� �˻�
		printf("Name >> ");
		scanf(" %s", name);
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			if (!strcmp(node->name, name)) {
				count++;
				printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			}
			node = node->next;
		}
		break;
	case 3: //�й����� �˻�
		printf("ID >> ");
		scanf(" %s", id);
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			if (!strcmp(node->id, id)) {
				count++;
				printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			}
			node = node->next;
		}
		break;
	case 4: //�������� �˻�
		printf("Major >> ");
		scanf(" %s", major);
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			if (!strcmp(node->major, major)) {
				count++;
				printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			}
			node = node->next;
		}
		break;
	case 5: //��ȭ��ȣ�� �˻�
		printf("Phone >> ");
		scanf(" %s", phone);
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			if (!strcmp(node->phone, phone)) {
				count++;
				printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			}
			node = node->next;
		}
		break;
	case 6: //��̷� �˻�
		printf("Hobby >> ");
		scanf(" %s", hobby);
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			if (!strcmp(node->hobby, hobby)) {
				count++;
				printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			}
			node = node->next;
		}
		break;
	default :
		break;
	}

	printf("%d student found\n", count); //�߰ߵ� �л� �� ���
}

void Delete() {
	int choice = -1;
	char id[11] = { '\0', };
	char name[11] = { '\0', };
	char major[21] = { '\0', };
	char phone[15] = { '\0', };
	char hobby[21] = { '\0', };
	LINK node = NULL;
	LINK post = head;
	LINK current = head;

	//������ ����� �Է�
	menu3();
	printf("Please enter the number >> ");
	scanf("%d", &choice);

	//��� ����
	switch (choice) {
	case 1: //��ü����
		node = head;
		break;
	case 2: //�̸����� �˻�
		printf("Name >> ");
		scanf(" %s", name);
		while (current != NULL) {
			if (!strcmp(current->name, name)) {
				node = current;
				break;
			}
			current = current->next;
		}
		break;
	case 3: //�й����� �˻�
		printf("ID >> ");
		scanf(" %s", id);
		while (current != NULL) {
			if (!strcmp(current->id, id)) {
				node = current;
				break;
			}
			current = current->next;
		}
		break;
	case 4: //�������� �˻�
		printf("Major >> ");
		scanf(" %s", major);
		while (current != NULL) {
			if (!strcmp(current->major, major)) {
				node = current;
				break;
			}
			current = current->next;
		}
		break;
	case 5: //�޴���ȭ�� �˻�
		printf("Phone >> ");
		scanf(" %s", phone);
		while (current != NULL) {
			if (!strcmp(current->phone, phone)) {
				node = current;
				break;
			}
			current = current->next;
		}
		break;
	case 6: //��̷� �˻�
		printf("Hobby >> ");
		scanf(" %s", hobby);
		while (current != NULL) {
			if (!strcmp(current->hobby, hobby)) {
				node = current;
				break;
			}
			current = current->next;
		}
		break;
	default:
		break;
	}

	//�ش��ϴ� �л��� ���� ����
	if (node == NULL);
	else if (node == head && choice != 1) {
		head = head->next;
	}
	else if (node == head && choice == 1) {
		head = NULL;
	}
	else if (node != head && node->next != NULL) {
		while (post->next != node) post = post->next;
		post->next = node->next;
	}
	else {
		while (post->next != node) post = post->next;
		post->next = NULL;
	}
}