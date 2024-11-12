
def sum_Number(i,sum):

    if(i<1): 
         print(sum)
         return
    
    sum_Number(i-1,sum+i)

    
n = int(input("Enter the number: "))
sum_Number(n,0)

