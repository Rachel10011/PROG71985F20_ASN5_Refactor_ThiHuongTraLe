//Thi Huong Tra Le
//PROG71985F20
//Assignment 5 Refactor 
//Fall 2020

//Feedback from Assignment 5:
//--Use local variables over global/extern variables wherever possible. (-2pts)
//--your stack ADT should only contain items related to stack(eg: push, pop)

#pragma once
#include <stdio.h>
#include <stdbool.h>
#define MAXSTACK 100
#define HEAD -1

typedef struct stack
{
	char word[MAXSTACK];
	int top;
}STACK, *PSTACK;

PSTACK createStack();
void push(PSTACK, char);
char pop(PSTACK);
void disposeStack(PSTACK);

