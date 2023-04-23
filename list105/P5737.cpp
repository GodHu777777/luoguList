#include<iostream>
using namespace std;

bool isRun(int n){
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) return 1;
    return 0;
}

int main()
{
    int x,y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i <= y; i++){
        if(isRun(i)) cnt++;
    }
    cout << cnt << endl;
    for(int i = x; i <= y; i++){
        if(isRun(i)) cout << i << " ";
    }
    return 0;
}