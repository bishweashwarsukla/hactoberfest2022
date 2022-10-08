import operator
import sys

ops = {'+': operator.add, 
       '-': operator.sub,
       '*': operator.pow,
       '/': operator.floordiv}



def calc2():
    while True:
        try:
            a = int(input("What is your first number? "))
        except ValueError:
            print("Please, enter a valid integer")
            continue
        else:
            print(f'Your first number is: {a}')
            break

    op = input("Please input your operator")

    if not op in ops:
        print('it not a valid operator')
        sys.exit(1)

    while True:
        try:
            b = int(input("What is your second number? "))
        except ValueError:
            print("Please, enter a valid integer")
            continue
        else:
            print(f'Your second number is: {b}')
            break

    if(op=='/' and b==0):
        print("YOU CAN'T DIVIDE BY ZERO!!!")
    
        while True:
            try:
                b = int(input("What is your second number? "))
            except ValueError:
                print("Please, enter a valid integer")
                continue
            else:
                print(f'Your second number is: {b}')
                break
        print("The answer is", ops[op](a,b))
    else:
        print("The answer is", ops[op](a,b))

def calc3():
    while True:
        try:
            a = int(input("What is your first number? "))
        except ValueError:
            print("Please, enter a valid integer")
            continue
        else:
            print(f'Your first number is: {a}')
            break

    op = input("Please input your first operator")

    if not op in ops:
        print('it not a valid operator')
        sys.exit(1)


    while True:
        try:
            b = int(input("What is your second number? "))
        except ValueError:
            print("Please, enter a valid integer")
            continue
        else:
            print(f'Your second number is: {b}')
            break

    if(op=='/' and b==0):
        print("YOU CAN'T DIVIDE BY ZERO!!!")
    
        while True:
            try:
                b = int(input("What is your second number? "))
            except ValueError:
                print("Please, enter a valid integer")
                continue
            else:
                print(f'Your second number is: {b}')
                break
        
        op2 = input("Please input your second operator")

        if not op2 in ops:
            print('it not a valid operator')
            sys.exit(1)


        while True:
            try:
                c = int(input("What is your third number? "))
            except ValueError:
                print("Please, enter a valid integer")
                continue
            else:
                print(f'Your third number is: {c}')
                break

        if(op2=='/' and c==0):
            print("YOU CAN'T DIVIDE BY ZERO!!!")
    
            while True:
                try:
                    c = int(input("What is your third number? "))
                except ValueError:
                    print("Please, enter a valid integer")
                    continue
                else:
                    print(f'Your third number is: {c}')
                    break
            
            firt_solve = ops[op](a,b)
            print("The answer is", ops[op2](firt_solve,c))
        else:
            firt_solve = ops[op](a,b)
            print("The answer is", ops[op2](firt_solve,c))
    else:
        op2 = input("Please input your second operator")

        if not op2 in ops:
            print('it not a valid operator')
            sys.exit(1)


        while True:
            try:
                c = int(input("What is your third number? "))
            except ValueError:
                print("Please, enter a valid integer")
                continue
            else:
                print(f'Your third number is: {c}')
                break

        if(op2=='/' and c==0):
            print("YOU CAN'T DIVIDE BY ZERO!!!")
    
            while True:
                try:
                    c = int(input("What is your third number? "))
                except ValueError:
                    print("Please, enter a valid integer")
                    continue
                else:
                    print(f'Your third number is: {c}')
                    break
            
            firt_solve = ops[op](a,b)
            print("The answer is", ops[op2](firt_solve,c))
        else:
            firt_solve = ops[op](a,b)
            print("The answer is", ops[op2](firt_solve,c))


print("Select Caclculation.")
print("1. Calc2")
print("2. Calc3")
while True:
    choice = input("Enter choice(1/2): ")

    if choice in ('1', '2'):

        if choice == '1':
            calc2()

        elif choice == '2':
            calc3()
        
        next_calculation = input("Let's do next calculation? (Yes/No): ")
        if next_calculation == "No":
          break
        elif next_calculation == "no":
            break
        elif next_calculation == "N":
            break
        elif next_calculation == "n":
            break
    
    else:
        print("Invalid Input")