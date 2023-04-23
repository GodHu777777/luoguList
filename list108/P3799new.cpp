#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10,mode = 1e9 + 7;
long long bkt[N],cnt;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        bkt[t]++;
    }

    for(int i = 2; i <= N; i++)
    {
        if(bkt[i] >= 2)
        {
            for(int j = 1; j <= i / 2; j++)
            {               
                if(j * 2 != i)
                    cnt += bkt[i] * (bkt[i]-1) * bkt[j] * bkt[i-j] / 2 % mode;    
                else if(bkt[j] >= 2 && j * 2 == i)
                    cnt += bkt[i] * (bkt[i]-1) * bkt[j] * (bkt[j]-1) / 4 % mode;
            }
            cnt %= mode;
        }
    }
    cout << cnt % mode;
    return 0;
}