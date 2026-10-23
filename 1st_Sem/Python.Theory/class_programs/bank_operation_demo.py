#list inside tuple
#tuple:- acc_name, acc_no is '1000', date of birth, PAN_no
#list:- email_id, contact_no, address, current balance
bankDetails = []
n = int(input("Enter number of accounts: "))
for i in range(n):
    acc_name = input("Enter Account Name: ")
    acc_no = int(input("Enter Account Number: "))
    date_of_birth = input("Enter Date of Birth: ")
    pan_no = input("Enter PAN Number: ")
    email = input("Enter Email ID: ")
    contact_no = int(input("Enter Contact Number: "))
    address = input("Enter Address: ")
    current_balance = int(input("Enter Balance: "))
    bankDetails_list = [email, contact_no, address, current_balance]
    bankDetails_tuple = (acc_name, acc_no, date_of_birth, pan_no, bankDetails_list)
    bankDetails.append(bankDetails_tuple)
print("Bank Details:")
for account in bankDetails:
    print(account) 