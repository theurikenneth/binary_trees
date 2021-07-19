#include "binary_tree.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: root node of the tree to count the no. of leaves
 *
 * Return: no. of leaves, otherwiise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf = 0;

if (!tree)
return (0);

if (tree->left)
leaf += binary_tree_leaves(tree->left);
if (tree->right)
leaf += binary_tree_leaves(tree->right);
if (!tree->left && !tree->right)
leaf += 1;
return (leaf);
}
