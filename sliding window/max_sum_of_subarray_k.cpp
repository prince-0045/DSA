/* we given one array .
and int k.
now k length subarray which has max sum return max sum.*/
#include<iostream>
#include<math.h>
using namespace std;
# define INT_MIN -100000
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int prevsum=0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    int result = prevsum;
    for(int i=1;i<=n-k;i++){
        int currentsum=prevsum- arr[i-1]+arr[i+k-1];//sliding window 
        result=max(result,currentsum);
            prevsum=currentsum;
    }
    cout<<result;
 return 0;
}