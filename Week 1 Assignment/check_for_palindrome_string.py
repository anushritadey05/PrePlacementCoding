#8. Check if string is palindrome

string=input("Enter a string:")
reversed_string=string[::-1]
if(string==reversed_string):
    print("PALINDROME")
else:
    print("NOT PALINDROME")