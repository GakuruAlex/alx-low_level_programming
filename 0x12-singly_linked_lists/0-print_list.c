#include "lists.h"
/**
 * print_list - Prints all the elements of a list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
   
   while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        
        count++;
        h = h->next;
    }

    return (count);
}

