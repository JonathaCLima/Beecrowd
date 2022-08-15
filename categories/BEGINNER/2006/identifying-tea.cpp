#include <iostream>

using namespace std;

int main()
{
    int tea, correct_answer {0};

    cin >> tea;

    for (int i {0}; i < 5; i++)
    {
        int answer;

        cin >> answer;

        if (answer == tea)
        {
            correct_answer++;
        }
    }

    cout << correct_answer << endl;

    return 0;
}