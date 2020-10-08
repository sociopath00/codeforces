#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, len;
    cin >> num;
    vector<string> arr;

    for(int i=0; i<num; ++i){
        string word;
        cin >> word;
        arr.push_back(word);
    }

    for(auto x: arr){
        len = x.length();
        if(len > 10){
            cout << x[0] << (len-2) << x[len-1] << "\n";
        } else{
            cout << x << "\n";
        }
    }
}

/**
Time: 31 ms
Memory: 200kb
*/
