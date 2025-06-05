#include<iostream>
#include<vector>
#include<string>
using namespace std;

void tower_of_hanoi(int n,char S,char H,char D){
    if(n==0)return;
    tower_of_hanoi(n-1,S,D,H);
    cout<<S<<" -> "<<D<<endl;
    tower_of_hanoi(n-1,H,S,D);
}

void print_array(int arr[],int size,int idx){
    if(idx==size)return;
    cout<<arr[idx]<<" ";
    print_array(arr,size,idx+1);
}
int min_vector(vector<int>& a,int Min,int idx){
    if(idx==a.size())return Min;
    else return min_vector(a,min(Min,a[idx]),idx+1);
}

string skip_char(string s,char a,int idx,string ans=""){
    if(idx==s.size())return ans;
    if(a!=s[idx])ans=ans+s[idx];
    return skip_char(s,a,idx+1,ans);
}
string skip_char_2(string s, string ans, char a) {
    //but time and space complexity is worst as we don substringoperation then
    // all time new string is initialize.
    //so we can use our idx operation as use above.
    if (s.length() == 0) return ans;
    if (s[0] == a) return skip_char_2(s.substr(1), ans, a);
    else return skip_char_2(s.substr(1), ans + s[0], a);
}

void print_subset_string(string s,string ans=""){
    //for revese ordering in output just change the call order😉
    //we can also do by indexing instead of substr
    if(s.length()==0){
        cout<<"{"<<ans<<"}";
        return;}
    print_subset_string(s.substr(1),ans+s[0]);
    print_subset_string(s.substr(1),ans);     
}
vector<int>starting_1_vector(const vector<int>& a){
    vector<int>a1(a.begin() + 1, a.end());      
    return a1;

}
vector<vector<int>> generate_power_set(const vector<int>& a, vector<int> current) {
    // Base case: if input is empty, return current subset as the only result
    if (a.empty()) {
        return { current };
    }

    // Include a[0]
    vector<int> include_current = current;
    include_current.push_back(a[0]);
    vector<vector<int>> included = generate_power_set(starting_1_vector(a), include_current);

    // Exclude a[0]
    vector<vector<int>> excluded = generate_power_set(starting_1_vector(a), current);

    // Merge results
    included.insert(included.end(), excluded.begin(), excluded.end());
    return included;
}

void print_subset_string_duplicated_allowed(string s,string ans="",bool x=true){
    if(s.length()==0){
        cout<<"{"<<ans<<"}";
        return;
    }
    /*
        1.sort the string(nlogn)
        2.left call if x is true
        3.right call always run .bas only this condition
    */
    if(s.length()==1){
        print_subset_string_duplicated_allowed(s.substr(1),ans+s[0],true);
        print_subset_string_duplicated_allowed(s.substr(1),ans,true);\
        return;//very imp things
    }
    if(s[0]==s[1]){//duplicate
      if(x) print_subset_string_duplicated_allowed(s.substr(1),ans+s[0],true);
        print_subset_string_duplicated_allowed(s.substr(1),ans,false);
    }
    else{
            if(x) print_subset_string_duplicated_allowed(s.substr(1),ans+s[0],true);
        print_subset_string_duplicated_allowed(s.substr(1),ans,true);
    }

}

void print_k_length_subset_string(string s,int k,string ans=""){
  /*
    easy take it or leave it.
    we make all subset then only take k length subsets.

*/
    if(s.length()==0){
        if(ans.length()==k)cout<<"{"<<ans<<"}";
        return;
    }
    print_k_length_subset_string(s.substr(1),k,ans+s[0]);
    print_k_length_subset_string(s.substr(1),k,ans);     
}

void printSubset(int arr[],int n,int idx, vector<int> ans,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
            cout<<" ";
        }

        return;
    }
    if(ans.size()+(n-idx) < k) return; // time complexity better
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
}
void print_string_permutation(string s, string ans) {
    if (s == "") {
        cout << ans << " ";
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        string remaining = s.substr(0, i) + s.substr(i + 1);
        print_string_permutation(remaining, ans + s[i]);
    }
}


int main()
{
    int arr[]={1,2,3,4,5}; 
    vector<int>a{1,2,3};
    tower_of_hanoi(3,'A','B','C');
    print_array(arr,5,0);
    cout<<endl<<min_vector(a,a[0],0)<<endl;
    cout<<skip_char("aaaaaa aaaaaaaap",'a',0)<<endl;
    cout<<skip_char_2("paaateal","",'a')<<endl;
    print_subset_string("abc");
    cout<<endl;
    vector<vector<int>> power_set = generate_power_set(a, {});
    for (int i = 0; i < power_set.size(); i++) {
        for (int j = 0; j < power_set[i].size(); j++) {
            cout <<power_set[i][j]<<"";
        }
        cout<<" ";
    }
    cout<<endl;
    string s="aab";
    
    print_subset_string_duplicated_allowed("aab");
    cout<<endl;
    print_k_length_subset_string("abcde",3);
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    printSubset(arr,n,0,v,k);
    cout<<endl;
    print_string_permutation("abc","");

 return 0;
}
//output
// A -> C
// A -> B
// C -> B
// A -> C
// B -> A
// B -> C
// A -> C
// 1 2 3 4 5 
// 1
//  p
// ptel
// {abc}{ab}{ac}{a}{bc}{b}{c}{}
// 123 12 13 1 23 2 3  
// {aab}{aa}{ab}{a}{b}{}
// {abc}{abd}{abe}{acd}{ace}{ade}{bcd}{bce}{bde}{cde}
// 345 245 235 234 145 135 134 125 124 123 
// abc acb bac bca cab cba 
