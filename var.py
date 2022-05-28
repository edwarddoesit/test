#Variable rules
#Legal variable names:
myvar = "John"
my_var = "John"
_my_var = "John"
myVar = "John"
MYVAR = "John"
myvar2 = "John"
#Illegal variable names:
"""
2myvar = "John"
my-var = "John"
my var = "John"
"""
#Variables are case sensitive

x, y, z = "Orange", "Banana", "Cherry"
print(x, y, z)
x = y = z = "Orange"
print(x, y, z)

#Unpacking collection list
fruits = ["apple", "banana", "cherry"]
x, y, z = fruits
print(x)
print(y)
print(z)

x = "Python is awesome"
print(x)

x = "Python"
y = "is"
z = "awesome"
print(x,y,z)#with spaces
print(x + y + z)#shows without spaces

x = 5
y = 10
print(x + y)

y = "John"
print(x, y)

x = "awesome"

def myfunc():
    print("Python is " + x)

myfunc()

def myfunc():
    x = "fantastic"
    print("Python is " + x)

myfunc()

print("Python is " + x)

def myfunc():
    global x
    x = "fantastic"

    myfunc()

    print("Python is " + x)

    x = "awesome"

def myfunc():
  global x
  x = "dope"

myfunc()

print("Python is really " + x)