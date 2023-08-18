#include "lists.h"

/**
 * free_dlistint - frees a previous node as to point to another.
 * @head: pointer to head of the list
 * Return: returns nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
