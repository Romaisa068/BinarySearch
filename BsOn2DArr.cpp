#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int n,int m, int t){
    int s =0;
    int e = (n*m)-1;

    int mid = s+ (e-s)/2;

    while(s <= e){
        int rowIndex = mid / m;
        int colIndex = mid % m;
        cout<<rowIndex<<" "<<colIndex<<endl;
        if(arr[rowIndex][colIndex] == t){
            return true;
        }
        if(arr[rowIndex][colIndex] < t ){
            s = mid + 1; 
        }else{
            e = mid-1;
        }
        mid = s+ (e-s)/2;
    }

    return false;
}

bool binSearII(int arr[][4], int n,int m, int t){
    int row = 0;
    int col = m-1;
    while(row < n && col >=0){
        int element = arr[row][col];
        if(element == t){
            return true;
        }
        if(element < t){
            row++;
        }else{
            col--;
        }
    }
    return false;
}

main(){

    int a[3][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12}};
    int target = 11;
//  cout<<binarySearch(a,3,4,target);
    int b[3][4] = {{1,4,7,11},
                   {2,5,8,12},
                   {3,6,9,16}};
    int t = 9;  
    if(binSearII(b,3,4,t)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present!";
    }           
}