def remove(list1, pos): 
 newlist = [] 
 for x in range(len(list1)): 
     if x != pos: 
         newlist.append(list1[x])  
 print(*newlist)  
list1 = [4, 5, 6, 7, 8, 9, 1, 2, 3]
print("The following input list : ")
print(list1)
print("\n")
pos = 3
print("After deleting the position 3 : ") 
remove(list1, pos)
