#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node
 *
 * Return: if node is root - 1
 *	Otherwise - 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
		if (node == NULL || node->parent != NULL)
			return (0);

		return (1);
}
