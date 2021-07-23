#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: root node of  the tree to count the number of nodes
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t child = 0;

if (!tree)
return (0);

if (tree->left || tree->right)
child += 1;
if (tree->left)
child += binary_tree_nodes(tree->left);
if (tree->right)
child += binary_tree_nodes(tree->right);
return (child);
}
