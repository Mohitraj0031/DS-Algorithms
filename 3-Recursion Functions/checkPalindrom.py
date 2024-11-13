#  Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

def isPalindrom(i, s):
      if i >= len(s)/2 :  return True      
      if s[i] != s[len(s)-i-1] : return False
      return isPalindrom(i+1,s)  

if __name__ == "__main__" :
     s = "MADAM"
     print(isPalindrom(0,s))
  
        

