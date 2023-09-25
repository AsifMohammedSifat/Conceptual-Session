""" 
clear() || copy() || keys() || values() || items() || pop() || fromkeys() || get()
"""

#clear()
my_dict = {"name": "Alice", "age": 30}
my_dict.clear()
print(my_dict)

#copy
original_dict = {"name": "Alice", "age": 30}
copied_dict = original_dict.copy()
print(copied_dict)

#keys
my_dict = {"name": "Alice", "age": 30}
keys = my_dict.keys()
for key in keys:
    print(key)

#values
my_dict = {"name": "Alice", "age": 30}
values = my_dict.values()
for val in values:
    print(val)

#items
my_dict = {"name": "Alice", "age": 30}
items = my_dict.items()

for p in items:
    for val in p:
        print(val)