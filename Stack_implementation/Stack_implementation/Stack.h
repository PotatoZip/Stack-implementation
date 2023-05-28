#pragma once

struct Stack {
	void* pData;
	struct Stack* next;
};

typedef void(*freeData)(void* ptr);
typedef int (compData)(void* ptr, void* search);
void StackInit(freeData ptrFree);
void StackFree();
Stack* StackPush(void* ptr);
void *StackPop();
Stack* StackTop();
void* StackFind(void* search, compData pComp, int first);
void StackSave(const char* filename);
void StackLoad(const char* filename);