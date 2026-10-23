def get_price(item):
    if item == "burger":
        return 120
    elif item == "pizza":
        return 250
    elif item == "pasta":
        return 180
    elif item == "coffee":
        return 60
    else:
        return 0

def item_cost(item, qty):
    price = get_price(item)
    cost = price * qty
    return cost

def calculate_gst(amount, rate=0.05):
    gst = amount * rate
    return gst

def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100
    after_discount = subtotal - discount
    gst = calculate_gst(after_discount)
    total = after_discount + gst
    return discount, gst, total

def split_bill(total, people):
    each = int(total // people)
    left = int(total - each * people)
    return each, left

#main prgrm
print("Menu: burger 120, pizza 250, pasta 180, coffee 60")

n = int(input("How many items do you want to order? "))

subtotal = 0
for i in range(n):
    item = input("Enter item name: ").lower()
    qty = int(input("Enter quantity: "))
    cost = item_cost(item, qty)
    if cost == 0:
        print("Item not on the menu")
    else:
        subtotal = subtotal + cost

discount = int(input("Enter discount percent (0 if none): "))
people = int(input("Enter number of people: "))

discount, gst, total = generate_bill(subtotal, discount)
each, left = split_bill(total, people)

print("\n----- BILL -----")
print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each person pays :", each)
print("Rupees left over :", left)  