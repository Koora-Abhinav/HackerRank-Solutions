#include <bits/stdc++.h>
using namespace std;

//Recursive approach
int bin_search(int arr[], int l, int r, int x){
    if(r >= l){
        int mid = (l+r)/2;

        if(arr[mid] == x)
            return mid; 

        if(arr[mid] < x){
            return bin_search(arr, mid+1, r, x);
        }   

        return bin_search(arr, l, mid+1, x);
    }

    return -1;
}


//iterative approach 
int bin_search_iter(int arr[], int l, int r, int x){
    int mid;
    while(r >= l){
        mid = (l+r)/2;
        
        if(arr[mid] == x)
            return mid;

        if(arr[mid] > x)
            r = mid-1;
        
        else{
            l = mid+1;
        }

    }
    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    for(int i=1; i<6; i++)
        cout << bin_search_iter(arr, 0, 5, i) << endl;

    return 0;
}