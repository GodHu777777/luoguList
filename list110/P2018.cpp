#include<bits/stdc++.h>
using namespace std;
int a[100005] = {0};
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long sum = a[0];
    for(int i = 0; i < n-1; i++){
        if(a[i+1] > a[i]){
            sum += a[i+1] - a[i];
        }
    }
    cout << sum;
    return 0;
}