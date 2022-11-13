#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int reverse;
    while(n>0){
        int lastdigit;
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;

        }
        return reverse;
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int count=0;
    int reverse=0;
    
    for(int i=n;i<=m;i++){
        
        if(abs(rev(i)-i)%k==0){
            count+=1;
        }
        
        
    }
    cout<<count;
}