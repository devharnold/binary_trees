#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}

    	if (tree == NULL){
            return (0);
        }
}