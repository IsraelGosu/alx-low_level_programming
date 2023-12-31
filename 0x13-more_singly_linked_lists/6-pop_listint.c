#include "lists.h"

/**
 * pop_listint - A function that deletes the
 * head node of a linked list
 * @head: the head of a list.
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
