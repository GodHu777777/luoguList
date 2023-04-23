#include<bits/stdc++.h>
using namespace std;
int f[1005];
int main()
{  
    for(int i = 1; i <= 1000; i++){
        f[i] = 1;
    }
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= 1000; i++){
        for(int j = 1; j <= i/2; j++){
            f[i] += f[j];
        }
    }
    int n;
    cin >> n;
    cout << f[n];
    return 0;
}