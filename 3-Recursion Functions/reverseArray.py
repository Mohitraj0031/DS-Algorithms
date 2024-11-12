# Problem Statement: You are given an array. The task is to reverse the array and print it. 

def reverse_Array(n,b,a):
    if(n<1):
        print(a)
        return
    
    for i in range (1,n):
        b = [i]
        if(i == n):
             a = [b[i]]
    reverse_Array()