# binary_trees

<img width="100%" height = "300px" src="https://cdn.pixabay.com/photo/2021/10/26/05/44/technology-6742648__340.jpg" />

## Resources
### Read or watch:

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms -Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
- [Binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
## Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
## AVL Tree
```
typedef struct binary_tree_s avl_t;
```
## Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
