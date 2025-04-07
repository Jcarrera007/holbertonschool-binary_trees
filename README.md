# Binary Trees

## 📌 What is a Binary Tree?

A **binary tree** is a hierarchical data structure where each node has at most **two children**, referred to as the **left** and **right** child. It is used in various applications such as searching, sorting, and expression parsing.

---

## 🌳 Binary Tree vs Binary Search Tree (BST)

| Feature                 | Binary Tree                            | Binary Search Tree (BST)               |
|------------------------|----------------------------------------|----------------------------------------|
| Node placement         | No specific order                      | Left < Root < Right                    |
| Use case               | General-purpose storage and traversal  | Fast searching, insertion, and deletion|
| Sorted structure       | Not necessarily                        | Always sorted                          |

A **BST** is a specialized kind of binary tree that keeps elements in a sorted manner for efficient operations.

---

## ⚡ Time Complexity: Binary Tree vs Linked List

| Operation     | Linked List | Binary Search Tree (Average Case) |
|---------------|-------------|-----------------------------------|
| Search        | O(n)        | O(log n)                          |
| Insertion     | O(1)        | O(log n)                          |
| Deletion      | O(1)        | O(log n)                          |

> 🔍 **BSTs** offer significant performance improvements over linked lists for large datasets, especially for search-heavy applications.

---

## 📏 Terminology: Depth, Height, Size

- **Depth**: Number of edges from the root to a given node.
- **Height**: Number of edges on the longest path from a node to a leaf.
- **Size**: Total number of nodes in the tree.

Example:
     1
   /   \
  2     3
 /
4

---

## 🔄 Traversal Methods

Traversal is how we visit all the nodes in a binary tree. There are 4 main methods:

1. **Pre-order (Root → Left → Right)**
2. **In-order (Left → Root → Right)** — Used in BSTs for sorted output.
3. **Post-order (Left → Right → Root)**
4. **Level-order (Breadth-First)** — Uses a queue to visit nodes level by level.

---

## 🧩 Types of Binary Trees

- **Complete Binary Tree**: All levels are fully filled except possibly the last, which is filled from left to right.
- **Full Binary Tree**: Every node has 0 or 2 children (no nodes with only one child).
- **Perfect Binary Tree**: All internal nodes have 2 children and all leaves are at the same level.
- **Balanced Binary Tree**: The height difference between left and right subtrees is at most 1 for all nodes.

---

## 🛠 Project Description

This project demonstrates basic binary tree operations in C:
- Creating a binary tree node
- Understanding structure and usage
- Preparing for more advanced operations like insertion, deletion, and traversal


## 🧠 Author

Jimmy Carrera
---

