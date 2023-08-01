#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a listint_t linked
 * lists.
 * @index: index of the node to return
 * @head: pointer to the first node
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
