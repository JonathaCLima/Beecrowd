# BST Operations II
Marcela are still working in the last program and the teacher asked her to write a new computer program about binary search tree. This new program is similar with the previous one, but it works with integer numbers and must have a new command "R". See the commands:

* I *n*: Insert the *n* element in the current Binary Search Tree.
* PREFIXA: print the pre-order traversal for the current tree
* INFIXA: print the in-order traversal for the current tree
* POSFIXA: print the post-order traversal for the current tree
* P *n*: Search the *n* element, printing a message indicanding if *n* exist.
* R *n*: Remove *n* element, if *n* exist.

By using this program, at any time must be possible to insert a new element, print the Pre-order, In-order or Post-order traversal, search any element inside the tree or even remove any element.

Note: If an element with two subtrees (left and right) is removed, the antecessor (the bigger element from left subtree, must occupy its place and in case of attempt of remove an element inexistent none message must be printed.

## Input
The input contains N lines and each line contains an operation using integer numbers (1-10⁶) over a binary search tree, that initially will be empty. The first line of input contains an insertion (I). The next lines can have any command described above, like the given example. The end of input is determined by EOF.

## Output
Each line of the input excepting the lines with the "I" or the "R" commands must produce one output line. The output must be acording to the given example, remembering that "existe" means *exist* and "nao existe" means *don't exist* in *portuguese*. There is no blank space after the last line char, otherwise you'll get *Presentation Error*.

|                                                 Input Samples                                                |                                    Output Samples                                   |
|--------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| I 5<br> I 2<br> I 4<br> I 1<br> INFIXA<br> PREFIXA<br> POSFIXA<br> P 3<br> P 1<br> INFIXA<br> R 1<br> INFIXA | 1 2 4 5<br> 5 2 1 4<br> 1 4 2 5<br> 3 nao existe<br> 1 existe<br> 1 2 4 5<br> 2 4 5 |