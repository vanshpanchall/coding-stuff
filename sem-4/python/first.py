# print('hello world');
# print('hello');

# i=16
# print(f"the value is {i}")

# for i in range(1,11):
#     print(i)

# i=1
# while (i<=100):
#   print(i)
#   i=i+1

# myList=[1,2,3,4,5]
# reverseList=myList[::-1]
# print(reverseList)

# area of circle
# radius=5
# area=3.14*radius**2
# print("area of the circle:",area)

# perimeter of rectangle
# length = 5
# width = 10
# perimeter = 2 * (length + width)
# print("perimeter of the rectangle:", perimeter)

# simple calc
# num1 = float(input("Enter first number: "))
# operator = input("Enter operator (+,-,/,*): ")
# num2 = float(input("Enter second number: "))
# if operator == "+":
#     result = num1 + num2
# elif operator == "-":
#     result = num1 - num2
# elif operator == "/":
#     if num2 != 0:
#         result = num1 / num2
#     else:
#         print("Error! Division by zero.")
# elif operator == "*":
#     result = num1 * num2
# else:
#     print("Invalid Operator")

# print(result)

# enumerate func
# colors=["red", "green", "blue"]
# for index, color in enumerate(colors):
#     print(index,color)

# text = "Silver Oak University"
# for char in text:
#     if char not in ["e", "s"]:
#         print(char, end="")

# i = 1
# for i in range(5):
#     print(i)

# for i in range(1, 11, 2):
#     print(i)


# def isPrime(num):
#     if num <= 1:
#         return False
#     for i in range(2, int(num**0.5) + 1):
#         if num % i == 0:
#             return False
#     return True

# print(isPrime(17))


# def isPalindrome(num):
#     return str(num) == str(num)[::-1]

# print(isPalindrome(2))


# def factorial():
#     factorials = {}
#     fact = 1
#     for i in range(1, 11):
#         fact *= i
#         factorials[i] = fact
#     return factorials
# print(factorial())

class Animal:
    def sound(self):
        return "Generic Sound"
class Dog(Animal):
    def sound(self):
        return "Woof"
dog=Dog()
print(dog.sound())
