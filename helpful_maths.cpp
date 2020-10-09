#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> a){
    sort(a.begin(), a.end());
    string res = "";

    for(int i=0; i<a.size(); ++i){
        string temp;
        if(i == (a.size()-1))
            temp = to_string(a[i]);
        else
            temp = to_string(a[i]) + "+";
        res += temp;
    }
    return res;
}

int main(){
    string s;
    vector<int> arr;
    int num;

    getline(cin, s);
    istringstream X(s);
    while(X >> num)
        arr.push_back(num);

    string result;
    result = solution(arr);
    cout << result << endl;
}
