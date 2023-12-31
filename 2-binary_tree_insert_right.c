#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node of another right child
 *@parent: pointer to the node inserting the right child
 *@value: the value to store in the new node,
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL){
        return (NULL);
    }
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL){
        	return (NULL);
    }

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;


	if (parent->right == NULL){
        parent->right = node;
    }
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}