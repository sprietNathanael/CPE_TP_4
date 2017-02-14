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


#endif
