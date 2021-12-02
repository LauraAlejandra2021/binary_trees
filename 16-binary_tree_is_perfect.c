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

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (1 + size_right + size_left);
}

/**
 * binary_tree_is_perfect - This function checks if a node is a leaf
 * A Perfect BTree: all internal nodes have two children and
 * all leaf nodes have the same level.
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if is perfect, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t le, ri;

	if (tree == NULL)
		return (0);

	le = binary_tree_size(tree->left);
	ri = binary_tree_size(tree->right);

	if ((le == ri) && (binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
