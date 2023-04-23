#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int s1;
    int s2;
    int s3;
};

bool isEqual(student a,student b){
    if( abs(a.s1 - b.s1) > 5) return 0;
    if( abs(a.s2 - b.s2) > 5) return 0;
    if( abs(a.s3 - b.s3) > 5) return 0;
    if( abs(a.s1+a.s2+a.s3-b.s1-b.s2-b.s3) > 10) return 0;
    return 1;
}
int main()
{   
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].s1 >> a[i].s2 >> a[i].s3;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(isEqual(a[i],a[j])){
                cout << a[i].name << " " << a[j].name << endl;
            }
        }
    }
    return 0;
}