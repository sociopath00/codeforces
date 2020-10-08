#include <bits/stdc++.h>

using namespace std;

int solution(const vector<int> &arr, int &idx){
    int thresh;
    thresh = arr[idx-1];
    int count = 0;

    if(thresh <= 0){
        for(int i=0; i<idx; ++i){
            // cout << arr[i] << endl;
            if(arr[i] > 0)
                ++count;
        }
    } else{
        count = idx;
        for(int i=count; i<arr.size(); ++i)
            if(arr[i] < thresh)
                break;
            else
                ++count;
    }

    return count;
}


int main(){
    int players, idx;
    int num;
    string s;
    vector<int> arr;

    cin >> players >> idx;
    cin.ignore(1);

    getline(cin, s);
    istringstream X(s);

    while(X >> num){
        arr.push_back(num);
    }

    int result;
    result = solution(arr, idx);
    cout << result <<"\n";

}

/**
Time: 62 ms
Memory: 0 KB
*/
