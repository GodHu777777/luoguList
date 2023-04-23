#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
long long n,m;
int a[N];

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    scanf("%lld %lld",&n,&m);
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    sort(a,a+n,cmp);
    int hh = a[0];
    int idx = 0;
    long long sum = 0;
    //cout << "----------" << endl;
    while(sum < m)
    {
        sum += (a[idx] - a[idx+1]) * (idx+1);
        //cout << "sum " << sum << "----";
        idx++;
      //  cout << a[idx] << " " << "idx = " << idx << endl;
    }
    //cout << endl << "sum-m" << sum-m << endl;
    int ans = a[idx] + (sum - m) / idx;
    cout << ans;
    return 0;
}