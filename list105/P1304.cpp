#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int a = sqrt(n);
    if(n <= 1) return 0;
    for(int i = 2; i <= a; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 4; i <= n; i+=2){
        for(int j = 2; j <= i/2; j++){
            if(isPrime(j) && isPrime(i-j)){
                cout << i << "=" << j << "+" << i-j << endl;
                break;
            }
        }
    }
    return 0;
}