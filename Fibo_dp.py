import numpy as np

#initializing our recursive memo function
def Fibonacci(n, dp): 
    #Exit Condition
    if n<2:
        dp[n] = 1
        return 1
    #else
    if(dp[n]!= 0): 
        return dp[n]
        #else    
    dp[n] = Fibonacci(n-1, dp)+Fibonacci(n-2, dp) 
    return dp[n]


#initializing our memo table
dp = np.zeros((50), dtype = "int32")

#Reading our n-th index needed
N = int(input()) -1

print(Fibonacci(N, dp)) 
