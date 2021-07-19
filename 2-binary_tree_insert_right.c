#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as right-child
 * @parent: the pointer node of the node to create
 * @value: value of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
if (parent->right)
{
new->right = parent->right;
parent->right->parent = new;
}
parent->right = new;
return (new);
}
