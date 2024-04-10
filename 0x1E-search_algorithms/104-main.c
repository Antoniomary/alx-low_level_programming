#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    int a2[] = {9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));

    printf("Found %d at index: %d\n\n", 5, advanced_binary(a2, 1, 5));
    printf("Found %d at index: %d\n\n", 9, advanced_binary(a2, 1, 9));
    printf("Found %d at index: %d\n\n", 11, advanced_binary(a2, 1, 11));
    return (EXIT_SUCCESS);
}
