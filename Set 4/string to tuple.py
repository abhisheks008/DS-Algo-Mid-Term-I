test_str = "10, 20, -30, 40, 50" 
print("\nThe original string : " + str(test_str))  
res = tuple(map(int, test_str.split(', ')))
print("Tuple after getting conversion from String : " + str(res))
print("\n")
