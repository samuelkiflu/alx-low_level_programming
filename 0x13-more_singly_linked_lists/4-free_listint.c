#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head of the listint_t list to be freed
 * Returns: Nothing, Void function
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
