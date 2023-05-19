#include "sort.h"
/**
 * insertion_sort_list- sorts a list
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a = NULL, *b = NULL, *c = NULL;

	if (list && *list && (*list)->next)
	{
		a = *list;
		b = a->next;
		do {
			while (b && (b->n > a->n))
			{
				a = b;
				b = b->next;
			}
			if (b)
			{
				c = b->next;
				while (a && (a->n > b->n))
				{
					change(a, b, list);
					print_list(*list);
					a = b->prev;
				}
				b = c;
				if (b)
					a = b->prev;
			}
		} while (b);
	}
}

/**
 * change- changes two elemnts of a list
 * @a: first element
 * @b: second element
 * @list: list
 * Return: void
 */
void change(listint_t *a, listint_t *b, listint_t **list)
{
	listint_t *n = NULL, *p = NULL;

	n = b->next;
	p = a->prev;
	b->next = a;
	b->prev = p;
	a->next = n;
	a->prev = b;
	if (p)
		p->next = b;
	else
		*list = b;
	if (n)
		n->prev = a;
}
