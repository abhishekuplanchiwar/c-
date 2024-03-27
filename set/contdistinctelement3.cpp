// #include<bits/stdc++.h>
// using namespace std;
// int count(vector<int>&v){
//     int rem,r=0,n;
//     for(int i=0;i<v.size();i++){
//         int n=v[i];
//         while(n>0){
//              rem=n%10;
//              r=r*10+rem;
//              n=n/10;
//         }
//         v.push_back(r);
//     }
//     unordered_set<int>set;
//     for(auto ele:v){
//         set.insert(ele);
//     }
//     return set.size();

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }

//     cout<<count(v);
// }
#include<bits/stdc++.h>
using namespace std;

int countUniqueDigits(vector<int>& v) {
    
    for (int num : v) {
        int r = 0, rem;
        int n = num;
        while (n > 0) {
            rem = n % 10;
            r = r * 10 + rem;
            n = n / 10;
        }
        v.push_back(r);
    }

    unordered_set<int> set;
    for (int ele : v) {
        set.insert(ele);
    }
    return set.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << countUniqueDigits(v);
    return 0;
}
