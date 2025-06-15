#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    vector<int> c{1,0,1,2,1,1,7,5}; // customer
    vector<int> g{0,1,0,1,0,1,0,1}; // grumpy
    int k = 3; // minutes

    int prevloss = 0;
    int idx = 0; 
    int result = 0;

    // initial loss in first k window
    for(int i = 0; i < k; i++){
        if(g[i] == 1) prevloss += c[i];
    }

    int loss = prevloss;

    // sliding window to find max recoverable loss
    for(int i = 1; i <= c.size() - k; i++){ 
        loss = prevloss;
        if(g[i - 1] == 1) loss -= c[i - 1];  
        if(g[i + k - 1] == 1) loss += c[i + k - 1]; 

        if(loss > prevloss){
            idx = i; 
            prevloss = loss;
        }
    }

    // apply technique in selected k-minute window
    for(int i = idx; i < idx + k; i++){
        if(g[i] == 1) g[i] = 0;
    }

    // calculate total satisfied customers
    for(int i = 0; i < c.size(); i++){
        if(g[i] == 0) result += c[i];
    }

    cout << result;

    return 0;
}
