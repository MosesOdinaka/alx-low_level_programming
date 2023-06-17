# Doubly Linked List

This program implements a doubly linked list data structure in C. A doubly linked list is a linear data structure where each element is a separate object with a data part and two address parts. The address parts are used to link the elements together in a chain, with one address pointing to the previous element and one address pointing to the next element.

## Data Structures

The program defines the following data structure to represent a node in the doubly linked list:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

Each node in the doubly linked list contains an integer value `n` and two pointers `prev` and `next`. The `prev` pointer points to the previous node in the list, while the `next` pointer points to the next node in the list.

## Functions

The program provides the following functions for working with doubly linked lists:

- `size_t print_dlistint(const dlistint_t *h);` - This function prints all the elements of a doubly linked list. It takes a pointer to the head of the list as an argument and returns the number of nodes in the list.

- `size_t dlistint_len(const dlistint_t *h);` - This function returns the number of elements in a doubly linked list. It takes a pointer to the head of the list as an argument and returns the number of nodes in the list.

- `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` - This function adds a new node at the beginning of a doubly linked list. It takes a double pointer to the head of the list and an integer value as arguments. The function creates a new node with the given value and inserts it at the beginning of the list. It returns a pointer to
