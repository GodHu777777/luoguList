#include<bits/stdc++.h>
using namespace std;
long long a[5005] = {1,1};
int main()
{
    for(int i = 2; i < 5005; i++){
        a[i] = a[i-1] + a[i-2];
    }
    int n;
    cin >> n;
    cout << a[n];
    return 0;
}