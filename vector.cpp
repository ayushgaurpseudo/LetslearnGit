#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> removeduplicate(int* a, int size){
    vector<int> output;
unordered_map<int, bool> seen;

    for(int i=0;i<size;i++){

if(seen.count(a[i])>0){
continue;
    }
    seen[a[i]]=true;
    output.push_back(a[i]);
    }
    return output;
}

int main()
{
    int a[]={1,2,3,5,3,4,2,5,4,6,2};
    vector<int> output=removeduplicate(a,11);
cout<<"after removing ::"<<endl;;
    for(int i=0;i<output.size();i++){
    
    
    cout<<output[i]<<endl;
    }
    return 0;
}