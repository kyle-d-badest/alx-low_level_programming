#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @start: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int start)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < start)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
