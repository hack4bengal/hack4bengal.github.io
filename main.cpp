#include <bits/stdc++.h>
using namespace std;
int countTheNumberOfOccurenceOfAnElementInAnArray()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << "The number of occurence of " << x << " is " << count << endl;
    return 0;
}
int main()
{
    countTheNumberOfOccurenceOfAnElementInAnArray();
    return 0;
}