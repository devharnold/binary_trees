#include <stdio.h>
#include <binary_trees.h>
#include <stdlib.h>

struct binary_tree_s{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

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