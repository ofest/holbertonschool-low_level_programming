Exercises of the project "doubly linked list".

0. Print list
1. List length
2. Add node
3. Add node at the end
4. Free list
5. Get node at index
6. Sum list
7. Insert at index
8. Delete at index

using this structure:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
