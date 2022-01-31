#include<bits/stdc++.h>
using namespace std;

int main(){
    // int, char,long,long long int, float, double 

    long long int a = 100000;
    long long int b = 100000;
    long long int c = a*b;
    cout << c << endl;

    double x  = 100000;
    double y= 100000;
    double z = x*y;
    cout << z << endl;

    cout << fixed << z << endl;
    cout << fixed << setprecision(0) << z << endl;
    double l = 10;
    l = 1e24;
    cout << fixed << l << endl;
}
