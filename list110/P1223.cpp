#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n];
    //memset(b,0,sizeof(b));
    memcpy(b,a,sizeof(a));
    int sum = 0;
    sort(b,b+n,cmp);
    for(int i = 0; i < n; i++){
        // for(int j = 0; j < i; j++){
        //     sum += b[j];
        // }
        sum += b[i] * (n - i - 1);
    }
    bool flag[n] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j] && !flag[j]){
                cout << j+1 << " ";
                flag[j] = 1;
                break;
            }
        }
    }
    cout << endl;
    printf("%.2lf",1.0 * sum / n);
    return 0;
}