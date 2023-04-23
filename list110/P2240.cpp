#include<bits/stdc++.h>
using namespace std;

struct unit{
    int m,v;
};


const int N = 110;
unit a[N];

bool cmp(unit a, unit b)
{
    return 1.0 * a.v / a.m > 1.0 * b.v / b.m;
}

int main()
{
    int n,m; 
    double sum = 0;
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n; i++) scanf("%d%d",&a[i].m,&a[i].v);
    sort(a+1,a+n+1,cmp);
    for(int i = 1; i <= n; i++)
    {
        if(a[i].m <= m)
        {
            m -= a[i].m;
            sum += a[i].v;
        }
        else
        {
            sum += 1.0 * m * a[i].v / a[i].m;
            m = 0;
            break;
        }
    }

    printf("%.2lf",sum);
    return 0;
}