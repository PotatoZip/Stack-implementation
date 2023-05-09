#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"

void PrintMenu() {
	int ans;
	printf("============================\nStack implementation program\n============================\n\n");
	printf("Select option:\n1 -> Initialize stack\n2 -> Delete stack\n3 -> Add new element to stack\n4 -> Show first element of stack\n5 -> Find element in stack\n6 -> Save all stack elements to binary file\n7 -> Open stack from file\n");
	scanf_s("%d", &ans);

	switch (ans) {
		case 1:
			
			break;
		case 2:
			//ImplementStack();
			break;
		case 3:
			//ImplementStack();
			break;
		case 4:
			//ImplementStack();
			break;
		case 5:
			//ImplementStack();
			break;
		case 6:
			//ImplementStack();
			break;
		case 7:
			//ImplementStack();
			break;
		deafult:
			printf("Invalide input\n");
			break;
	}

}