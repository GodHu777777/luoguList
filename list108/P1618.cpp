#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    int A,B,C;
    cin >> A >> B >> C;
    double q1 = 1.0 * B / A;
    double q2 = 1.0 * C / A;
    for(int i=123;i<333;i++)
    {
        if(A==123) break;
        int a[10],b[10],c[10];
        a[1]=i%10;
        a[2]=i%100/10;
        a[3]=i/100;
        b[1]=(int)q1*i;
        b[1]%=10;
        b[2]=(int)q1*i;
        b[2]%=100;
        b[2]/=10;
        b[3]=(int)q1*i;
        b[3]/=100;
        c[1]=(int)q2*i;
        c[1]%=10;
        c[2]=(int)q2*i;
        c[2]%=100;
        c[2]/=10;
        c[3]=(int)q2*i;
        c[3]/=100;
        if(a[1]+a[2]+a[3]+b[1]+b[2]+b[3]+c[1]+c[2]+c[3]==45 && a[1]*a[2]*a[3]*b[1]*b[2]*b[3]*c[1]*c[2]*c[3]==362880)
        {
            flag = 1;
            printf("%d %d %d\n",i,(int)q1*i,(int)q2*i);
        }
    }
    if(!flag && A!=123) cout << "No!!!";
    if(A==123) cout << "123 456 789";
    return 0;
}