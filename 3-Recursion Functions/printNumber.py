# Problem: Print from 1 to N using Recursion

def print_Number(i,n):
      if(i>n): return 

      print( i)
      print_Number(i+1,n)

if __name__ == "__main__":
      n = int(input("enter the number \n"))
      print_Number(1,n)