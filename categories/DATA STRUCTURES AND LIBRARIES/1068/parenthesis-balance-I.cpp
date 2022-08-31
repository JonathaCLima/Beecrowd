#include <iostream>

using namespace std;

bool balanced(char *);

int main()
{
    char expression[1000];

    while (cin >> expression)
    {
        cout << (balanced(expression) ? "correct" : "incorrect") << endl;
    }

    return 0;
}

bool balanced(char *character)
{
    short count {0};

    if (*character == ')')
    {
        return false;
    }
    else
    {
        while (*character && count >= 0)
        {
            if (*character == '(')
            {
                count++;
            }
            if (*character == ')')
            {
                count--;
            }
            character++;
        }
        return count == 0 ? true : false;
    }
}