#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    int n;
    cin >> n;
    student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].age >> a[i].score;
        a[i].age += 1;
        a[i].score *= 1.2;
        if(a[i].score >= 600) a[i].score = 600;
    }
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].age << " " << a[i].score << endl;
    }
}