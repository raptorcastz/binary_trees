#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent:the pointer to the parent node of the node to create
 * @value:the Value put in the new node
 * Return: pointer to the new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *mynewnode;

	/* allocate memory to the root node */
	mynewnode = malloc(sizeof(binary_tree_t));

	/* check if mem allocation was a success */
	if (mynewnode == NULL)
		return (NULL);

	/* node with value but no children */
	mynewnode->parent = parent;
	mynewnode->n = value;
	mynewnode->left = NULL;
	mynewnode->right = NULL;

	return (mynewnode);
}
