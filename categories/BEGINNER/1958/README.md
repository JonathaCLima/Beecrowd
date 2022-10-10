# Scientific Notation
Floating point numbers can be very long to show. In these cases, it is convenient to use the scientific notation.

You must write a program that, given a floating point number, shows this number in scientific notation: always show the mantissa sign; always show the mantissa with 4 decimal places; use the character 'E' between the mantissa and the exponent; always show the exponent sign; and show the exponent with at least 2 digits.

## Input
The input is a double precision floating point number **X** (according to the IEEE 754-2008 standard). There will never be a number with more than 110 characters long and more than 6 decimal places.

## Output
The output is the number **X** in a single line using the scientific notation detailed above. See the examples below.

|                                              Input Samples                                             | Output Samples |
|--------------------------------------------------------------------------------------------------------|----------------|
| 3.141592                                                                                               | +3.1416E+00    |
| 1.618033                                                                                               | +1.6180E+00    |
| 602214085774747474747474                                                                               | +6.0221E+23    |
| -0.000027                                                                                              | -2.7000E-05    |
| -10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | -1.0000E+100   |