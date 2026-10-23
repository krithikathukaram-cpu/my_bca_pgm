name1=input('Add Your Name...')
firstnumber=int(input('Enter English Marks'))
secondnumber=int(input('Enter Maths Mark'))
thirdnumber=int(input('Enter Python Mark'))
total1=firstnumber+secondnumber+thirdnumber
print(f"total:{total1}")
avg1=total1/300*100
print(f"avg:{avg1:.2f}")
print('---------------------')
name2=input('Enter Firstn Student details...')
firstnumber1=int(input('Enter English Marks'))
secondnumber2=int(input('Enter Maths Mark'))
thirdnumber3=int(input('Enter Python Mark'))
total2=firstnumber+secondnumber+thirdnumber
print(f"total:{total2}")
avg2=total2/300*100
print(f"avg:{avg2:.2f}%")
print('----------------------')
print(f"NAME\t\t PYTHON\t\tENGLISH\t\tMATHS\t\tTOTAL\t\t%")
print(f"{name1}\t{firstnumber}\t\t{secondnumber}\t\t{thirdnumber}\t\t{total1}\t\t{avg1}")
print(f"{name2}\t\t{firstnumber}\t\t{secondnumber}\t\t{thirdnumber}\t\t{total2}\t\t{avg2}")
