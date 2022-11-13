// // // #include <iostream>
// // // using namespace std;

// // // int main(){
// // //     int n;
// // //     cin>>n;
    
// // //     int arr[n];
// // //     for(int i;i<n;i++){
// // //         cin>>arr[i];
        
// // //     }
// // //     float negative=0;
// // //     float positive=0;
// // //     float zeroes=0;
// // //     for(int j;j<n;j++){
// // //         if(arr[j]<0){
// // //             negative+=1;
// // //         }if(arr[j]>0){
// // //             positive+=1;
// // //         }if(arr[j]==0){
// // //             zeroes+=1;
// // //         }
// // //     cout<<(positive/n)<<endl;
// // //     cout<<(negative/n)<<endl;
// // //     cout<<(zeroes/n)<<endl;
// // // }
    
// // #include <iostream>
// // using namespace std;

// // // int main(){
// // //     int n;
// // //     cin>>n;
    
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<n;j++){
// // //             if(i+j>=(n-1)){
// // //                 cout<<"#";
// // //             }else{
// // //                 cout<<" ";
// // //             }
             
// // //         }
// // //         cout<<"\n";
// // //     }
// // // }   
    

// // // #include <iostream>
// // // using namespace std;

// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     int arr[n];
// // //     int count=0;
    
// // //     for(int i=0;i<n;i++){
// // //         cin>>arr[i];
        
// // //     }
// // //     int maxLen = arr[0];
// // //     for(int i=0;i<n;i++){
// // //         if(maxLen<arr[i]){
// // //             maxLen=arr[i];
// // //         }
// // //     }
// // //     for(int i=0;i<n;i++){
// // //         if(maxLen==arr[i]){
// // //             count+=1;
// // //         }else{
// // //             continue;
// // //         }
// // //     }
// // //     cout<<count<<endl;
// // //     return 0;
// // // } 



// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int change;
// //     int n;
// //     cin>>n;
    
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //         cout<<endl;
// //     }
// //     for(int i=0;i<n;i++){
// //         change = (arr[i])%5;
// //         int chan = 5 - chan;
// //         if(arr[i]<38){
// //             cout<<arr[i]<<endl;
// //         }if(chan<3){
// //             cout<<arr[i]+chan;
// //         }
        
// //     } 
    
    
// // }


// #include <iostream>
// using namespace std;

// int main(){
//     long arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     long minEle=arr[0];
//     long maxEle=arr[0];
//     long sum=0;
    
//     for(int k=0;k<5;k++){
//         sum+=arr[k];
//     }
    
//     for(int j=0;j<5;j++){
//         // for(int k=0;k<5;k++)
//         if(arr[0]>arr[j]){
//             minEle=arr[j];
//         }
//         if(arr[0]<arr[j]){
//             maxEle=arr[j];
//         }
            
        
//     }
    
//     cout<<abs(sum-maxEle)<<" "<<abs(sum-minEle);
    
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int reverse=0;
//     while(n>0){
//         int lastdigit;
//         lastdigit=n%10;
//         reverse=reverse*10+lastdigit;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    long arr[5];
    sort(arr.begin(),arr.end());
   
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int suMin , suMax =0;
    
    for(int i;i<4;i++){
        suMin=suMin+arr[i];
        suMax=suMax+arr[4-i];
        
    }
    

    
    cout<<suMin<<" "<<suMax;
    return 0;
}