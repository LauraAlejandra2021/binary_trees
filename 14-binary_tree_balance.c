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

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	hight_left = binary_tree_height(tree->left);
	hight_right = binary_tree_height(tree->right);

	if (hight_left > hight_right)
		return (1 + hight_left);
	else
		return (1 + hight_right);
}

/**
 * binary_tree_balance - This function measures the balance factor of
 * a binary tree
 * @tree:  is a pointer to the root node of the tree to measure
 * the balance factor
 * Return: the difference between the heights of the right and
 * left tree.
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hight_left, hight_right;

	if (tree == NULL)
		return (0);

	hight_left = binary_tree_height(tree->left);
	if (tree->left == NULL)
		hight_left--;
	hight_right = binary_tree_height(tree->right);
	if (tree->right == NULL)
		hight_right--;

	return (hight_left - hight_right);
}
