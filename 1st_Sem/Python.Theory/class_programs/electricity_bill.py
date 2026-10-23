power_unit=int(input("Enter the power unit:"))
value=int(input("Enter the value:")) 
status=input("commercial or non-commercial:")
penalty=input("is peak threshold found:")
if status==("commercial"):
 if power_unit<=100:
    total=power_unit*10
 elif power_unit<=100:
    total=power_unit*12
 elif power_unit>=300:
    total=power_unit*152
 else power_unit
  


if status==("non-commercial"):
   if power_unit<100:
      total=power_unit*5
   elif power_unit<=100:
      total=power_unit*6
   else:
      total=power_unit*8
print("total amount", total)

         
   