#include <stdio.h>
#include <binary_trees.h>
#include <stdlib.h>

/**
 * new_node - The new value to be inserted
 * binary_tree_t *binary_tree_node: The main function
 * @malloc: The memory allocation function
 * 
 * return: Upon Success -> new_node
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if(new_node == NULL){
        return NULL;
    }

    new_node -> n = value;
    new_node -> parent = parent;
    new_node -> left = NULL;
    new_node -> right = NULL;

    return new_node;

}