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

int main(){

int n;
cin>>n;

int a[n], pos[n];
for(int i = 0; i < n; i++) cin>>a[i];


    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(a[i] < a[j]){
                count++;
            }
        }
        pos[i] = count+1;
       // cout<<count+1<<endl;

    }

cout<<endl;

for(int i = 0; i < n; i++) cout<<pos[i]<<endl;

    return 0;
}