#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node given seems t be a root
 *@node: pointer to the checked node 
 * Return: if node is root, 1 else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL){
        return (0);
    }
	if (node->parent == NULL){
        return (1);
    }
	else
		return (0);
}