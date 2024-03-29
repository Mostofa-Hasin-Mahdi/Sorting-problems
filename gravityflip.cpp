/*
█▀▄▀█ █▀▀█ █▀▀▄ █▀▀ 　 █▀▀▄ █░░█ 
█░▀░█ █▄▄█ █░░█ █▀▀ 　 █▀▀▄ █▄▄█ 
▀░░░▀ ▀░░▀ ▀▀▀░ ▀▀▀ 　 ▀▀▀░ ▄▄▄█
█▄─█▀▀▀█─▄█─█─█▄─▄█─▄─▄─█▄─▄▄─█░█░██─▄▄▄▄█▄─▄███▄─▄▄─█
██─█─█─█─██─▄─██─████─████─▄█▀█▄▄░██─██▄─██─██▀██─▄█▀█
▀▀▄▄▄▀▄▄▄▀▀▄▀▄▀▄▄▄▀▀▄▄▄▀▀▄▄▄▄▄▀▀▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀
*/

#include <bits/stdc++.h>
using namespace std;

void selectionsort(int* arr, int n){
    
    for(int i = 0; i < n; i++){
    int iMin = i;
    for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[iMin]){
            iMin = j;
        }
    }
    swap(arr[i], arr[iMin]);

    }
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    selectionsort(a, n);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }



    return 0;
}