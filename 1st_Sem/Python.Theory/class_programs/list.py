n = int(input("Enter number of students: "))

student_list = []

for i in range(n):
    print("\nEnter details of student", i + 1)

    name = input("Enter the name: ")
    roll_no = int(input("Enter roll number: "))
    email = input("Enter email id: ")

    mark1 = int(input("Enter the mark 1: "))
    mark2 = int(input("Enter the mark 2: "))
    mark3 = int(input("Enter the mark 3: "))
    mark4 = int(input("Enter the mark 4: "))
    mark5 = int(input("Enter the mark 5: "))

    student_data = [name, roll_no, email, [student_list,totalmarks]]
    student_list.append(student_data)

    totalmarks=sum(student_list)

print("\n--------- STUDENT DETAILS ---------")
print("Name\tRoll No\tEmail ID\t\tMarks\t\tTotalMarks")

for student in student_list:
 print(student[0], "\t", student[1], "\t", student[2], "\t",student[3], "\t", student[4], "\t", student[5])