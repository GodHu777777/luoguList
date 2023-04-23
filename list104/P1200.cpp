#include<bits/stdc++.h>
using namespace std;

int main()
{
    string group;
    string star;
    getline(cin,group);
    getline(cin,star);
    int res1 = 1;
    int res2 = 1;
    int n1 = group.length();
    int n2 = star.length();
    for(int i = 0; i < n1; i++){
        res1 *= group[i] - 'A' + 1;
    }
    for(int i = 0; i < n2; i++){
        res2 *= star[i] - 'A' + 1;
    }
    if(res1 % 47 == res2 % 47){
        cout << "GO";
    }else{
        cout << "STAY";
    }
    return 0;
}