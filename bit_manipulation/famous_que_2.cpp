/*
    given an integer array nums,
    in which excatly two elements apperas only once all other element apperars twice,
    find the two elements that appears only once
*/
/*
1.brute force easy
2.if we do all no xor.we get finally 2 unique number xor answer.
which is not 0.
any 1 bit is set bit.
now mark kth bit which has answer 1.
and jeni kth bit set hoy enu xor lo.we get one answer.\
now pela je xor no answer te second xr no answer no xor get the other unique no.
*/
#include<iostream>
using namespace std;
int main() {
    int arr[6] = {1, 1, 2, 2, 3, 6};
    int xor_all = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Step 1: XOR all elements, result will be x ^ y (x and y are unique numbers)
    for(int i = 0; i < size; i++) {
        xor_all ^= arr[i];
    }

    // Step 2: Find any set bit (rightmost set bit) in xor_all
    int set_bit = xor_all & ~(xor_all - 1); // isolate rightmost set bit

    int x = 0, y = 0;

    // Step 3: Divide elements into two groups based on the set_bit and XOR them
    for(int i = 0; i < size; i++) {
        if(arr[i] & set_bit)
            x ^= arr[i]; // group with set bit
        else
            y ^= arr[i]; // group without set bit
    }

    cout << "The two unique numbers are: " << x << " and " << y << endl;

    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 1, 2, 2, 3, 6};
//     int x = 0;
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // XOR all elements to get x ^ y
//     for(int i = 0; i < size; i++) {
//         x = x ^ arr[i];
//     }

//     int temp = x;
//     int k = 0;

//     // Find the first set bit position (not unset bit)
//     while (((temp >> k) & 1) == 0) {
//         k++;
//     }

//     int x1 = 0, x2 = 0;

//     // Split elements based on k-th bit
//     for(int i = 0; i < size; i++) {
//         if ((arr[i] >> k) & 1)
//             x1 = x1 ^ arr[i];  // group where k-th bit is set
//         else
//             x2 = x2 ^ arr[i];  // group where k-th bit is not set
//     }

//     cout << x1 << " " << x2;

//     return 0;
// }
