n = int(input("Enter a number:"))
fact=1
if n==0:
 print("Factorial=1")
elif n>0:
 for x in range(1,n+1):
  fact=fact*x
 print(fact)
