#include<iostream>
#include<cmath>
using namespace std;

struct point {
    double x;
    double y;
};

int main()
{
    point a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i].x >> a[i].y;
    }
    double len1,len2,len3;
    len1 = sqrt((a[1].x - a[2].x) * (a[1].x - a[2].x) + (a[1].y - a[2].y) * (a[1].y - a[2].y));
    len2 = sqrt((a[0].x - a[2].x) * (a[0].x - a[2].x) + (a[0].y - a[2].y) * (a[0].y - a[2].y));
    len3 = sqrt((a[0].x - a[1].x) * (a[0].x - a[1].x) + (a[0].y - a[1].y) * (a[0].y - a[1].y));
    printf("%.2f",len1+len2+len3);
    return 0;
}