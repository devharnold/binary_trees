#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  check if node is leaf
 *@node: is a pointer to the node to check.
 * Return: if node is a leaf, 1 otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL){
        	return (0);
    }

	if (node->right == NULL && node->left == NULL){
        	return (1);
    }
	else{
        return (0);
    }
}