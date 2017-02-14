/**
 * CPE-TP4 : Implémentation d'une liste dans une liste chaînée
 *
 * @file list.h
 * @brief      Useful tools to manage chained list
 * @author     Nathanaël SPRIET
 * @date       14/02/2017
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef FILE_H
#define FILE_H

/*
***************************** Structures *************************
*/

/**
* @brief      A type defined over the list structure
*/
typedef struct list List;

/**
 * @brief      Represents a chained list
 */
struct list
{
	int value;/*!< The item value */
	List* next;/*!< The item next neighbour */
};

/*
***************************** Functions *************************
*/

/**
 * @brief      Prints a list
 *
 * @param      listToPrint  The list to print
 */
void printList(List *listToPrint);

/**
 * @brief      Adds an element at the end of the list.
 *
 * @param      list   The list where the element will be added
 * @param[in]  value  The value of the element to add
 *
 * @return     The new list
 */
List* addAtEnd(List* list, int value);

/**
 * @brief      Adds an element at the begining of the list.
 *
 * @param      list   The list where the element will be added
 * @param[in]  value  The value of the element to add
 *
 * @return     The new list
 */
List* addAtBegining(List* list, int value);

/**
 * @brief      Adds an element ata given index in the list.
 *
 * @param      list   The list where the element will be added
 * @param[in]  value  The value of the element to add
 * @param[in]  index  The index of the list where the element will be added
 *
 * @return     The new list
 */
List* addAtIndex(List* list, int value, unsigned int index);

/**
 * @brief      Append to a list a value array.
 *
 * @param      list         The list to be filled
 * @param      array        The array of value that will be append to the list
 * @param[in]  arrayLength  The array length
 *
 * @return     The new list
 */
List* fillList(List* list, int array[], unsigned int arrayLength);

/**
 * @brief      Find the first occurrence of a given value
 *
 * @param      list         The list where the value will be searched
 * @param[in]  valueToFind  The value to find
 *
 * @return     The index of the found value, or -1 if the value has not been
 *             found
 */
int findInList(List* list, int valueToFind);

/**
 * @brief      Removes the first occurrence of a given value
 *
 * @param      list           The list where the value will be remove
 * @param[in]  valueToRemove  The value to remove
 *
 * @return     The new list
 */
List* removeFromList(List* list, int valueToRemove);

/**
 * @brief      Remove the list from the memory
 *
 * @param      list  The list to be removed
 */
void emptyList(List** list);

#endif
