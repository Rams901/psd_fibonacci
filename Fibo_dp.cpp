#include <bits/stdc++.h> 
using namespace std; 


//Global Memoization table so we can access it inside our function
int dp[50]; 


//Caculating the n-th Fibonacci Number using our memo-recursive function
int fibonacci(int n){
    //Exit condition
    if(n==1 || n==2){
        dp[n] = 1 ; 
        return 1 ; 
    }
    //else
        if(dp[n]!=0) return dp[n]; 
        //else
        dp[n] = fibonacci(n-1) + fibonacci(n-2) ; 
        return dp[n] ; 
}

int main(){

    // Initializing our dp table
    for (int i = 0; i < 50; i++)
    {
        dp[i] = 0 ; 
    }
    
    int N; 
    cin>>N ; 
    
    cout<<fibonacci(N) ; 
    return 0;
}