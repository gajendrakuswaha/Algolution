#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,3,4,2,6,5,7,6,9,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lar=arr[0]; 

    for(int i=0; i<n; i++){
        if(arr[i] > lar){
            lar = arr[i];
        }
    }

    cout<<lar<<endl;

    return 0;
}