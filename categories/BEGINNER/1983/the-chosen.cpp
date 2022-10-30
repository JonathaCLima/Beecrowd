#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> registrations;
    vector<double> notes;

    for (int i {0}; i < n; i++)
    {
        int registration;
        double note;
        cin >> registration >> note;
        registrations.insert(registrations.begin() + i, registration);
        notes.insert(notes.begin() + i, note);
    }

    int index {0};
    double greater_note {0.0};

    for (int i {0}; i < n; i++)
    {
        if (notes.at(i) > greater_note)
        {
            greater_note = notes.at(i);
            index = i;
        }
    }

    if (greater_note < 8)
        cout << "Minimum note not reached" << endl;
    else
        cout << registrations.at(index) << endl;

    return 0;
}