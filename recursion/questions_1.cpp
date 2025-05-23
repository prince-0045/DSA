#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1||n==0)return 1;
    else return n*factorial(n-1);
}

void print_n_1(int n){
    if(n==0)return;
    cout<<n<<" ";
    print_n_1(n-1);
}

void print_1_n(int i,int n){
    if(i>n)return;
    cout<<i<<" ";
    print_1_n(++i,n);
}

void print_1N_noextra(int n){
    if(n==0)return;
    print_1N_noextra(n-1);
    cout<<n<<" ";
}

int sum1_n(int n){
    if(n==0)return 0;
    else return n+sum1_n(n-1);
}

int power(int x,int y){
    if(x==0 && y==0){
        cout<<"0 raied to 0 is not define";
        return -1;
    }
    if(x==0)return 0;
    if(y==0)return 1;
    else return x*power(x,y-1);
}

int main()
{
    //for fact
    cout<<factorial(4)<<endl;
    print_n_1(6);
    cout<<endl;
    print_1_n(1,10);
    cout<<endl;
    print_1N_noextra(10);
    cout<<endl;
    cout<<sum1_n(4)<<endl;
    cout<<power(2,3)<<endl;
 return 0;
}