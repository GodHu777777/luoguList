#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a < b;
}
int a[5000007];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    cout << a[m];
    return 0;
}