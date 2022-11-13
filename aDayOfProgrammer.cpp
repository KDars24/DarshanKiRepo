#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string dayofProgrammer;
    if(n%4==0){
        string year=to_string(n);
        dayofProgrammer="12.09." + year;
    }else{
        string year=to_string(n);
        dayofProgrammer="13.09." + year;
        
    }
    cout<<dayofProgrammer;
    return 0;
}