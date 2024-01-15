#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - unallocates a singly linked list.
 * @list: pointer to the linked list to be unencumbered.
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
