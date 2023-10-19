#include "lists.h"
/**
 * free_list - A function that frees the list
 * @head: this is the head of the linked list.
 * Return: there will be no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
