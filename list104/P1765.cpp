#include<bits/stdc++.h>
using namespace std;

int step(char a){
    if(a=='a' || a=='d' || a=='g' || a=='j' || a=='m' || a=='p' || a=='t' || a=='w') return 1;
    if(a=='b' || a=='e' || a=='h' || a=='k' || a=='n' || a=='q' || a=='u' || a=='x') return 2;
    if(a=='c' || a=='f' || a=='i' || a=='l' || a=='o' || a=='r' || a=='v' || a=='y') return 3;
    if(a=='s' || a=='z') return 4;
    if(a==' ') return 1;
}
int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += step(s[i]);
    }
    cout << sum;
    return 0;
}