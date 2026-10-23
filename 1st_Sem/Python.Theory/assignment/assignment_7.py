account_no = int(input("Enter account number: "))
name = input("Enter account holder name: ")
dob = input("Enter date of birth: ")
email = input("Enter email ID: ")
contact = input("Enter contact number: ")
address = input("Enter address: ")
balance = int(input("Enter balance: "))

account = (account_no, name, dob,  [email, contact, address, balance])

print("\nBANK ACCOUNT DETAILS")
print("-" * 45)
print("Account Number\t:", account[0])
print("Holder Name\t:", account[1])
print("Date of Birth\t:", account[2])
print("Email ID\t:", account[3][0])
print("Contact Number\t:", account[3][1])
print("Address\t\t:", account[3][2])
print("Balance\t\t:", account[3][3])

print("\nUpdating balance inside nested list")
amount = int(input("Enter deposit amount: "))
account[3][3] = account[3][3] + amount

print("Updated Balance:", account[3][3])

print("\nTrying to modify tuple element")
try:
    account[1] = "New Name"
except TypeError:
    print("Tuple elements cannot be modified")