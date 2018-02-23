print("Enter any 3 numbers:")
a=input()
b=input()
c=input()
if (a>=b) and (a>=c) :
 large = a
elif (b>=a) and (b>=c) :
 large = b
else :
 large = c
print("Largest num=",large)
