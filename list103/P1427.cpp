#include<bits/stdc++.h>
using namespace std;
int a[105];

int main()
{
    int x;
    int cnt = 0;
    while(cin >> x && x != 0){
        a[cnt++] = x;
    }
    for(int i = cnt-1; i >= 0; i--){
        cout << a[i] << " ";
    }
    return 0;
}