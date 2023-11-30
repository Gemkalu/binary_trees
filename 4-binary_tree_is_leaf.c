#include "binary_trees.h"

/**
 * binary_tree_is_leaf -This  checks if the tree node has no children.
 * @node: points to the node to check
 * Return: 1 if `node` has a child, 0 if not, or if `node` is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
