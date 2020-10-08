#include <bits/stdc++.h>

using namespace std;

int main(){
    int rows;
    string s;
    int count = 0;

    cin >> rows;

    for(int i=0; i<rows; ++i){
        int a,b,c;
        cin >> a >> b >> c;
        if((a==1 && b==1) || (c==1 && b==1) || (a==1 && c==1))
            ++count;
    }

    cout << count << endl;

}

/**
Time: 62 ms
Memory: 0 KB
*/
