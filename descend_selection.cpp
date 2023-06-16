#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int a[10000];
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Taking Input from user : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    cout << "After desecnding " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Postion : " << i << "->" << a[i] << endl;
    }
}