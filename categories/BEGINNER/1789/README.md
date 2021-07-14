# The Race of Slugs
The slugs racing is a sport that has grown in recent years, causing several people dedicate their lives trying to capture fast slugs, and trains them to make millions in races around the world. But the task of capturing fast slugs is not an easy task, since almost all the slugs are very slow. Each slug is classified at a level depending on their speed:


Level 1: If speed is less than 10 cm/h.<br>
Level 2: If speed is greater than or equal to 10 cm/h and lower than 20 cm/h.<br>
Level 3: If speed is greater than or equal to 20 cm/h.


Your task is to identify which level of speed faster slug of a group of slugs.

## Input
The entry consists consists multiple test cases, and each consists of two lines: The first line contains an integer **L** (1 ≤ **L** ≤ 500) representing the number of slugs of the group, and the second line contains **L** integers **Vᵢ** (1 ≤ **Vᵢ** ≤ 50) representing the speeds of each slug.
The input ends with end of file (EOF).

## Output
For each test case, output a single line with the level of speed faster slug of a group of slugs.

|                                               Input Samples                                              |   Output Samples  |
|----------------------------------------------------------------------------------------------------------|-------------------|
| 10<br> 10 10 10 10 15 18 20 15 11 10<br> 10<br> 1 5 2 9 5 5 8 4 4 3<br> 10<br> 19 9 1 4 5 8 6 11 9 7<br> | 3<br> 1<br> 2<br> |