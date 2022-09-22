#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;

    while (getline(cin, sentence))
    {
        for (int i {0}, count {1}; i < sentence.length(); i++, count++)
        {
            if (sentence.at(i) == ' ')
            {
                count--;
            }
            else
            {
                if (count % 2 == 0)
                {
                    sentence.at(i) = tolower(sentence.at(i));
                }
                else
                {
                    sentence.at(i) = toupper(sentence.at(i));
                }
            }
        }
        cout << sentence << endl;
    }

    return 0;
}