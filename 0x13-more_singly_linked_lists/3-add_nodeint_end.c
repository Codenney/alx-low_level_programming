#include "lists.h"

/**
 * add_nodeint_end - Function entry
 * Description: A function that adds a new node at the end of a listint_t list
 * @head: The pointer to the head address
 * @n: value to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
