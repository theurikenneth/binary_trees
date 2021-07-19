#include "binary_trees.h"

/**
 * binary_tree_balance - meausres the balance factor of a binary tree
 * @tree: root node of the tree to measure the balance factor
 *
 * Return: int balance or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right, res;

if (!tree)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
res = left - right;

res -= tree->right ? 0 : -1;
res += tree->left ? 0 : -1;
return (res);
}

/**
 * binary_tree_height - gets the height of the tree
 * @tree: Root
 *
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t levelr = 0, levell = 0;

if (!tree)
return (0);
if (tree->left || tree->right)
{
levell = binary_tree_height(tree->left);
levelr = binary_tree_height(tree->right);
return (1 + (levelr > levell ? levelr : levell));
}
return (0);
}
