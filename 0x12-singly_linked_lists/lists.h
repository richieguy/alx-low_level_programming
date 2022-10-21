#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string 
 * @next: point to the next mode 
 *
 * Description: singly list string mode structure 
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct int list_s *next;
} list_t;

size_t print _list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head const char *str);
void free_list(list_t *head);

#endif
