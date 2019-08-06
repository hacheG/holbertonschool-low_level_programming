# 0x13. C - More singly linked lists
## About
Holberton School's follow-up project on singly linked lists
## Requirements
- Ubuntu 14.04
- gcc 4.8.4
## File Descriptions
### Mandatory
**[0-print_listint.c](0-print_listint.c)** - function that prints all the eleme
nts of a `listint_t` list.

**[1-listint_len.c](1-listint_len.c)** - functoin that returns the number of ele
ments in a linked `listint_t` list.

**[2-add_nodeint.c](2-add_nodeint.c)** - function that adds a new node at the be
ginning of a `listint_t` list.

**[3-add_nodeint_end.c](3-add_nodeint_end.c)** - function that adds a new node a
t the end of a `listint_t` list.

**[4-free_listint.c](4-free_listint.c)** - function that frees a `listint_t` lis
t.

**[5-free_listint2.c](5-free_listint2.c)** - funciton that frees a `listint_t` l
ist and sets the head to NULL.

**[6-pop_listint.c](6-pop_listint.c)** - function that deletes the head node of
a `listint_t` linked list, and returns the head node's data (n).

**[7-get_nodeint.c](7-get_nodeint.c)** - function that returns the nth node of a
 `listint_t` linked list.

**[8-sum_listint.c](8-sum_listint.c)** - function that returns the sum of all th
e data (n) of a `listint_t` linked list.

**[9-insert_nodeint.c](9-insert_nodeint.c)** - function that inserts a new node
at a given position.

**[10-delete_nodeint.c](10-delete_nodeint.c)** - function that deletes the node
at index `index` of a `listint_t` linked list.

### Advanced
**[100-reverse_listint.c](100-reverse_listint.c)** - function that reverses a `l
istint_t` linked list with the specifications:
  * Not allowed to use more than 1 loop
  * Not allowed to use `malloc`, `free` or arrays
  * Can only declare a maximum of two variables

**[101-print_listint_safe.c](101-print_listint_safe.c)** - function that prints
 a `listint_t` linked list with the specifications:
  * Can print lists with a loop
  * Should go through the list only once
  * If the function fails, exit the program with status `98`

**[102-free_listint_safe.c](102-free_listint_safe.c)** - function that frees a
`listint_t` list with the specifications:
  * Can free lists with a loop
  * Should go though the list only once
  * Sets the `head` to `NULL`

**[103-find_loop.c](103-find_loop.c)** - function that finds the loop in a `list
int_t` list with the specifications:
  * Not allowed to use `malloc`, `free` or arrays
  * Can only declare a maximum of two variables