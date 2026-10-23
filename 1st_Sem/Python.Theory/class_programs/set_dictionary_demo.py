#collect emplpoyees name,number,company name,salary 
#these are the 4 data shld be kept by the keyboard and display 

employee=set()
employee_details={}

employee_name=input("Enter Employee Name:")
employee_no=input("Enter Employee Number:")
company_name=input("Enter Company Name:")
email_id=input("Enter Email_ID:")
salary=input("Enter Salary:")

employee_details["Employee Name"]=employee_name
employee_details["Employee Number"]=employee_no
employee_details["Company Name"]=company_name
employee_details["Email_ID"]=email_id
employee_details["Salary"]=salary

print("\nCOMPANY DETAILS")
print("-" * 100)
print("Employee Name\tEmployee Name\tEmployee Number\tCompany Name\tEmail_ID\tSalary")
print("-" * 100)

for employee in employee_details:
    for item in employee:
          print(item, end="\t")
    print()

print("-"*75  )

            
