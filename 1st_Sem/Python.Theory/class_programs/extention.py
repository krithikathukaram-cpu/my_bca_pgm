#single students data
#name, roll no, phone no, email, 5 subject mark and subject total
#must be implenment using nested list
#same modulu little bit changes later in 'n' no of students
#use function OR methods and identified

name = input("Enter Name: ")
roll_no = int(input("Enter Roll Number: "))
num = input("Enter Phone Number: ")
email = input("Enter Email: ")

list_marks = []

for i in range(5):
    mark = int(input("Enter Subject Mark: "))
    list_marks.append(mark)

total = sum(list_marks)

student = [[name, roll_no, num, email, list_marks, total]]
print("===Student Details===")  
print("Name:", student[0][0])
print("Roll Number:", student[0][1])
print("Phone Number:", student[0][2])
print("Email:", student[0][3])
print("Subject Marks:", student[0][4])
print("Total Marks:", student[0][5])

