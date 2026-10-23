my_string='''sachin  KUMAR
sachin@GOOGLE.COM
+91-5489-784-11'''

name=my_string.split('\n')[0]
email=my_string.split('\n')[1]
contactno=my_string.split('\n')[2]

print(name)
print(email)
print(contactno)

print(my_string.lower())
print(my_string.upper())
print(my_string.split())

print('Name:Sachin Kumar')