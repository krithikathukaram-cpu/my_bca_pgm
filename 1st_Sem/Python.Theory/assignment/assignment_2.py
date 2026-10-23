m1=int(input("Enter marks in subject1:"))
m2=int(input("Enter marks in subject2:"))
m3=int(input("Enter marks in subject3:"))

if m1<0 or m1>100 or m2<0 or m2>100 or m3<0 or m3>100:
    print("invaild marks")  #marks must be in range 0-100
else:
    total=m1+m2+m3
    avg=total/3
    percentage=total/3

    print("Total=",total)
    print("avg=",avg)
    print("percentage=",percentage)

    if percentage>=70:
        print("DISTINCTION")
    elif percentage>=60:
        print("FIRST CLASS")
    elif percentage>=40:
        print("SECOND CLASS")
    else:
        print("FAIL")