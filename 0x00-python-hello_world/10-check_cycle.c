#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks for circle
 * @list: linked lists to check
 *
 * return: 1 if the list have a cycle, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == Null || list->next == Null)
		return (0);

	slow = slow->next;
	fast = fast->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
