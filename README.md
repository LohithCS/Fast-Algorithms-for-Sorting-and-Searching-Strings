# Fast-Algorithms-for-Sorting-and-Searching-Strings
This algorithm accept linked list with each node having data( string ) to create BST to perform the efficient sorting and search
Binary Search Tree

The following is the definition of Binary Search Tree(BST) according to Wikipedia
Binary Search Tree is a node-based binary tree data structure which has the following properties:  

    The left subtree of a node contains only nodes with keys lesser than the node’s key.
    The right subtree of a node contains only nodes with keys greater than the node’s key.
    The left and right subtree each must also be a binary search tree. 
    There must be no duplicate nodes.
    
    
The above properties of Binary Search Tree provides an ordering among keys so that the operations like search, minimum and maximum can be done fast. If there is no ordering, then we may have to compare every key to search for a given key.


Searching a key 
For searching a value, if we had a sorted array we could have performed a binary search. Let’s say we want to search a number in the array what we do in binary search is we first define the complete list as our search space, the number can exist only within the search space. Now we compare the number to be searched or the element to be searched with the mid element of the search space or the median and if the record being searched is lesser we go searching in the left half else we go searching in the right half, in case of equality we have found the element. In binary search we start with ‘n’ elements in search space and then if the mid element is not the element that we are looking for, we reduce the search space to ‘n/2’ and we go on reducing the search space till we either find the record that we are looking for or we get to only one element in search space and be done with this whole reduction. 
Search operation in binary search tree will be very similar. Let’s say we want to search for the number, what we’ll do is we’ll start at the root, and then we will compare the value to be searched with the value of the root if it’s equal we are done with the search if it’s lesser we know that we need to go to the left subtree because in a binary search tree all the elements in the left subtree are lesser and all the elements in the right subtree are greater. Searching an element in the binary search tree is basically this traversal in which at each step we will go either towards left or right and hence in at each step we discard one of the sub-trees. If the tree is balanced, we call a tree balanced if for all nodes the difference between the heights of left and right subtrees is not greater than one, we will start with a search space of ‘n’nodes and when we will discard one of the sub-trees we will discard ‘n/2’ nodes so our search space will be reduced to ‘n/2’ and then in the next step we will reduce the search space to ‘n/4’ and we will go on reducing like this till we find the element or till our search space is reduced to only one node. The search here is also a binary search and that’s why the name binary search tree.

Illustration to search in the tree: 
1. Start from the root.
2. Compare the searching element with root, if less than root, then recurse for left, else recurse for right. 
3. If the element to search is found anywhere, return true, else return false. 


for more info: visit the below link

https://en.wikipedia.org/wiki/Binary_search_algorithm