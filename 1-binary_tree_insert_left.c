#include <stdio.h>
#include "binary_trees.h"
#include <stdio.h>


/**
 * int value : the representation of node value
 * binary_tree_t *binary_tree_insert_left : our main function
 * new_node: The node added acts as value
 * @parent: The parent node
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    if (parent == NULL){
        return NULL;
    }
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL){
        return NULL;
    }

    new_node -> n = value;
    new_node -> parent = parent;
    new_node -> left = parent -> left;
    new_node -> right = NULL;

    if (parent != NULL){
        parent -> left -> parent = new_node;

    }

    parent -> left = new_node;
    return new_node;
}
