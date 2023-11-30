#include "binary_trees.h"

/**
 * binary_tree_size - This function that measures the size of a binary tree
 * @tree: root node from which to measure
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{i
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
