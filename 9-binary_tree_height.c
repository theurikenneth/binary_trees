#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: NULL or node height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t levelr = 0, levell = 0;

if (!tree)
return (0);
if (tree->left)
{
levell = binary_tree_height(tree->left);
levell += 1;
}
if (tree->right)
{
levelr = binary_tree_height(tree->right);
levelr += 1;
}
return (levelr > levell ? levelr : levell);
}
