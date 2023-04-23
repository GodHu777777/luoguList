#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[255];
    gets(a);
    int n = strlen(a);
    int k;
    cin >> k;
    int s = k;
    while(s--){
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                for(int j = i; j < n-1; j++){
                    a[j] = a[j+1]; 
                }
                break;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < n - k; i++){
        if(a[i] != '0') cnt++;
        if(cnt) cout << a[i];
    }
    if(cnt == 0) cout << 0;
    return 0;
}
