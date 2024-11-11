

def print_Name( i , n):
    if(i>n): return ;
    print ("raj ") 
    print_Name(i+1,n)


if __name__ == "__main__":
    n = 4
    print_Name(1,n)

# if __name__ == "__main__":
#     # Here, let’s take the value of n to be 4
#     n = 4
#     print_Name(1, n)