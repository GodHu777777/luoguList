#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N];
int n,m;

void find(int x)
{
    int l = 1, r = n;
    while(l < r)
    {
        int mid = l + r >> 1;
        if(a[mid] >= x) r = mid;
        else l = mid + 1;
    }
    if(a[l] == x) printf("%d ",l);
    else printf("-1 ");
}

int main()
{
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
    while(m--)
    {
        int x;
        scanf("%d",&x);
        find(x);
    }
    return 0;
}