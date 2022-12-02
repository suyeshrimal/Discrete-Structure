#include<iostream>
using namespace std;
int main(){
    int a[50],b[50],s1,s2,i,j;
    cout<<"Enter number of elements in Set 1\n";
    cin>>s1;
    cout<<"Enter number of elements in Set 2\n";
    cin>>s2;
    cout<<"Enter elements of Set 1";
    for(i=0;i<s1;i++){
        cin>>a[i];
    }
    cout<<"Enter elements of Set 2";
    for(i=0;i<s2;i++){
        cin>>b[i];
    }
    cout<<"Cartesian set= ";
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            cout<<"("<<a[i]<<","<<b[j]<<")";
        }
    }


}