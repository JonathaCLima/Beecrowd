# Head or Tail
John and Mary have been friends since nursery school. Since then, they have shared a playful routine: every time they meet, they play Head or Tail with a coin, and whoever wins has the priviledge of deciding what they are going to play during the day. Mary always choose Head, and John always choose Tail.

Nowadays they are in college, but continue being truly good friends. Whenever they meet, they still play Head and Tail, and the winner decides which film to watch, or which restaurant to have dinner together, and so on.

Yesterday Mary confided to John that she has being keeping a record of the results of every play since they started, in nursery school. It came as a surprise to John! But since John is studying Computer Science, he decided it was a good opportunity to show Mary his skills in programming, by writing a program to determine the number of times each of them won the game over the years.

## Input
The input contains several test cases. The first line of a test case contains a single integer **N** indicating the number of games played (1 ≤ **N** ≤ 10000). The following line contains **N** integers R*i*, separated by space, describing the list of results. If R*i* = 0 it means Mary won the ith game, if R*i* = 1 it means John won the ith game (1 ≤ **i** ≤ **N**). The end of input is indicated by **N** = 0.

## Output
For each test case in the input your program should output a line containing the sentence "Mary won **X** times and John won **Y** times", where 0 ≤ **X** and 0 ≤ **Y**.

|                Input Samples                |                                 Output Samples                                  |
|---------------------------------------------|---------------------------------------------------------------------------------|
| 5<br> 0 0 1 0 1<br> 6<br> 0 0 0 0 0 1<br> 0 | Mary won 3 times and John won 2 times<br> Mary won 5 times and John won 1 times |