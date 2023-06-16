#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    int n, i, j;
   
    cout << "Enter the value of n : " << endl;
    cin >> n;
    cout << "Taking input from user : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
               int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    cout << "Printing the sorted in ascending " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}