# print("hello there")

# reversing a list

# myList=[1,2,3,4,5]
# reversedList=myList[::-1]
# print(reversedList)

# append method
myList = [1, 2, 3]
# myList.append(4)

# pop method
# myList.pop()

# insert method
# myList.insert(0,0)

# extend method
# list2=[4,5,6]
# myList.extend(list2)

# copying list
# copyList=myList.copy()
# print(copyList)

# print(myList)

# x=10
# x+= x+3
# print(x)

# answer = input("do you like python? (yes/no)")
# if answer.lower() == "yes":
#     print("you are brilliant")
# else:
#     print("you're bad")

# my_range = range(1, 10)
# print(my_range)

# from tkinter import *


# def change_color():
#     canvas.itemconfig(rect, fill="blue")  # Change the fill color of the rectangle
#     canvas.itemconfig(text, text="Updated Text")  # Change the text


# root = Tk()

# canvas = Canvas(root, width=200, height=200)
# canvas.pack()

# # Create a rectangle and some text
# rect = canvas.create_rectangle(50, 50, 150, 150, fill="red")
# text = canvas.create_text(100, 100, text="Original Text")

# # Button to trigger reconfiguration
# button = Button(root, text="Change", command=change_color)
# button.pack()

# root.mainloop()

# from tkinter import messagebox

# messagebox.showinfo("Information", "This is an info message")

# from tkinter import messagebox

# messagebox.showwarning("Warning", "This is a warning message")

# from tkinter import messagebox

# messagebox.showerror("Error", "This is an error message")

# from tkinter import messagebox

# response = messagebox.askquestion("Question", "Do you want to proceed?")

# from tkinter import messagebox

# response = messagebox.askokcancel("Confirmation", "Do you want to continue?")

# from tkinter import messagebox

# response = messagebox.askyesno("Question", "Do you agree?")

# from tkinter import messagebox

# response = messagebox.askretrycancel("Retry", "Do you want to try again?")


# from tkinter import *

# # Create the main window
# root = Tk()
# root.title("Radio Button Example")


# # Define a function to handle radio button selection
# def selection():
#     selection = var.get()
#     label.config(text="You selected the option: " + selection)


# # Create a StringVar to store the selected value
# var = StringVar()

# # Create the radio buttons with different text and variable assignment
# radio_button1 = Radiobutton(
#     root, text="Option 1", variable=var, value="1", command=selection
# )
# radio_button2 = Radiobutton(
#     root, text="Option 2", variable=var, value="2", command=selection
# )

# # Pack the radio buttons
# radio_button1.pack()
# radio_button2.pack()

# # Create a label to display the selection
# label = Label(root, text="Select an option")
# label.pack()

# # Start the main event loop
# root.mainloop()

# from tkinter import *


# # Function to update label text with selected color
# def update_color():
#     update_color = color_var.get()
#     label.config(text="Selected Color: " + update_color)


# # Main window
# root = Tk()
# root.title("Color Selector")

# # StringVar to hold the selected color
# color_var = StringVar()

# # Radio buttons for red, blue, and green
# red_button = Radiobutton(
#     root, text="Red", variable=color_var, value="Red", command=update_color
# )
# blue_button = Radiobutton(
#     root, text="Blue", variable=color_var, value="Blue", command=update_color
# )
# green_button = Radiobutton(
#     root, text="Green", variable=color_var, value="Green", command=update_color
# )

# # Pack the radio buttons
# red_button.pack()
# blue_button.pack()
# green_button.pack()

# # Label to display the selected color
# label = Label(root, text="Select a Color")
# label.pack()

# # Start the event loop
# root.mainloop()


# from tkinter import *


# def on_select(event):
#     selected_item = listbox.get(listbox.curselection())
#     label.config(text=f"Selected: {selected_item}")


# root = Tk()
# root.title("Listbox Example")

# # Create a Listbox
# listbox = Listbox(root)
# listbox.pack()

# # Add items to the Listbox
# for item in ["Apple", "Banana", "Orange", "Grape", "Pineapple"]:
#     listbox.insert(END, item)

# # Bind the event to handle item selection
# listbox.bind("<<ListboxSelect>>", on_select)

# # Label to display the selected item
# label = Label(root, text="Selected: ")
# label.pack()
# root.mainloop()


# Writing data to a file
# with open("example.txt", "w") as file:
#     file.write("Hello, world!")
