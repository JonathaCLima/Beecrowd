# Encryption
You have been asked to build a simple encryption program. This program should be able to send coded messages without someone been able to read them. The process is very simple. It is divided into two parts. 

First, each uppercase or lowercase letter must be shifted three positions to the right, according to the ASCII table: letter 'a' should become letter 'd', letter 'y' must become the character '|' and so on. Second, each line must be reversed. After being reversed, all characters from the half on (truncated) must be moved one position to the left in ASCII. In this case, 'b' becomes 'a' and 'a' becomes '`'. 

For example, if the resulting word of the first part is "tesla", the letters "sla" should be moved one position to the left. However, if the resulting word of the first part is "t#$A", the letters "$A" are to be displaced.

## Input
The input contains a number of cases of test. The first line of each case of test contains an integer **N** (1 ≤ **N** ≤ 1 * 10⁴), indicating the number of lines the problem should encrypt. The following **N** lines contain **M** characters each **M** (1 ≤ **M** ≤ 1 * 10³).

## Output
For each input, you must present the encrypted message.

|                        Input Samples                       |                    Output Samples                    |
|------------------------------------------------------------|------------------------------------------------------|
| 4<br> Texto #3<br> abcABC1<br> vxpdylY .ph<br> vv.xwfxo.fd | 3# rvzgV<br> 1FECedc<br> ks. \n{frzx<br> gi.r{hyz-xx |