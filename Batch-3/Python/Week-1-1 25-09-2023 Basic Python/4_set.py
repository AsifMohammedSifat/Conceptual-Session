""" 
add() || clear() || copy() || pop() || remove() || update() 

"""

#add()
my_set = {1, 2, 3}
my_set.add(4)
print(my_set)

#copy
original_set = {1, 2, 3}
copied_set = original_set.copy()
print(original_set)

#clear
my_set = {1, 2, 3}
my_set.clear()
print(my_set)

#update
my_set = {1, 2, 3}
my_set.update({3, 4, 5})
print(my_set)

#union
set1 = {1, 2, 3}
set2 = {3, 4, 5}
union_set = set1.union(set2)
print(union_set)

