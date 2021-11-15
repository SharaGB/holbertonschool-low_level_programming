 #include "lists.h"
 /**
  * print_listint - Prints all elements of a list
  * @h: List to print
  * Return: Number of nodes
  */
 size_t print_listint(const listint_t *h)
 {
     size_t n_nod = 0;

     while (h)
     {
         printf("%d\n", h->n);
         h = h->next;
         n_nod++;
     }
     return (n_nod);
 }
