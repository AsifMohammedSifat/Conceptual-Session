""" 
append() || clear() || copy() || count() || insert() || pop() || remove() || sort() || reverse()

"""
#append (only one argument must)
a = []
a.append(5)
a.append('a')
print(a) # [5, 'a']

#clear
print("before clear",a) #before clear [5, 'a']
print(a.clear())
print("after clear",a) #after clear []

#copy

a = ['a','b']
b = a.copy()
c = a[::-1] #shortcut
print(b,c)


#count
my_list = [1, 2, 2, 3, 4, 2]
count = my_list.count(2)
print(count)  # Output: 3


#insert (expected two argument must)
my_list = [1, 2, 3, 4]
my_list.insert(2, 5)  # Insert 5 at index 2
print(my_list)  # Output: [1, 2, 5, 3, 4]

#pop
my_list = [1,2,3,4]
popped_element = my_list.pop(1)  # Remove and return element at index 1 (2)
popped_element_w = my_list.pop()  # Remove and return element last index
print(popped_element)  # Output: 2
print(popped_element_w)  # Output: 4
print(my_list) #[1, 3]

#reverse
my_list = [1, 2, 3, 4]
my_list.reverse()
print(my_list)  # Output: [4, 3, 2, 1]

print(my_list[::-1]) #shortcut to reverse a list

#sort
my_list = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
my_list.sort()
print(my_list)  # Output: [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9]



