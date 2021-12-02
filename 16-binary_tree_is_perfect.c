#include "binary_trees.h"
/**
 * binary_tree_is_perfect - This function checks if a node is a leaf
 * A Perfect BTree: all internal nodes have two children and
 * all leaf nodes have the same level.
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if is perfect, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	
	if (size_left == size_right)
			return (1);
}
