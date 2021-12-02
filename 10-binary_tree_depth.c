#include "binary_trees.h"

/**
 * binary_tree_depth - This function measures the height of a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth from the last node to the root node,
 * if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	/* the path starts from the node pointed to by *tree and... */
	/* ends at the root node */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
