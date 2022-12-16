#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order
 * @tree: pointer to root node
 * @func: pointer to function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
		if (tree && func)
		{
			binary_tree_postorder(tree->left, func);
			binary_tree_postorder(tree->right, func);
			func(tree->n);
		}
}
