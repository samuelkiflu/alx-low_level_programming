#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node at the given index if found,otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
