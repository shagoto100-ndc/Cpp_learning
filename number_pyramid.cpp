#include<iostream>
using namespace std;
int main(){
    int a,i,j,k,l;
    cout<<"Enter your number: ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=a-1;j>=i;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        if(i>>1){
        for(l=i-1;l>=1;l--){
            cout<<l;
        }}
       
        cout<<endl;
    }
    return 0;

} 