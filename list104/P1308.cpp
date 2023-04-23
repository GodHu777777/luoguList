#include<bits/stdc++.h>
using namespace std;

struct unit
{
    int startidx = -1;
    string word;
};

//unit words[100000];
char a[100000];
int main()
{
    unit words[1000];
    char key[10] = {0};
    gets(key);
    int x = strlen(key);
    for(int i = 0; i < x; i++){
        if(key[i] >= 'A' && key[i] <= 'Z'){
            key[i] -= 'A' - 'a';
        }
    }
    gets(a);
    int n = strlen(a);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] -= 'A' - 'a';
        }
        if(a[i] != ' '){
            words[j].word += a[i];
            if(words[j].startidx == -1){
                words[j].startidx = i;
            }
        }
        if(a[i] == ' '){
            if(a[i-1] != ' ') ++j;
        }
    }

    int cnt = 0;
    int flag;
    for(int i = 0; i < j; i++){
        if(words[i].word == key){
            cnt++;
        }
        if(cnt == 1) flag = words[i].startidx;
    }

    if(cnt){
        cout << cnt << " " << flag;
    }else{
        cout << -1;
    }
    return 0;
}










// char a[1000];
// // string words[10000];
// int main()
// {
//     char key[10] = {0};
//     gets(key);
//     string words[1000];
//     gets(a);
//     int n = strlen(a);
//     int j = 0;
//     int flag = 0;
//     for(int i = 0; i < n; i++){
//         if(a[i] >= 'A' && a[i] <= 'Z'){
//             a[i] -= 'A' - 'a';
//         }
//         if(a[i] != ' '){
//             words[j] += a[i];
//         }else{
//             if(a[i-1] != ' ') j++;
//         }
//     }
//     for(unsigned int i = 0; i < strlen(key); i++){
//         if(key[i] >= 'A' && key[i] <= 'Z'){
//             key[i] -= 'A' - 'a';
//         }
//     }
//     int cnt = 0;
//     for(int i = 0; i < j; i++){
//         if(words[i] == key){
//             cnt++;
//             if(cnt == 1) flag = i;
//         }
//     }
//     if(cnt) cout << cnt << " " << flag;
//     else cout << -1;
//     return 0;
// }