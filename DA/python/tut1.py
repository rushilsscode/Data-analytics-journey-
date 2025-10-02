# Write a program to display a person's name, age, and address in the three different lines

# print('''
# Rushil khare
# 23
# Noida
# ''')

# Write a program to swap two varibales 

a = 23
b = 45
print("a = ",a)
print("b = ",b)

print ("After the swaping")
c=a
a=b
b=c

print("a = ",a)
print("b = ",b)

# Write a program to convert a float into integer

a = 2.4
print(type(a))

a = int(a)
print("after converting the data type")
print(type(a))

# write a program to take details from a student for ID card and then print it in different lines
     
name = input("Enter the name of the student ")
Age = input("Enter the age of the student ")
roll_no = input("Enter the roll_no of the student ")

# print( name + '\n'  Age  + '\n'  roll_no)

print(name + "\n" + str(Age) + "\n" + str(roll_no))
