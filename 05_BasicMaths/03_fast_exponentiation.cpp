#include<bits/stdc++.h>
using namespace std;

int fastexpo(int a , int b){
    int ans=1;

    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}

int main(){
    int num=3;
    int sq= 8;
    int ans= fastexpo(num,sq);
    cout<<ans;
    return 0;
    
}