def maxminposition(A, n):
   minposition = A.index(min(A))
   maxposition = A.index(max(A)) 
   print ("The maximum is at position::", maxposition + 1) 
   print ("The minimum is at position::", minposition + 1)
A=list()
n=int(input("Enter the size of the List ::"))
print("Enter the Element ::")
for i in range(int(n)):
   k=int(input(""))
   A.append(k)
maxminposition(A,n)
