#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N],n,c;

int B_srch(int g1)
{
    int L,R;
    int l = 0,r = n - 1;
    while(l < r) 
    {
        int mid = l + r >> 1;
        if(a[mid] >= g1) r = mid;
        else l = mid + 1;
    }
    if(a[l] != g1) return 0;
    L = l;
    l = 0,r = n - 1;
    while(l < r)
    {
        int mid = l + r + 1 >> 1;
        if(a[mid] <= g1) l = mid;
        else r = mid - 1;
    }
    R = l;
    return R - L + 1;
}
int main()
{
    scanf("%d%d",&n,&c);
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    sort(a,a+n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += B_srch(a[i]+c);
        if(a[i] - c > 0) sum += B_srch(a[i]-c);
    }
    cout << sum / 2 << endl;
    return 0;
}