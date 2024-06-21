#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector <int> n(2,5);
    n.push_back(2);
    n.erase(n.begin()+1);
    for(int i=0;i<n.size();i++) cout << n[i] << " ";
    cout << endl;
}