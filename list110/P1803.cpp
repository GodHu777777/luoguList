#include<bits/stdc++.h>
using namespace std;
struct match{
    int x;
    int y;
};

bool cmp(match m,match n){
    return m.y < n.y;
}
int main()
{
    int n;
    cin >> n;
    match a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
    }
    sort(a,a+n,cmp);
    int sum = 1;
    int temp = a[0].y;
    for(int i = 1; i < n; i++){
        if(temp <= a[i].x){
            sum++;
            temp = a[i].y;
        }
    }
    cout << sum;
    return 0;
}