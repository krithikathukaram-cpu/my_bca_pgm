/*room_id, customer_name, contact_no, booking_amount, date, GST*/

room_details={}

room_id=int(input("Enter Room_ID:"))
customer_name=input("Enter Customer_Name:")
contact_no=int(input("Enter Contact_number:"))
booking_amount=int(input("Enter Booking_Amount:"))
date=input("Enter Date:")
gst=input("Enter GST:")

room_details["Room ID"]=room_id
room_details["Customer Name"]=customer_name
room_details["Contact_no"]=contact_no
room_details["Booking Amount"]=booking_amount
room_details["Date"]=date
room_details["GST"]=gst

booking_info={
    "room_id"=room_id[i]
    "customer_name"=customer_name[i]
    "contact_no"=contact_no[i]
    "booking_amount"=booking_amount[i]
    "date"=date[i]
    "gst"=gst[i]
}