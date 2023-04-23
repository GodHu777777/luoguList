#include<bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
    int n,x;
    cin >> n >> x;
    int sum[n-1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i){
            sum[i-1] = a[i-1] + a[i];
        }
    }
    long long eat = 0;
    for(int i = 1; i < n-1; i++){
        if(sum[i] > x && sum[i-1] > x && a[i+1] > 0){
            //--sum[i];--sum[i-1];--a[i+1];--i;
            int d = fmin(sum[i],sum[i-1]) - x;
            eat += d;
            sum[i] -= d;sum[i-1] -= d;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(sum[i] > x){
            eat += sum[i] - x;
        }
    }
    cout << eat;
    return 0;
}