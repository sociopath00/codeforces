#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    double bananaCost;
    double dollars;
    double numBananas;

    double totalCost = 0;
    ll borrow;

    cin >> bananaCost >> dollars >> numBananas;

    // Time Complexity 0(n)
    // for(int i=1; i<=numBananas; ++i)
    //     totalCost += bananaCost*i;

    // Time Complexity 0(1) using Airthmetic Sequence formula
    // (n/2)*(2*a + (n-1)*d)   in our case a and d are same
    totalCost = (numBananas/2)*((2*bananaCost) + ((numBananas-1)*bananaCost));

    if(totalCost > dollars)
        borrow = totalCost - dollars;
    else
        borrow = 0;

    cout << borrow << "\n";

}
