#include "binary_trees.h"

/**
 * binary_tree_height_b - Measure height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measurs balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rgt = 0, lft = 0, total = 0;

	if (tree)
	{
		lft = ((int)binary_tree_height_b(tree->left));
		rgt = ((int)binary_tree_height_b(tree->right));
		total = lft - rgt;
	}
	return (total);
}
