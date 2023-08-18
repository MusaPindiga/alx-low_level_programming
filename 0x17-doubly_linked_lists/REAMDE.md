# Doubly Linked List Implementation in C

This folder contains C implementation of a doubly linked list data structure.

## Features

- Doubly linked list with support for forward and backward traversal.
- Insertion and deletion of elements at the beginning, end, and specific positions.
- Searching for elements and checking if an element exists in the list.
- Retrieving the size of the list.

## Usage

```C
# Create a new doubly linked list
Create the list with the following struct

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

# Insert elements
Insert elements at different positions using defined functions

# Insert at the beginning
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

# Insert at a specific position
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

# Insert at the end
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

# Delete an element
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

# Print the elements
size_t print_dlistint(const dlistint_t *h);

# Get the size of the list
 size_t dlistint_len(const dlistint_t *h);
