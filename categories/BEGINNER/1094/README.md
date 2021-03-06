# Experiments
Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.

This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.

## Input
The first line of input contains an integer **N** indicating the number of test cases that follows. Each test case contains an integer **Amount** (1 ≤ **Amount** ≤ 15) which represents the amount of animal used and a character **Type** ('*C*', '*R*' or '*S*'), indicating the type of animal:
- *C*: **C**oelho (*rabbit* in portuguese)
- *R*: **R**ato (*rat*  in portuguese)
- *S*: **S**apo (*frog* in portuguese)

## Output
Print the total of animals used, the total of each type of animal and the percentual of each one in relation of the total of animals used. The percentual must be printed with 2 digits after the decimal point.

|                                      Input Samples                                     |                                                                                         Output Samples                                                                                        |
|----------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10<br> 10 C<br> 6 R<br> 15 S<br> 5 C<br> 14 R<br> 9 C<br> 6 R<br> 8 S<br> 5 C<br> 14 R | Total: 92 cobaias<br> Total de coelhos: 29<br> Total de ratos: 40<br> Total de sapos: 23<br> Percentual de coelhos: 31.52 %<br> Percentual de ratos: 43.48 %<br> Percentual de sapos: 25.00 % |