#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n;

    while ((cin >> n) && (n))
    {
        deque<int> deck;

        for (int i {1}; i <= n; i++)
        {
            deck.push_back(i);
        }

        cout << "Discarded cards: ";

        while (--n)
        {
            cout << deck.front() << (n > 1 ? ", " : "\n");
            deck.pop_front();
            deck.push_back(deck.front());
            deck.pop_front();
        }

        cout << "Remaining card: " << deck.front() << endl;
    }

    return 0;
}