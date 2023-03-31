#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - the struct function
 * @h: the const variable of head
 * Return: count;
 */

size_t list_len(const list_t *h){
	size_t count = 0;
	
	const list_t *current = h;
	while (current != NULL){
		count++;
		current = current->next;
	}
	return count;
}
