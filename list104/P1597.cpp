#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    int value[3] = {0};
    for(int i = 0; i < n/5; i++){
        if(s[5*i + 3] >= '0' && s[5*i + 3] <= '9'){
            value[s[5*i] - 'a'] = s[5*i + 3] - '0';
        }else{
            value[s[5*i] - 'a'] = value[s[5*i + 3] - 'a'];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << value[i] << " ";
    }
    return 0;
}