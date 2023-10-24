#include "lists.h"

/**
 * add_nodeint - A function that adds a
 * new node at the beginning of a linked list
 * @head: this is the head of a list.
 * @n: the number of element.
 * Return: the address of the new element
 * and NUll if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
