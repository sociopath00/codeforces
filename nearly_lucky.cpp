#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, num;
    cin >> n;

    int count = 0;
    while(true){
        num = n%10;
        if(num==4 || num==7)
            ++count;
        if(n < 10)
            break;
        n = n/10;
    }

    if(count==4 || count ==7)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
