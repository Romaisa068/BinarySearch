// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

bool binarySearch(int arr[4], int n, int t){
    int s =0;
    int e = n;

    int mid = s+ (e-s)/2;

    while(s <= e){
        if(arr[mid] == t){
            return true;
        }
        if(arr[mid] < t ){
            s = mid + 1; 
        }else{
            e = mid-1;
        }
        mid = s+ (e-s)/2;
    }

    return false;
}


main(){

    int a[4] = {1,2,3,4};
    int target = 11;
    if(binarySearch(a,4,target)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present!";
    }
            
}
