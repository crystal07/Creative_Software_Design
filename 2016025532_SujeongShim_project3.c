#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//구조체 선언 및 타입 정의
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

//함수 prototype
void menu(); //어떤 명령을 수행할 수 있는가를 보여주는 함수
void menu2(); //select 선택지에서 어떤 방식으로 자료를 선택할 수 있을지 보여주는 함수
void menu3(); //delete 선택지에서 어떤 방식으로 자료를 지울 수 있는지 보여주는 함수
void Input(); //학생의 정보를 입력받아 리스트에 삽입해주는 함수
void Find(); //학생의 정보 중 일부로 학생을 찾아 전부 출력해주는 함수
void Delete(); //학생의 정보 중 일부로 학생을 찾아 리스트에서 삭제해주는 함수

int main() {
	int choose=-1;
	LINK node=head;

	while (choose != 4) {
		menu();
		printf("Please enter the number >> ");
		scanf("%d", &choose);
		switch (choose) {
		case 1: //리스트 노드 추가
			Input();
			break;
		case 2: //리스트 노드 탐색
			Find();
			break;
		case 3: //리스트 노드 삭제
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

//2번과 3번 모두 자료에 없던 phone으로 찾는 것 추가
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

	//학생에 대한 정보 입력
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
	
	//리스트에 연결
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

	//수행할 명령 입력
	menu2();
	printf("Please enter the number >> ");
	scanf("%d", &choice);

	//입력된 명령 수행
	switch (choice) {
	case 1: //전체 학생 정보
		printf("	ID		NAME		MAJOR		PHONE		HOBBY	\n");
		while (node != NULL) {
			count++;
			printf("	%s		%s		%s		%s		%s	\n", node->id, node->name, node->major, node->phone, node->hobby);
			node = node->next;
		}
		break;
	case 2: //이름으로 검색
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
	case 3: //학번으로 검색
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
	case 4: //전공으로 검색
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
	case 5: //전화번호로 검색
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
	case 6: //취미로 검색
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

	printf("%d student found\n", count); //발견된 학생 수 출력
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

	//수행할 명령을 입력
	menu3();
	printf("Please enter the number >> ");
	scanf("%d", &choice);

	//명령 수행
	switch (choice) {
	case 1: //전체삭제
		node = head;
		break;
	case 2: //이름으로 검색
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
	case 3: //학번으로 검색
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
	case 4: //전공으로 검색
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
	case 5: //휴대전화로 검색
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
	case 6: //취미로 검색
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

	//해당하는 학생의 정보 삭제
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