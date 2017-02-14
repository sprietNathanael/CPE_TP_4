/**
 * CPE-TP4 : Implémentation d'une liste dans une liste chaînée
 *
 * @file main.c
 * @brief      Implement a mere chained list
 * @author     Nathanaël SPRIET
 * @date       14/02/2017
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
	Element* myList = malloc(sizeof(Element));
	myList->value = 1;
	myList->next = NULL;
	printf(ANSI_COLOR_BLUE"First display :\n"ANSI_COLOR_RESET);
	printElement(myList);
	myList = addAtEnd(myList,2);
	myList = addAtEnd(myList,2);
	myList = addAtEnd(myList,2);
	myList = addAtEnd(myList,2);
	printf(ANSI_COLOR_BLUE"Add 4x 2 at the end:\n"ANSI_COLOR_RESET);
	printElement(myList);
	myList = addAtBegining(myList,3);
	myList = addAtBegining(myList,3);
	printf(ANSI_COLOR_BLUE"Add 2x 3 at the begining:\n"ANSI_COLOR_RESET);
	printElement(myList);
	myList = addAtIndex(myList,4,0);
	printf(ANSI_COLOR_BLUE"Add 4 at the index 0:\n"ANSI_COLOR_RESET);
	printElement(myList);
	printf(ANSI_COLOR_BLUE"Add 5 at the index 4:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,5,4);
	printElement(myList);
	printf(ANSI_COLOR_BLUE"Add 6 at the index 8:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,6,8);
	printElement(myList);
	printf(ANSI_COLOR_BLUE"Add 7 at the index 10:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,7,10);
	printElement(myList);
	printf(ANSI_COLOR_BLUE"Add 8 at the index 20:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,8,20);
	printElement(myList);
	return 0;
}
