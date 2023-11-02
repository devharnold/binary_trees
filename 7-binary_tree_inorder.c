#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - traversing through the inorder method
 *@tree: pointer to the root node of the tree to traverse.
 *@func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
    else if(tree && func == NULL){
        return NULL;
    }
}