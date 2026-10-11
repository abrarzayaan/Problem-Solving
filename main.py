a: int = int (input ("enter the input value of a: ")) 
b: int = int (input ("enter the input value of b: "))


if (a <=b):
    for num in range(10):
        if a == num:
            while num < 10:
                if (num == 1):
                    print("one")
                elif(num == 2):
                    print("two")
                elif(num == 3):
                    print("three")
                elif(num == 4):
                    print("four")
                elif(num == 5):
                    print("five")
                elif(num == 6):
                    print("six")
                elif(num == 7):
                    print("seven")
                elif(num == 8):
                    print("eight")
                elif(num == 9):
                    print("nine")
                num += 1
    if(a%2 == 0):
        print("even")
    else:
        print("odd")
    
    if(b%2 == 0):
        print("even")
    else:
        print("odd")
else:
    print("the number of a is must less equal to b")
