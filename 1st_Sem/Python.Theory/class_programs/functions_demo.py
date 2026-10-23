for i in range(1,4):
    rollnumber=8
    name=''
    sub1_marks=0
    sub2_marks=0                                                                                                                                                           
    sub3_marks=0
    totalmarks=0
    percentage=0
    sum=0

    def StudentsDetails():
        pass
        global sub1_marks,sub2_marks,sub1_marks,name
        name=(input("Enter the Name:"))
        rollnumber=int(input("Enter the Roll Number:"))
        sub1_marks=int(input("Enter the Subject1 Mark:"))     
        sub2_marks=int(input("Enter the Subject2 Mark:"))
        sub3_marks=int(input("Enter the Subject3 Mark:"))
        total_marks=int(input("Enter Total Marks:"))

    def getTotalMarks():
        pass
        global sum
        totalmarks=sub1_marks+sub2_marks+sub3_marks
        print("totalmarks=%d",totalmarks)
            
    def getAverage():
        pass
        global average
        average=totalmarks/3*100
        print("average marks=%f",average)
 
    def findGrade():
        pass
        global percentage
        if(percentage>85):
            print("Double Distinction")
        elif(percentage>75):
            print("Distinction")
        elif(percentage<60 & percentage>75):
            print("First Class")
        elif(percentage<65):
            print("Second Class")
        else:
            print("Double Distinction")

for i in range(1,4):
    StudentsDetails()
    getTotalMarks()
    getAverage()
    findGrade()
    