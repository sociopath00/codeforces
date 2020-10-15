#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a, b;

    cin >> n;

    int total_pass = 0;
    int cap = total_pass;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        total_pass += (b-a);
        if(total_pass > cap)
            cap = total_pass;
    }

    cout << cap << "\n";
}
