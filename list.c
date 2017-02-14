/**
 * CPE-TP4 : Implémentation d'une liste dans une liste chaînée
 *
 * @file list.c
 * @brief      Useful tools to manage chained list
 * @author     Nathanaël SPRIET
 * @date       14/02/2017
 */
#include "list.h"

/*
***************************** Functions *************************
*/

void printElement(Element* headOfList)
{
	printf("%d",headOfList->value);
	if(headOfList->next != NULL)
	{
		printf("->");
		printElement(headOfList->next);
	}
	else
	{
		printf("\n");
	}
}

Element* addAtEnd(Element* headOfList, int value)
{
	Element* lastElement = findTheEndOfElement(headOfList);
	lastElement->next = createElement(value);
	return(headOfList);
}

Element* addAtBegining(Element* headOfList, int value)
{
	Element* newElement = createElement(value);
	newElement->next=headOfList;
	return(newElement);
}

/*
***************************** Static Functions *************************
*/

Element* findTheEndOfElement(Element* headOfList)
{
	if(headOfList->next != NULL)
	{
		findTheEndOfElement(headOfList->next);
	}
	else
	{
		return(headOfList);
	}
}

Element* createElement(int value)
{
	Element* newElement = malloc(sizeof(Element));
	newElement->value = value;
	newElement->next = NULL;
	return(newElement);
}
