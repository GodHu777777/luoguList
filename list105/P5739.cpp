#include<iostream>
using namespace std;

int jiecheng(int a){
    if(a == 1) return 1;
    if(a == 2) return 2;
    return a * jiecheng(a-1);
}
int main()
{
    int x;
    cin >> x;
    cout << jiecheng(x) << endl;
}