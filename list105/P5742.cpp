#include<bits/stdc++.h>
using namespace std;

struct student{
    int id;
    int score1;
    int score2;
};

bool excellent(student a){
    return a.score1 * 7 + a.score2 * 3 >= 800 && a.score1 + a.score2 > 140;
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].score1 >> a[i].score2;
    }
    for(int i = 0; i < n; i++){
        if(excellent(a[i])){
            cout << "Excellent" << endl;
        }else{
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}