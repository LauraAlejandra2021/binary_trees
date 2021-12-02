#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * size is the number of nodes into the BTree, root node included.
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	/*node counter: one for left tree & another one for the right tree*/
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	/* the total nodes is the size of BTrees, including root node = 1 */
	return (1 + size_right + size_left);
}
