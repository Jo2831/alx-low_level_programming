#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*
 * File: search_algos.h
 * Desc: This header file contains all the prototypes required for
 * the 0x1E-search_algorithms project.
 *
 * Author: Yoseph Desalegn
 * Date Created: oct 30, 2022
 *
 */

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
