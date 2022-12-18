#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node
 * @tree: pointer to node to measure
 *
 * Return: if tree is NULL - return 0
 *	Else - return depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
