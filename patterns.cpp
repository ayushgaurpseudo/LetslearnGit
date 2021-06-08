#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(){
int i,j,row;
cout<<"enter the row in the  :: ";
cin>>row;
for(i=1;i<=row;i++){
    for(j=1;j<=row;j++){
        if(i==1 ||i == row  || j==1|| j==row){
            cout<<"a";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"\n";
}
for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        if(j==1||j==i||i==row){
            cout<<"b";

        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"\n";
    
}   
for(i=0;i<row;i++){
    for(j=0;j<row;j++){
        if(i+j>=(row-1)){
        cout<<"c ";
    }
    else{
        cout<<" ";
    }
    }

    cout<<"\n";
    cout<<"\n";
}

for(i=0;i<row;i++){
    for(j=0;j<2*row;j++){
        if(j>=row-1-i && j<=row-1+i){
            cout<<"d";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
}
    return 0;
}