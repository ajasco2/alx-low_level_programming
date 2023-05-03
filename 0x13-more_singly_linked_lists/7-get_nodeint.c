#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: First node in the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
