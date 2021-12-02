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
 * binary_tree_nodes - This function counts the nodes with at least
 * 1 child in a binary tree.
 * Note: If the node isn't a leaf then the node has at least 1 child
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes
 * Return: the number of nodes into the BTree with at least 1 child
 * If tree is NULL, the function must return 0. A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left, node_right;

	if (tree == NULL)
		return (0);

	/* In case the node is a leaf */
	if (binary_tree_is_leaf(tree))
		return (0);

	node_left = binary_tree_nodes(tree->left);
	node_right = binary_tree_nodes(tree->right);
	/* 1 because of root woul be a node */
	return (1 + node_left + node_right);
}
