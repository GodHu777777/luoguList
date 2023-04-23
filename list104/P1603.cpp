#include<bits/stdc++.h>
using namespace std;

struct unit{
    int startidx;
    int endidx;
    string str = "";
};

bool cmp(int a, int b){
    return a < b;
}

int value(string s){
    if(s=="one"||s=="a"||s=="first"||s=="another") return 1;
     if(s=="two"||s=="both"||s=="second") return 4;
     if(s=="three"||s=="third") return 9;
     if(s=="four") return 16;
     if(s=="five") return 25;
     if(s=="six") return 36;
     if(s=="seven") return 49;
     if(s=="eight") return 64;
     if(s=="nine") return 81;
     if(s=="eleven") return 21;
     if(s=="twelve")return 44;
     if(s=="thirteen")return 69;
     if(s=="fourteen")return 96;
     if(s=="fifteen") return 25;
     if(s=="sixteen")return 56;
     if(s=="seventeen")return 89;
     if(s=="eightteen") return 24;
     if(s=="nineteen") return 61;
     return 0;
}
unit words[6];
int main()
{
    //unit words[6];
    string a;
    getline(cin,a);
    int n = a.length();
    int j = 0;
    words[0].startidx = 0;
    for(int i = 1; i < n-1; i++){
        if(a[i] != ' '){
            words[j].endidx = i;
        }
        if(a[i] == ' ' && a[i+1] != ' '){
            words[++j].startidx = i+1;
        }
    }
    for(int i = 0; i < 6; i++){
        for(int j = words[i].startidx; j <= words[i].endidx; j++){
            words[i].str += a[j];
        }
        //cout << words[i].str << endl;
    }

    int number[6];
    for(int i = 0; i < 6; i++){
        number[i] = value(words[i].str);
    }
    sort(number,number+6,cmp);
    int cnt = 0;
    for(int i = 0; i < 6; i++){
        if(number[i]) cnt++; 
        if(cnt == 1){
            cout << number[i];
        }else{
            if(number[i]){
                if(number[i] < 10){
                    cout << 0 << number[i];
                }else{
                    cout << number[i];
                }
            }
        }
    }
    if(cnt == 0){
        cout << 0;
    }
    return 0;
}