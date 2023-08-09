#include<iostream>

using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
            long a,b,c;
        cin>>a>>b>>c;
    if(a==b+c || b==a+c || c==a+b){
        cout<<"YES" <<endl;
    }
    else if((a==b && c%2==0)||(b==c && a%2==0)||(c==a && b%2==0)){

         cout<<"YES" <<endl;
    }
        else{
           cout<< "NO" <<endl;
        }




}
}
