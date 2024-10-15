#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number = ";
    cin >> num;
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}
