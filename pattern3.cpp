#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
