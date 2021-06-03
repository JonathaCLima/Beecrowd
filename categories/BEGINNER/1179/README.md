# Array Fill IV
In this problem you need to read 15 numbers and must put them into two different arrays: **par** if the number is even or **impar** if this number is odd. But  the size of each of the two arrrays is only 5 positions. So every time you fill one of two arrays, you must print the entire array to be able to use it again for the next numbers that are read. At the end, all remaining numbers of each one of these two arrays must be printed beggining with the odd array. Each array can be filled how many times are necessary.

## Input
The input contains 15 integer numbers.

## Output
Print the output like the following example.

|                                         Input Samples                                         |                                                                                                                   Output Samples                                                                                                                   |
|-----------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1<br> 3<br> 4<br> -4<br> 2<br> 3<br> 8<br> 2<br> 5<br> -7<br> 54<br> 76<br> 789<br> 23<br> 98 | par[0] = 4<br> par[1] = -4<br> par[2] = 2<br> par[3] = 8<br> par[4] = 2<br> impar[0] = 1<br> impar[1] = 3<br> impar[2] = 3<br> impar[3] = 5<br> impar[4] = -7<br> impar[0] = 789<br> impar[1] = 23<br> par[0] = 54<br> par[1] = 76<br> par[2] = 98 |