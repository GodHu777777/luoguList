#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        cout << a[b] << endl;
    }
    return 0;
}