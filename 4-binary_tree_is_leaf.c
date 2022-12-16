#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf of binary tree
 * @node: pointer to node
 *
 * Return: if node is a leadf - 1
 *	Otherwise - 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
		if (node == NULL || node->left != NULL || node->right != NULL)
			return (0);

		return (1);
}
