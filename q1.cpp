#include <iostream>
using namespace std;

int find(int arr[], int n){
   
   int smallest = arr[0];
   for (int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
   cout<<"The smallest element is "<< smallest;
   
   int second_smallest = arr[0];
   for (int i=0; i<n; i++){
        if((arr[i]!=smallest) && (arr[i]<second_smallest)){
            second_smallest=arr[i];
        }
    }
   cout<<" and the second smallest element is "<< second_smallest << endl;
   
   return 0;
}

int main(){
    int arr[]={45, 65, 21, 10, 5, 91};
    int n=sizeof(arr)/sizeof(arr[0]); 
    find(arr, n);
}