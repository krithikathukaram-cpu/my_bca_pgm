students_marks = []

for i in range(5):
    student = []
    print("\nEnter details of student", i + 1)

    name = input("Enter student name: ")
    student.append(name)

    for j in range(5):
        mark = int(input("Enter subject " + str(j + 1) + " marks: "))
        student.append(mark)

    total = sum(student[1:6])
    student.append(total)

    students_marks.append(student)

print("\nSTUDENT MARKS DETAILS")
print("-" * 75)
print("Name\tS1\tS2\tS3\tS4\tS5\tTotal")
print("-" * 75)

for student in students_marks:
    for item in student:
        print(item, end="\t")
    print()

print("-"*75  )