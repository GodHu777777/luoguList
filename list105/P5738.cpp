#include<bits/stdc++.h>
using namespace std;

bool cmp1(int a,int b){
    return a < b;
}
bool cmp2(double a,double b){
    return a < b;
}
int main()
{
    int n,m;
    cin >> n >> m;
    // int a[n][m];
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     sort(a[n],a[n]+m,cmp1);
    // }
    // double score[n] = {0};
    // for(int i = 0; i < n; i++){
    //     for(int j = 1; j < m-1; j++){
    //         score[n] += a[i][j];
    //     }
    //     score[n] /= m - 2;
    // }
    // sort(score,score+n,cmp2);
    // printf("%.2f",score[n-1]);
    int score[n] = {0};
    for(int i = 0; i < n; i++){
        int b[m];
        for(int j = 0; j < m; j++){
            cin >> b[j];
        }
        sort(b,b+m,cmp1);
        for(int k = 1; k < m-1; k++){
            score[i] += b[k];
        }
    }
    sort(score,score+n,cmp1);
    printf("%.2f",1.0 * score[n-1] / (m-2));
    return 0;
}