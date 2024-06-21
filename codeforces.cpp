#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a>b && b>c && c>d){
        cout << a << endl;
    }
    else if(b>c && b>d && b>a){
        cout << b << endl;
    }
    else if(c>a && c>b && c>d){
        cout << c << endl;
    }
    else{
        cout << d << endl;
    }
}