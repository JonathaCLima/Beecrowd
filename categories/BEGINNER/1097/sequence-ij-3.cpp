#include <iostream>

using namespace std;

int main()
{
    for (int i {1}, j {7}, count {7}; i <= 9; i += 2, j += 5, count += 2)
    {
        for (; j >= count - 2; j--)
        {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}