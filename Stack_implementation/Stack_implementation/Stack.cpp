#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"


void* StackInit(char* name, size_t year, FIELD_OF_STUDY course) {
	Student* p_student = (Student*)malloc(sizeof(Student));
	if (p_student)
	{
		p_student->name = name;
		p_student->course = course;
		p_student->year = year;
	}
	return (void*)(p_student);
}

void StackFree(void *p) {
	Student* p_student = (Student*)p;
	if (p_student) {
		free(p_student);
	}
}

void StackAdd() {

}

void StackFind() {

}

void StackSave() {

}

void StackLoad() {

}