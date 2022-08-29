#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;

    while ((cin >> n) && (n))
    {
        queue<int> deck;

        for (int i {1}; i <= n; i++)
        {
            deck.push(i);
        }

        cout << "Discarded cards: ";

        while (--n)
        {
            cout << deck.front() << (n > 1 ? ", " : "\n");
            deck.pop();
            deck.push(deck.front());
            deck.pop();
        }

        cout << "Remaining card: " << deck.front() << endl;
    }

    return 0;
}