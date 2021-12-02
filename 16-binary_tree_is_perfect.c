#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

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
 * binary_tree_is_full - This function checks if a BTree is full
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if is full, otherwise return 0
 * If tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
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
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	else if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
		return (1);
	else
		return (0);
}
