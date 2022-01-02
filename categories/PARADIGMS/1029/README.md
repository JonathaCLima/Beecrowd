# Fibonacci, How Many Calls?
Sometimes when you are a Computer Science student, you’ll see an exercise or a problem involving the Fibonacci sequence. This sequence has the first two values 0 (zero) and 1 (one) and each next value will always be the sum of the two preceding numbers. By definition, the formula to find any Fibonacci number is:

<pre>
    fib(0) = 0
    fib(1) = 1
    fib(n) = fib(n-1) + fib(n-2);
</pre>

One way of finding Fibonacci numbers is by recursive calls. This is illustrated below, presenting the tree of derivation when we calculate fib(4), i.e. the fifth value of this sequence:

![Tree](../../../gallery/images/problems/UOJ_1029.png)

In this way,

* fib(4) = 1+0+1+1+0 = 3
* 8 recursive calls were done.

## Input
The first input line contains a single integer **N**, indicating the number of test cases. Each test case contains an integer number **X** (1 ≤ **X** ≤ 39).

## Output
For each test case we will have an output line, in the following format: fib(n) = **num_calls** calls = **result**, where num_calls is the number of recursive calls, always with a space before and after the equal sign, as shown below.

| Input Samples |                 Output Samples                 |
|---------------|------------------------------------------------|
| 2<br> 5<br> 4 | fib(5) = 14 calls = 5<br> fib(4) = 8 calls = 3 |