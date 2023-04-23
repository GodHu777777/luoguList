#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1;
    int day;
    cin >> day;
    while(day-1){
        n += 1;
        n *= 2;
        day -= 1;
    }
    cout << n;
    return 0;
}