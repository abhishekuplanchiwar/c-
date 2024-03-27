#include<iostream>
using namespace std;

    int first(int arr[], int size,int target){
        int s=0;
        int e=arr.size()-1;
        int ans ;

        int mid = s + (e-s)/2;
        while(s<=e){
            if(target == arr[mid]){
               int ans = mid;
                e = mid - 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

    int last(int brr, int size,int target){
        int s = 0;
        int e = brr.size()-1;
        int ans1 = -1;

        int  mid = s + (e-s)/2;
        while(s<=e){
            if(target == arr[mid]){
                ans = mid;
                s = mid + 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans1;
    }

int main(){
    int even[5]={1,1,3,4,5};
   cout<< first(even,5,1);
    
   

}
    