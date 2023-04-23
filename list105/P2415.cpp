#include<bits/stdc++.h>
using namespace std;

int a[1000] = {0};

int main()
{
    int n;
    int cnt = 0;
    // while(scanf("%d",&n) != EOF)
    while(cin >> n){
        a[cnt++] = n;
    }         
    long long sum = 0;
    for(int i = 0; i < cnt; i++){
        sum += a[i] * pow(2,cnt-1);
    }
    cout << sum;
    return 0;
}