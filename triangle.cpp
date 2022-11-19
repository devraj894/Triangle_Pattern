#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    
    for(int i=0; i<=n; i++){  // Row
        for(int j=n; j>=i; j--){ //Space
            cout<<" ";
        }
        for(int k=0; k<=i; k++){ //column
        cout<<"* ";
        }
        cout<<endl;  
    }
    return 0;
}