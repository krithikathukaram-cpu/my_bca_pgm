list_marks=['Sinchu',89,68,87,58,94]    #declares an list "marks" to store marks of 'Sinchu'
my_mark=[] 
sum=0
#dynamic initialization   
for number in range(5):
    newMark=int(input("Enter the marks:"))
    my_mark.append(newMark)   
      
print("List elements are:")
for i in range(len(my_mark)):
    print("")

for i in range(len(my_mark)): 
    sum+=my_mark[i]