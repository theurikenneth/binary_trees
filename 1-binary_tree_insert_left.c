#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as left-child
 * @parent: the pointer node of the node to create
 * @value: value of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new = NULL;

if (!parent)
return (NULL);

new = malloc(sizeof(binary_tree_t));
if (!new)
return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
if (parent->left)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;
return (new);
}
