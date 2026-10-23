a=int(input("Enter first number:"))
b=int(input("Enter second number:"))

print("Addition=",a+b)
print("Subtraction=",a-b)
print("Multipilcation=",a*b)

if b==0:
    print("Error:Cannot divide by zero")
else:
    print("Division=",a/b)
    print("Floor division=",a//b)
    print("Modulus=",a%b)
    
print("Power=",a**b)