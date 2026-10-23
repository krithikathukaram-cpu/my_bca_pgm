balance = 10000

while True:
    print("\n---BANK ACCOUNT MENU---")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Display Account Details")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        amount = int(input("Enter deposit amount: "))

        if amount > 0:
            balance = balance + amount
            print("Amount deposited successfully")
        else:
            print("Amount should be positive")

    elif choice == 2:
        amount = int(input("Enter withdrawal amount: "))

        if amount <= 0:
            print("Amount should be positive")
        elif amount > balance:
            print("Insufficient balance")
        else:
            balance = balance - amount
            print("Amount withdrawn successfully")

    elif choice == 3:
        print("Account Balance =", balance)

    elif choice == 4:
        print("Thank you for using our bank services.")
        break

    else:
        print("Invalid choice")