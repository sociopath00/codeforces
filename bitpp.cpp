#include <bits/stdc++.h>

using namespace std;

int solution(const vector<string> a){
    int x = 0;
    for(int i=0; i<a.size(); ++i){
        if(a[i].find('+') != std::string::npos)
            ++x;
        else
            --x;
    }
    return x;
}

int main(){
    int num, result;
    string s;
    vector<string> arr;

    cin >> num;
    cin.ignore(1);
    for(int i=0; i<num; ++i){
        getline(cin, s);
        arr.push_back(s);
    }

    result = solution(arr);
    cout << result << "\n";
}

/**
Time: 31 ms
Memory: 0 KB
*/
