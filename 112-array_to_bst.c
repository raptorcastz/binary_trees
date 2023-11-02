#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a BST from an array
 * @array: pointer to the first element to be converted
 * @size: number of elements in the array
 * Return: pointer to the root node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t c;
	bst_t *tree = NULL;

	for (c = 0; c < size; c++)
	{
		bst_insert(&tree, array[c]);
	}

	return (tree);
}
