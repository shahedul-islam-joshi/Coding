#include <iostream>
using namespace std;

int main()
{
    int a[100], n, pos, val, ch;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Insert\n2. Delete\nEnter choice: ";
    cin >> ch;

    if (ch == 1)
    {
        cout << "Enter position and value: ";
        cin >> pos >> val;

        for (int i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = val;
        n++;
    }
    else if (ch == 2)
    {
        cout << "Enter position to delete: ";
        cin >> pos;

        for (int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }
    else
    {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Array elements:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
