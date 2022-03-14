#include <iostream>

using namespace std;

int ascending(void const *a, void const *b);
int descending(void const *a, void const *b);

int main()
{
    int n, count_even = 0, count_odd = 0;

    cin >> n;

    int even[n], odd[n];

    while(n--)
    {
        int num;

        cin >> num;

        if(num % 2 == 0)
        {
            even[count_even++] = num;
        }
        else
        {
            odd[count_odd++] = num;
        }
    }

    qsort(even, count_even, sizeof(int), ascending);
    qsort(odd, count_odd, sizeof(int), descending);

    for(int i = 0; i < count_even; i++)
    {
        cout << even[i] << endl;
    }

    for(int i = 0; i < count_odd; i++)
    {
        cout << odd[i] << endl;
    }

    return 0;
}

int ascending(void const *a, void const *b)
{
    return (*(int*)a - *(int*)b);
}

int descending(void const *a, void const *b)
{
    return (*(int*)b - *(int*)a);
}