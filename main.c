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

int main()
{
	Element* myList = malloc(sizeof(Element));
	myList->value = 1;
	myList->next = NULL;
	printElement(myList);
	myList = addAtEnd(myList,5);
	myList = addAtEnd(myList,7);
	myList = addAtEnd(myList,3);
	myList = addAtEnd(myList,8);
	printElement(myList);
	return 0;
}
