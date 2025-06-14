/*given an integer array where every element occurs twice expect one occurs twice except one occurs only one.
find thaty unique element.*/

/*
    many techniques are avilable.
1.brute force:-also many thinking in this.
    1.sort array.and agal pachal na element check kari lo.
    2.take one counter array.
    -----------------------------------------
2.using bit manupulation:-all element do xor.
    1. 2 same number xor is give 0
    2.0 xor any number->number itself
*/

#include<iostream>

using namespace std;
int main()
{
    int arr[6]={1,1,2,2,3};
    int x=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
         x=x^arr[i];
    }

    cout<<x;

    return 0;
}
