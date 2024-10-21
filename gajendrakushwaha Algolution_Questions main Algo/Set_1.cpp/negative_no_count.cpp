#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,1,3,5,4,06,8,4,7,9};
    int count = 0;
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}