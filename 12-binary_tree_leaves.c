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
 * binary_tree_leaves - This function counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number
 * of leaves
 * Return: the number of leaves into the binary tree,
 * if tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nodes_left, nodes_right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	nodes_left = binary_tree_leaves(tree->left);
	nodes_right = binary_tree_leaves(tree->right);
	return (nodes_left + nodes_right);
}
