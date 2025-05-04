#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<=1) return false;

    if(n==2) return true;

    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool res = prime(n);
    if(res){
        cout<<"The number "<<n<<" is prime";
    }
    else{
        cout<<"The number "<<n<<" is not prime";
    }

    return 0;
}