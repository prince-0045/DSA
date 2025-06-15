#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v{2, -3, 4, 4, -7, -1, 4, -2, 6};
    vector<int> ans;
    int k = 4;
    int n = v.size();
    int idx = -1;

    // Find first negative in the first window
    for (int i = 0; i < k; i++) {
        if (v[i] < 0) {
            idx = i;
            break;
        }
    }

    // Add first window result
    if (idx != -1)
        ans.push_back(v[idx]);
    else
        ans.push_back(0);

    // Slide the window
    for (int i = 1; i <= n - k; i++) {
        // If current idx is in range, use it
        if (idx >= i && idx < i + k) {
            ans.push_back(v[idx]);
        } else {
            // Search new negative in current window
            idx = -1;
            for (int j = i; j < i + k; j++) {
                if (v[j] < 0) {
                    idx = j;
                    break;
                }
            }

            // Append result
            if (idx != -1)
                ans.push_back(v[idx]);
            else
                ans.push_back(0);
        }
    }

    // Print result
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
