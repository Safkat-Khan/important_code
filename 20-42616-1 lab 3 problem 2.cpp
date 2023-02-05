#include <iostream>
using namespace std;

void decode(string str, int j)
{
    int temp;
    for(int i = j; i < str.size(); i = i+j+1)
    {
        temp = str[i];
        str[i] = (char)(temp - j);
    }
    cout << "\n\nConverted String: " << str;
    cout << endl << endl;
}

int main()
{
    int j;
    string str;
    cout<< "Please Enter a sample string: ";
    ///cin >> str;
    getline(cin,str);
    cout<< "Please Enter a sample integer: ";
    cin >> j;

    cout << "\nSample String: " << str;
    cout << "\nSample Integer: " << j;

    decode(str, j);
    return 0;
}

