#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates binary tree node
 * @parent:  parent node
 * @value: the value of node
 * Return: The newly created binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else if (parent->right == NULL)
			parent->right = new_node;
		else
			return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}