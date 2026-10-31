#room_id, customer_name, contact_no, booking_amount, date, GST

def calculate_gst(room_price):
    # Returns 18% GST of the room price
    return 0.18 * room_price

def get_room_details():
    bookings = {}
    
    # Ask how many rooms to input so the loop knows when to stop
    num_rooms = int(input("How many room bookings do you want to enter? "))
    
    for _ in range(num_rooms):
        print("\n--- Enter Room Details ---")
        room_no = int(input("Enter Room Number: "))
        customer_name = input("Enter Customer Name: ")
        contact_no = int(input("Enter Contact Number: "))
        booking_amount = float(input("Enter Booking Amount: "))
        date = input("Enter Date (DD-MM-YYYY): ")
        
        gst = calculate_gst(booking_amount)
        
        # Using room_no as the key for the main bookings dictionary
        bookings[room_no] = {
            "customer_name": customer_name,
            "contact_no": contact_no,
            "booking_amount": booking_amount,
            "date": date,
            "gst": gst,
        }
    return bookings

def display_booking(bookings):
    print("\n================ BOOKING DETAILS ================")
    for room, info in bookings.items():
        print(f"Room No: {room}")
        print(f"  Customer: {info['customer_name']}")
        print(f"  Contact: {info['contact_no']}")
        print(f"  Date: {info['date']}")
        print(f"  Base Amount: ₹{info['booking_amount']:.2f}")
        print(f"  GST (18%): ₹{info['gst']:.2f}")
        print("-" * 49)

def get_total_room_price(bookings):
    total = 0
    for info in bookings.values():
        total += info["booking_amount"]
    return total

def get_total_gst(bookings):
    total = 0
    for info in bookings.values():
        total += info["gst"]
    return total

# --- Main Program Execution ---
# 1. Collect all booking data
booking_info = get_room_details()

# 2. Display the formatted summary dashboard
display_booking(booking_info)

# 3. Calculate and display totals
total_room_price = get_total_room_price(booking_info)
total_gst = get_total_gst(booking_info)

print(f"Total Room Price (Base): ₹{total_room_price:.2f}")
print(f"Total GST (18%): ₹{total_gst:.2f}")
print(f"Grand Total: ₹{(total_room_price + total_gst):.2f}")