# Problem Statement: You are given an array. The task is to reverse the array and print it. 

def print_Array(i,arr,n):
    if(i>= n/2): return
    arr[i],arr[n-i-1] = arr[n-i-1],arr[i]
    print_Array(i+1,arr,n)

if __name__ == "__main__":
     arr = [1,4,5,6,8]
     n = len(arr) 
     print("This is an array:- ")
     for x in range (n):
          print(arr[x],end=" ")
     
     print("\n This is reverse of array:- ")

     print_Array(0,arr,n)
     for x in range (n):
         print(arr[x],end=" ")
     print()


     

# recursive approch

# def print_Array(arr,n):
#      print ("The reversed array is ")
#      for i in range (n):
#          print(arr[i], end=" ") 
#      print()



# def reverse_Array(arr,start,end):
#     if start<end :
#        arr[start],arr[end] = arr[end], arr[start]
#        reverse_Array(arr,start + 1,end - 1)


# if __name__  == "__main__":
#      arr = [7,5,4,3,2]
#      n = len(arr)
#      reverse_Array(arr,0,n-1)
#      print_Array(arr,n)
