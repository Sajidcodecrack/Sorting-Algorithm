#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    int n, i, x;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter input from user : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number for search : " << endl;
    cin >> x;
    int mid;
    int s = 0;
    int e=n-1;
    while (s <= e)


    
    {
        mid = (s + e) / 2;
        if (a[mid] == x)
        {
            cout << "Found" << endl;
            break;
        }
        else if (a[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    if (s > e)
    {
        cout << "Not found" << endl;
    }
    return 0;
}