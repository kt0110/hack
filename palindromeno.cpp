#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int temp = n, rev = 0;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;
    if(palindrome(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;

}
