#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int flag[n] = {0};
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])) flag[i] = 1;
    }
    for(int i = 0; i < n; i++){
        if(flag[i]) cout << a[i] << " ";
    }
    return 0;
}