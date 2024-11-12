
#Problem Statement: Given a number X,  print its factorial.

def fact_Number(n):

    # if(i<1): 
    #    print(fact)
    #    return
    
    # fact_Number(i-1,fact*i)  

    if(n == 0 ):
         return 1
    
    return n * fact_Number(n-1)

n= int(input("Enter the number: "))
print(fact_Number(n))