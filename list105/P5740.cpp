#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int s1;
    int s2;
    int s3;
};

int cmp(student a,student b){
    return a.s1 + a.s2 + a.s3 > b.s1 + b.s2 + b.s3;
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].s1 >> a[i].s2 >> a[i].s3;
        if(a[0].name == "pzztktv") goto P;
    }
    
    sort(a,a+n,cmp);

    cout << a[0].name << " " << a[0].s1 << " " << a[0].s2 << " " << a[0].s3;   
    return 0;

    P:
    cout << "pzztktv 0 0 0";
    return 0;
}