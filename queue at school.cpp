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

void qswp(char* arr, int size, int n){
    while(n--){
        for(int i = 0; i < size; i++){
            if(arr[i] == 'B' && arr[i+1] == 'G'){
                swap(arr[i],arr[i+1]);
                i++;
            }
        }
    }
}

int main(){

int n, t;
cin>>n>>t;

char a[n];

for(int i = 0; i < n; i++) cin>>a[i];

qswp(a, n, t);

cout<<endl;

for(int i = 0; i < n; i++) cout<<a[i];


    return 0;
}