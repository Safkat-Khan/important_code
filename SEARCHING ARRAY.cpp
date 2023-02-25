#include <iostream>

using namespace std;

int main()
{
    int p;
    int r;
    int x;
    cout << "Size of The Array : ";
    cin >> p;
    int *ARR = new int(p);

    r = 0;
    for (int i = 0; i < p; i++)
    {
        cout << "Enter the " << i + 1 << " index" << endl;
        cin >> ARR[i];
    }

    cout << "input the search element" << endl;
    cin >> x;
    for (int i = 0; i <p; i++)
    {
        if (ARR[i] == x)
        {
            r++;
        }
}
    cout << "the number occurs " << r << " times in array" << endl;

    return 0;
}
