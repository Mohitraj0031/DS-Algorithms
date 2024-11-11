
# Problem: Print from N to 1 using Recursion

def rev_Number(i,n):
    if(i < 1): return 
    print(i)
    rev_Number(i-1,n)

if __name__ == "__main__":
    n = int(input("Enter the number \n"))
    rev_Number(n,n)