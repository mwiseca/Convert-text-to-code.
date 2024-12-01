# Copyright 2023-2024 Mitchell E Wise
# SPDX-License-Identifier: Apache-20

t = ["if(strcmp(", ",", "} else if(strcmp(", '"', ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("]
while True:
    print("//Enter i for if, e for elseif.")
    while True: 
        select = input("//")
        if select != "i" and select != "e":
            print("//Enter i or e only.")
        else:
            break
    if select == "i":
        select = t[0]
    elif select == "e":
        select = t[2]
    print("//Enter a name of first m for main.")
    name = input("//")
    if name == "m":
        break
    print("//Enter a value.")
    value = input("//")
    print("Enter a comparison a for equal b for not equal.")
    while True:
        compare = input("//")
        if compare != "a" and compare != "b":
            print("//Enter a or b only.")
        else:
            break
    if compare == "a":
        compare = t[4]
    elif compare == "b":
        compare = t[5]
    print("//Enter a operator a for and o for or.")
    while True:
        op = input("//")
        if op != "a" and op != "o":
            print("//Enter a or o only.")
        else:
            break
    if op == "a":
        op = t[8]
    elif op == "o":
        op = t[9]
    print("Enter the second name.")
    sname = input("//")
    print("//Enter the second value.")
    svalue = input("//")
    print("//Enter a second comparison a for equal b for not equal")
    while True:
        scompare = input("//")
        if scompare != "a" and scompare != "b":
            print("//Enter a or b only.")
        else:
            break
    if scompare == "a":
        scompare = t[6]
    elif scompare == "b":
        scompare = t[7]
    print("\n\n" + select + name + t[1] + t[3] + value + t[3] + compare + op + t[10] + sname + t[1] + t[3] + svalue + t[3] +  scompare + "\n\n")



