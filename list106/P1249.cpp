#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i;
    for(i = 2; sum < n; i++){
        sum += i;
    }
    int mul = 1;
    if(sum - n == 0){
        for(int j = 2; j < i; j++){
            cout << j << " ";
            mul *= j;
        }
        cout << endl << mul;
    }
    if(sum - n == 1){
        for(int j = 3; j < i+1; j++){
            cout << j << " ";
            mul *= j;
        }
        cout << endl << mul;
    }
    if(sum - n >= 2){
        int k = sum - n;
        for(int j = 2; j < i; j++){
            if(j != k){
                cout << j << " ";
                mul *= j;
            }
        }
        cout << endl << mul;
    }
    return 0;
}