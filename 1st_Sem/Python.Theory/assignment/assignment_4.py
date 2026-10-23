raw_data = """
      naveen     KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

# remove empty lines and extra spaces
data = []
for line in raw_data.split("\n"):
    line = line.strip()
    if line != "":
        data.append(line)

name = data[0]
email = data[1]
phone = data[2]

# make each word of the name start with a capital letter
full_name = ""
for word in name.split():
    full_name = full_name + word[0].upper() + word[1:].lower() + " "
full_name = full_name.strip()

# take first letter of each word for initials
initials = ""
for word in full_name.split():
    initials = initials + word[0]

# email in lower case
email = email.lower()

# domain is the part after @
pos = email.index("@")
domain = email[pos + 1:]

# remove - from phone number
new_phone = ""
for ch in phone:
    if ch != "-":
        new_phone = new_phone + ch

# hide all digits except last
masked = ""
for i in range(len(new_phone) - 4):
    masked = masked + "*"
masked = masked + new_phone[-4:]

valid = False
if email.count("@") == 1 and "." in domain and len(new_phone) >= 10:
    valid = True

print("Name     :", full_name)
print("Initials :", initials)
print("Email    :", email)
print("Domain   :", domain)
print("Phone    :", masked)
print("Valid    :", valid)