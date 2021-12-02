#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the
 * height.
 * Return: the hight of the binary tree, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hight_left, hight_right;

	/* if the tree doesn't have any child */
	if (tree == NULL)
		return (0);

	/* The tree is divided into left and right tree */
	/* defining base case: the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	hight_left = binary_tree_height(tree->left);
	hight_right = binary_tree_height(tree->right);

	/* knowing the height of each tree, choose the largest tree */
	/* and add 1 (this is de root node) */
	if (hight_left > hight_right)
		return (1 + hight_left);
	else
		return (1 + hight_right);
}
