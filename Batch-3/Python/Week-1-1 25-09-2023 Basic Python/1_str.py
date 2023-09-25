#string is immutable
a ="Hello"
# a[0] = "G"
print(a)
"""  
Capitalize() | upper() | lower() | casefold() | count() | find() | replace() | module

"""

#==========================================
b="phittron"
print("capitalize:",b.capitalize())
print("Upper Case: " + b.upper())
print("Lower Case: " + b.lower())
print("Lower Case: " + b.casefold())
print(b.count('t'))

#========================================
text = "Hello, World!"
new_text = text.replace("World", "Python")
print(new_text)  # Output: "Hello, Python!"


#========================================
text = "Hello, World!"
substring = "World"

index = text.find(substring)

if index != -1:
    print(f"The substring '{substring}' was found at index {index}.")
else:
    print(f"The substring '{substring}' was not found in the string.")

#=========================================collection module
from collections import Counter as ctr

print(ctr(text))
#======================================




