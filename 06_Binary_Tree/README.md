
BFS
--
```text
BFS (Breadth First Search) == Level Order Traversal
```

For a binary tree:

```text
        1
       / \
      2   3
         / \
        4   5
```

BFS / Level Order:

```text
1 2 3 4 5
```

DFS
---

```text
DFS (Depth First Search)
    ├── Preorder  (Root → Left → Right)
    ├── Inorder   (Left → Root → Right)
    └── Postorder (Left → Right → Root)
```

Examples:

```text
Preorder  : 1 2 3 4 5
Inorder   : 2 1 4 3 5
Postorder : 2 4 5 3 1
```

---

### General Tree

A general tree node can have any number of children:

```text
        A
      / | \
     B  C  D
       / \
      E   F
```

#### Preorder

```text
Root → All Children
A B C E F D
```

#### Postorder

```text
All Children → Root
B E F C D A
```

#### BFS / Level Order

```text
A B C D E F
```

#### Inorder

❌ **Not defined in general.**

Reason:

```text
Binary Tree:
Left  Root  Right
```

works because there are exactly **2 children**.

But for:

```text
      A
    / | \
   B  C  D
```

where should `A` be visited?

```text
B A C D ?
B C A D ?
B C D A ?
```

There is no universally accepted rule, so **general trees do not have a standard inorder traversal**.

Hence:

```text
BFS  → Level Order Traversal

DFS  → Preorder, Inorder, Postorder

General Trees → No standard Inorder Traversal
```
