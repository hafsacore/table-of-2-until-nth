#include <iostream>

using namespace std;

int main()

{
    int sum=0,a,n;
    
    cout<<"The natural number term:";
    cin>>n;
    
    for(a=1;a<=n;a++){
        
     cout<<"\n"<<a;
    
    sum=sum+a;
    
    }
    
    cout<<"\nThe sum of them is:";
    
    cout<<sum;
    
    return 0;
}