# Banknotes and Coins
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of *notes and coins* on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

## Input
The input file contains a value of floating point **N** (0 ≤ **N** ≤ 1000000.00).

## Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

| Samples Input |                                                                                                                                                                Samples Output                                                                                                                                                                 |
|---------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 576.73        | NOTAS:<br> 5 nota(s) de R$ 100.00<br> 1 nota(s) de R$ 50.00<br> 1 nota(s) de R$ 20.00<br> 0 nota(s) de R$ 10.00<br> 1 nota(s) de R$ 5.00<br> 0 nota(s) de R$ 2.00<br> MOEDAS:<br> 1 moeda(s) de R$ 1.00<br> 1 moeda(s) de R$ 0.50<br> 0 moeda(s) de R$ 0.25<br> 2 moeda(s) de R$ 0.10<br> 0 moeda(s) de R$ 0.05<br> 3 moeda(s) de R$ 0.01<br> |
| 4.00          | NOTAS:<br> 0 nota(s) de R$ 100.00<br> 0 nota(s) de R$ 50.00<br> 0 nota(s) de R$ 20.00<br> 0 nota(s) de R$ 10.00<br> 0 nota(s) de R$ 5.00<br> 2 nota(s) de R$ 2.00<br> MOEDAS:<br> 0 moeda(s) de R$ 1.00<br> 0 moeda(s) de R$ 0.50<br> 0 moeda(s) de R$ 0.25<br> 0 moeda(s) de R$ 0.10<br> 0 moeda(s) de R$ 0.05<br> 0 moeda(s) de R$ 0.01<br> |
| 91.01         | NOTAS:<br> 0 nota(s) de R$ 100.00<br> 1 nota(s) de R$ 50.00<br> 2 nota(s) de R$ 20.00<br> 0 nota(s) de R$ 10.00<br> 0 nota(s) de R$ 5.00<br> 0 nota(s) de R$ 2.00<br> MOEDAS:<br> 1 moeda(s) de R$ 1.00<br> 0 moeda(s) de R$ 0.50<br> 0 moeda(s) de R$ 0.25<br> 0 moeda(s) de R$ 0.10<br> 0 moeda(s) de R$ 0.05<br> 1 moeda(s) de R$ 0.01<br> |