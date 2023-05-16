#pragma once

enum FIELD_OF_STUDY {
	computer_science,
	mathematics,
	biology,
	history
};

struct Student {
	char *name;
	int year;
	FIELD_OF_STUDY course;
};

void* StackInit(char* name, size_t year, FIELD_OF_STUDY course);
void StackFree(void* p);
void StackAdd();
void StackFind();
void StackSave();
void StackLoad();

