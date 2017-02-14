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

Element* addAtIndex(Element* headOfList, int value, unsigned int index)
{
	Element* newElement = createElement(value);
	if(index == 0)
	{
		newElement->next = headOfList;
		headOfList = newElement;
	}
	else
	{
		int i = 0;
		Element* intermediateElement = headOfList;
		while(intermediateElement->next != NULL && i < index-1)
		{
			intermediateElement = intermediateElement->next;
			i++;
		}
		newElement->next = intermediateElement->next;
		intermediateElement->next = newElement;
	}
	return(headOfList);
}

Element* fillList(Element* headOfList, int array[], unsigned int arrayLength)
{
	Element* firstElement = createElement(array[0]);
	Element* intermediateElement = firstElement;
	int i = 1;
	for(i = 1; i < arrayLength; i++)
	{
		intermediateElement->next = createElement(array[i]);
		intermediateElement = intermediateElement->next;
	}
	intermediateElement = findTheEndOfElement(headOfList);
	intermediateElement->next = firstElement;
	return(headOfList);
}
/*
***************************** Static Functions *************************
*/

static Element* findTheEndOfElement(Element* headOfList)
{
	if(headOfList->next != NULL)
	{
		Element* intermediateElement = findTheEndOfElement(headOfList->next);
	}
	else
	{
		return(headOfList);
	}
}

static Element* createElement(int value)
{
	Element* newElement = malloc(sizeof(Element));
	newElement->value = value;
	newElement->next = NULL;
	return(newElement);
}
