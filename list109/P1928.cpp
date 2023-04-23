#include<bits/stdc++.h>
using namespace std;

string f(){
    string s1="",s2;
    char ch;
    int n;
    while(cin >> ch){
        if(ch == '\n') break;
        if(ch == '['){
            scanf("%d",&n);
            s2 = f();
            while(n--) s1 += s2;
        }else if(ch == ']'){
            return s1;
        }else{
            s1 += ch;
        }
    }
}

int main()
{
    cout << f();
    return 0;
}