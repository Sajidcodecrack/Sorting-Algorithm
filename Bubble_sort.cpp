#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int a[100];
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Input user information : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                
                
                {

                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }
    }
    cout << "After sorting :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}