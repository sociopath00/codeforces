#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n;
    ll steps=0;

    cin >> n;
    steps = n/5;

    if(n%5 > 0)
        steps++;

    cout << steps <<"\n";
}
