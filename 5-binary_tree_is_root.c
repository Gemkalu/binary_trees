#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if node has no parent(root)
 * @node:  pointes to the node to check
 * Return: 1 if `node` has parent, 0 if not, or if `node` is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}
