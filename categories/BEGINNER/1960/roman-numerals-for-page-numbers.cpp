#include <iostream>
#include <map>

using namespace std;

string arabic_to_roman(int);

int main()
{
    int n;

    cin >> n;

    cout << arabic_to_roman(n) << endl;

    return 0;
}

string arabic_to_roman(int value)
{
    map<int, string> numerals
    {
        {    1,  "I" },
        {    4, "IV" },
        {    5,  "V" },
        {    9, "IX" },
        {   10,  "X" },
        {   40, "XL" },
        {   50,  "L" },
        {   90, "XC" },
        {  100,  "C" },
        {  400, "CD" },
        {  500,  "D" },
        {  900, "CM" },
        { 1000,  "M" },
    };

    string roman {};

    for (auto it {numerals.rbegin()}; it != numerals.rend(); it++)
    {
        while ((value - it->first) >= 0)
        {
            roman += it->second;
            value -= it->first;
        }
    }

    return roman;
}