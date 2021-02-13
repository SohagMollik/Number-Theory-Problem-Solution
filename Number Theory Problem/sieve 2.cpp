//#include "std_lib_facilities.h"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool A[100];
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 1; i < n; i++)
        A[i] = true;

    for(int i = 2; i < sqrt(n); i++)
    {
        if (A[i] == true)
        {
            for (int j = i * i; j < n; j+= i)
            {
                A[j] = false;
            }
        }
    }

    cout << "The prime numbers below " << n << " are: " << endl;

    for(int i = 1; i <n; i++)
    {
        if (A[i] == true)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;

}
