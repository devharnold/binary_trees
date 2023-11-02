#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing through a binary tree using preorder
 *@tree: pointer to the root node of thekey being traversed
 *@func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
        func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
    else if(tree && func == NULL){
        return NULL;
    }
}