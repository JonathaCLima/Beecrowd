# Caesar Cipher
Julius Caesar used a system of cryptography, now known as Caesar Cipher, which shifted each letter 2 places further through the alphabet (e.g. 'A' shifts to 'C', 'R' shifts to 'T', etc.). At the end of the alphabet we wrap around, that is 'Y' shifts to 'A'. We can, of course, try shifting by any number.

## Input
The input contains several test cases. The first line of input contains an integer **N** that indicates the number of test cases. Each test case is composed by two lines. The first line contais a string that is a codified sentence. This string will contain between 1 and 50 characters, inclusive. Each character is an uppercase letter ('A'-'Z'), that is the codified sentence to this modified Caesar Cipher. The second line contains the number of right shift, this value is between 0 and 25, inclusive.

## Output
Given an encoded text and a number of shifted letters, decode it to the original sentence, acording to the explanation above and the following example.

|                                                              Input Samples                                                             |                                       Output Samples                                       |
|----------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------|
| 6<br> VQREQFGT<br> 2<br> ABCDEFGHIJKLMNOPQRSTUVWXYZ<br> 10<br> TOPCODER<br> 0<br> ZWBGLZ<br> 25<br> DBNPCBQ<br> 1<br> LIPPSASVPH<br> 4 | TOPCODER<br> QRSTUVWXYZABCDEFGHIJKLMNOP<br> TOPCODER<br> AXCHMA<br> CAMOBAP<br> HELLOWORLD |