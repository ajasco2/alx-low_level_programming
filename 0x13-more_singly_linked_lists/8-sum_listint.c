#include "lists.h"

/**
 * sum_listint - Returns the sum of data in a linked list
 * @head: First node in the linked list
 *
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
