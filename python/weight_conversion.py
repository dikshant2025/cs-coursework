weight = int(input("Weight: "))
unit = input("(l)bs or (k)g: ")
if unit.lower() == "l":
    result = weight * 0.45
    print(f"Your weight is {result} kg") 
else:
    result = weight / 0.45
    print(f"Your weight is {result} lbs") 