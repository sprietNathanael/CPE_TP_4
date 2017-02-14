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
#include "char_list.h"

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
	Element* myList = malloc(sizeof(Element));
	char* myString = malloc(sizeof(char)*(strlen("test1")+1));
	strcpy(myString,"test1");
	myList->value = myString;
	myList->next = NULL;
	printf(ANSI_COLOR_BLUE"First display :\n"ANSI_COLOR_RESET);
	printList(myList);
	myList = addAtEnd(myList,"test2");
	myList = addAtEnd(myList,"test2");
	myList = addAtEnd(myList,"test2");
	myList = addAtEnd(myList,"test2");
	printf(ANSI_COLOR_BLUE"Add 4x test2 at the end:\n"ANSI_COLOR_RESET);
	printList(myList);
	myList = addAtBegining(myList,"test3");
	myList = addAtBegining(myList,"test3");
	printf(ANSI_COLOR_BLUE"Add 2x test3 at the begining:\n"ANSI_COLOR_RESET);
	printList(myList);
	myList = addAtIndex(myList,"test4",0);
	printf(ANSI_COLOR_BLUE"Add test4 at the index 0:\n"ANSI_COLOR_RESET);
	printList(myList);
	printf(ANSI_COLOR_BLUE"Add test5 at the index 4:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,"test5",4);
	printList(myList);
	printf(ANSI_COLOR_BLUE"Add test6 at the index 8:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,"test6",8);
	printList(myList);
	printf(ANSI_COLOR_BLUE"Add test7 at the index 10:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,"test7",10);
	printList(myList);
	printf(ANSI_COLOR_BLUE"Add test8 at the index 20:\n"ANSI_COLOR_RESET);
	myList = addAtIndex(myList,"test8",20);
	printList(myList);
	char* test[] = {"test9","test9","test9","test9","test9"};
	printf(ANSI_COLOR_BLUE"Add 5x test9 at the end of the list:\n"ANSI_COLOR_RESET);
	myList = fillList(myList,test,5);
	printList(myList);
	printf(ANSI_COLOR_BLUE"The index of the first test1 is %d\n"ANSI_COLOR_RESET,findInList(myList,"test1"));
	printf(ANSI_COLOR_BLUE"The index of the first test7 is %d\n"ANSI_COLOR_RESET,findInList(myList,"test7"));
	printf(ANSI_COLOR_BLUE"The index of the first test100 is %d\n"ANSI_COLOR_RESET,findInList(myList,"test100"));
	myList = removeFromList(myList,"test5");
	printf(ANSI_COLOR_BLUE"Remove the first test5 \n"ANSI_COLOR_RESET);
	printList(myList);
	myList = removeFromList(myList,"test4");
	printf(ANSI_COLOR_BLUE"Remove the first 4 \n"ANSI_COLOR_RESET);
	printList(myList);
	myList = removeFromList(myList,"test100");
	printf(ANSI_COLOR_BLUE"Remove the first 100 \n"ANSI_COLOR_RESET);
	printList(myList);
	emptyList(&myList);
	if(myList != NULL)
	{
		printf(ANSI_COLOR_RED"ERROR ! myList = %x\n"ANSI_COLOR_RESET,myList);
	}
	return 0;
}
