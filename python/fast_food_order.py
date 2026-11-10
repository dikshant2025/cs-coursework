#Let's make a simple mockup of a program that will accept a customer order at a fast food restaurant.
#Below is a list of all the menu options available. DO NOT change this list.
menu = ["Hamburger", "Cheeseburger", "Double Cheeseburger",
        "Bacon Cheeseburger", "Chicken Sandwich", "Spicy Chicken Sandwich",
        "Chicken Tenders (3pc)", "Chicken Tenders (5pc)", "Chicken Nuggets (6pc)",
        "Chicken Nuggets (12pc)", "Garden Salad", "Beyond Burger",
        "Lettuce Wraps", "Ice Cream", "Milkshake"]

#Create an enumerated for loop that will iterate over menu. (5)
    #Print the menu item number (index+1) followed by its name. (5)
for i,j in enumerate(menu,start=1):
    print(f"{i}.{j}")

order = ""#Create an empty string called order. (5)

#Obviously, we're going to want to allow the customer to select multiple items.
#When taking input from a user repeatedly, it's best to use a do-while loop.
#Since Python doesn't have one, we'll have to simulate it using a "while True" loop and break statement.
while True:
    #Prompt the user for integer input. (5)
    #Input should either be one of the above menu item numbers or 0 to exit.
    selection = int(input("Enter your order from one of the above menu item numbers or enter 0 to exit: "))
    #If selection is zero: break. (5)
    if selection == 0:
        break
    #Otherwise: (5)
    else:
        #If selection is greater than zero AND less than or equal to the length of menu: (5)
        if 0 < selection <= len(menu):
            #Add the menu item name (selection-1) to order. Make sure each item in order is on its own line. (5)
            order += menu[selection-1] + "\n"
        #Otherwise: (5)
        else:
            #Print an error message stating that this selection is not valid. (5)
            print("The selection is invalid")
print("Your order is displayed below:")
print(order)
