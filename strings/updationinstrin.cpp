#include<iostream>
using namespace std;
int main(){
//   string str="abcde";
//   cout<<str<<endl;
//   str[1]='l';
//    cout<<str<<endl;
       //string are mutable can we change
        string str="abcde";
         cout<<str<<endl;
         for(int i=0;i<str.length();i++){
            if(i%2==0){
                str[i]='a';
                cout<<str[i];


            }
         }


}