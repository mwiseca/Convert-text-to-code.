#Copyright 2023-2025 Mitchell E Wise
#SPDX-License-Identifier: Apache-2.0 


print("\n\n//press enter r to repeat choices enter to not.\n\n")
repeat = input("//")


def choice():
    print("//Enter ch for choices.")
    print("//Enter hd for strings hd to hide user input with getpass.")
    print("//Enter aa for arrays ia for numbers C C++")
    print("//Enter a for strings.")
    print("//Enter c for strings with no quotation marks.")
    print("//Enter cy for what's needed to copy and paste to finish a simple program.")
    print("//Enter f for fgets and removal of new line character.")
    print("//Enter fc for void functions C C++.");
    print("//Enter s for scanf for strings.")
    print("//Enter sb for scanf basic no white spaces.")
    print("//Enter si for scanf for integers and doubles.")
    print("//Enter sh for scanf for ints and doubles on the heap.")
    print("//Enter sc for check scanf.")
    print("//Enter h to allocate memory on the heap.")
    print("//Enter hi to allocate int float or double memory on the heap.")
    print("//Enter cm to check malloc.")
    print("//Enter cf to call functions C C++.")
    print("//Enter i for if statement for strings.")
    print("//Enter e for else if statement for strings.")
    print("//Enter mi for if else if statements with 2 conditiions.")
    print("//Enter in for if and  else if statements for numbers C C++.")
    print("//Enter im for if and else if statements for numbers if malloc is used.")
    print("//Enter v for variables without assigning a value.")
    print("//Enter vv for variables with assigning a string value.")
    print("//Enter vi for int and double variables. C C++")
    print("//Enter vn for int and double variables with no value. C C++") 
    print("//Make sure #include <string.h> is used for fgets and if statements for strings.")
    print("//__fpurg(stdin); must have #include <stdio_ext.h> to work.")
    print("//Enter sp for c++ strings.")
    print("//Enter cp for C++ empty strings.")
    print("//Enter aap for C++ string arrays.")
    print("//Enter ip and ep for if and else if statements in C++")
    print("//Enter mip for if else if statements with 2 conditiions C++.")
    print("//Enter up for user input in C++.")
    print("//Enter cbp for a function to clear input buffer C++.")
    print("//Enter mp to start a C++ map with one key value pair.")
    print("//Enter ma for map access C++.")
    print("//Enter vp for string variables no value C++.")
    print("//Enter vvp for string variables with a value c++.");
    print("//Enter cyp for what's needed to copy and paste to finish a simple C++ program.");
    print("//Enter x to exit, m for main ch for choices.")
    return ""


def string():
    t = ['printf("','\\n','");',]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[1] + t[2] + "\n")
        print("\n" + t[0] + t[1] + text + t[1] + t[1] + t[2] + "\n")
        print("\n" + t[0] + text + t[2] + "\n")
        if repeat != "r":
            return ""


def hide_text():
    t = ['printf("','");']
    import getpass
    print("//Enter text m for main.")
    while True:
        text = getpass.getpass("")
        print(t[0] + text + t[1])
        if text == "m":
            return ""


def empty_string():
    t = ["printf(",");"]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[1] + "\n")
        if repeat != "r":
            return ""


def fgets():
    t = ["fgets(",",","stdin);","[strcspn(",'"\\n"',")]=0;","[strlen(", ")-1] = '\\0';"] 
    w = ["while(fgets(", ",", "stdin)){", "[strcspn(","\"\\n", "\")]=0;","[strlen(",")-1] = '\\0';","      "]
    while True:
        print("//Enter name of variable m for main.")
        v= input("//")
        if v == "m":
            return ""
        print("//Enter the memory to be allocated to the variable m for main.")
        ma = input("//")
        if ma == "m":
            return ""
        print("\n" + t[0] + v + t[1] + ma + t[1] + t[2])
        print(v + t[3] +  v  + t[1] +  t[4] + t[5] + "\n")
        print(w[0] + v + w[1] + ma + w[1] + w[2])
        print(w[8] + v + w[3] + v + w[1] + w[4] + w[5] + "\n\n")
        print("\n" + t[0] + v + t[1] + ma + t[1] + t[2])
        print(v + t[6] +v + t[7] + "\n")
        if repeat != "r":
            return ""
    
    
def scanf():
    t = ['scanf("%','[^\\n]",',");","getchar();"]

    while True:
        print("//Enter the name of variable m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter memory allocated to variable -1 byte.")
        mem = input("//")
        print("\n" + t[0] + mem + t[1]  + var  + t[2])
        print(t[3] + "\n")
        if repeat != "r":
            return ""


def scanf_basic():
    while True:
        t = ['scanf("%','s", ',");"]
        print("//Enter the name of variable m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter memory allocated to variable -1 byte.")
        mem = input("//")
        print("\n" + t[0] + mem + t[1]  + var  + t[2] + "\n")
        if repeat != "r":
            return ""


def if_statement():
    t = ["if(strcmp(",",",'"',")==0) {"]
    while True:
        print("//Enter the name of the if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        if value == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")
        if repeat != "r":
            return ""


def elif_statement():
    while True:
        t = ["} else if(strcmp(",",",'"',")==0) {"] 
        print("//Enter The name of else if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        if value == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")
        if repeat != "r":
            return ""

def multi_if():
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
            return ""
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
        if repeat != "r":
            return ""

 
def if_number():
    t = ["if(", "} else if(","strlen"," <= ", " == "," >= "," != ","(",")",") {"]
    while True:
        print("//Enter s for strlen  or i for regular if statement. Enter e for else if.")
        select = input("//")
        if select != "s" and select != "i" and select != "e": 
            print("//Enter s or i or e only.")
            continue
        print("//Enter the name of if or else if statement. Enter m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal")
        while True:
            op = input("//")
        
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
            else:
                break
        if op == "a":
            op = t[3]
        elif op == "b":
            op = t[4]
        elif op == "c":
            op = t[5]
        elif op == "d":
            op = t[6]
        print("//Enter a number to compare to.")
        num = input("//")
        if select == "s":
            print("\n" + t[0] + t[2] + t[7] + var + t[8] + op + num +  t[9] + "\n")
            if repeat != "r":
                return ""
        elif select == "i":
            print("\n" +  t[0] + var + op + num + t[9] +"\n")
            if repeat != "r":
                return ""
        elif select == "e":
            print("\n" + t[1] + var + op + num + t[9] + "\n")
        if repeat != "r":
            return ""


def if_malloc():
    t = ["if(*", "} else if(*"," <= ", " == "," >= "," != ","(",")",") {"]
    while True:
        print("//Enter i for if statement. Enter e for else if.")
        select = input("//")
        if select != "i" and select != "e": 
            print("//Enter i or e only.")
            continue
        print("//Enter the name of if or else if statement. Enter m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal")
        while True:
            op = input("//")
    
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
            else:
                break
        if op == "a":
            op = t[2]
        elif op == "b":
            op = t[3]
        elif op == "c":
            op = t[4]
        elif op == "d":
            op = t[5]
        print("//Enter a number to compare to.")
        num = input("//")
        if select == "i":
            print("\n" +  t[0] + var + op + num + t[8] +"\n")
            if repeat != "r":
                return ""    
        elif select == "e":
            print("\n" + t[1] + var + op + num + t[8] + "\n")
        if repeat != "r":
            return ""


def variable():
    t = ["char "," [","];"]
    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of memory to allocate m for main.")
        mem = input("//")
        if mem == "m":
            return ""
        print("\n" + t[0] + name + t[1] + mem + t[2] + "\n")
        if repeat != "r":
            return ""


def variable_value():
    while True:
        t = ["char ","[","]"," = ",'"',";"]
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of memory to allocate or press enter to not allocate m for main.")
        mem = input("//")
        if mem == "m":
            return ""
        print("//Enter a value.")
        value = input("//")
        print("\n" + t[0] + name + t[1] + mem + t[2] + t[3] + t[4] + value + t[4] + t[5]  + "\n")
        if repeat != "r":
            return ""


def array():
    while True:
        t = ["char "," [","]"," [","] = {","};"]
        print("//Enter a name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of elements.")
        elements = input("//")
        print("//Enter memory allocated to the largest element.")
        m = input("//")
        print("//Enter elements with quotations and commas between each.")
        el = input("//")
        print("\n" + t[0] + name + t[1] + elements + t[2] + t[3] + m + t[4] + el + t[5] + "\n")
        if repeat != "r":
            return ""
        

def num_array():
    a = ["int ","double ", "[","]"," = {","};"]
    while True:
        print("//Enter a data type i for int d for double.")
        while True:
            typ = input("//")
            if typ != "i" and typ != "d":
                print("//Enter i or d only.")
            else:
                break
        if typ == "i":
            typ = a[0]
        elif typ == "d":
            typ = a[1]
        print("//Enter the name of the array m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the number of elements.")
        num = input("//")
        print("//Enter the elements with a comma between them.")
        elements = input("//")
        print(typ + name + a[2] + num + a[3] + a[4] + elements + a[5]) 
        if repeat != "r":
            return ""
       
    
def function():
    t = ["void ","(","){","}"]
    while True:
        print("//Name the function m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter parameters if none just press enter.")
        per = input("//")
        print("\n" + t[0] + name + t[1] + per  + t[2])  
        print(2 *"\n")
        print(t[3] + "\n")
        if repeat != "r":
            return ""
        

def call_function():
    while True:
        t = ["(",");"]
        print("//Enter the function name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter values for parameters if any.")
        per = input("//")
        print("\n" + name + t[0] + per + t[1] + "\n")
        if repeat != "r":
            return ""


def heap():
    t = ["char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free(",");"," = NULL;"]
    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter memory to allocate.")
        mem = input("//")
        print("\n" + t[0] + t[1] + name + t[2] + "\n")
        print(name + t[3] + t[4] + mem + t[5] + "\n")
        print(name + t[3] + t[4] + mem + t[6] + "\n")
        print(t[7] + name + t[8])
        print(name + t[9] + "\n")
        if repeat != "r":
            return ""
        

def heap_numbers():
    t = ["int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"]

    while True:
        print("//Enter the name of the variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter memory to allocate.")
        mem = input("//")
        print("\n")
        print(t[0] + t[1] + name + t[2] + "\n")
        print(t[9] + t[1] + name + t[2] + "\n")
        print(t[10] + t[1] + name + t[2] + "\n")
        print(name + t[3] + t[4] + mem + t[6] + "\n")
        print(name + t[11] + t[4] + mem + t[13] + "\n")
        print(name + t[12] + t[4] + mem + t[14] + "\n")
        print(t[7] + t[4] + name + t[5])
        print(name + t[8] + "\n")
        if repeat != "r":
            return ""


def check_malloc():
    t = ["if("," == NULL){",'    printf("',"\\n",'");',"    exit(1);}"]
    while True:
        print("//Enter the name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter an error message.")
        em = input("//")
        print("\n"+t[0]+name+t[1])
        print(t[2]+em+t[3]+t[4])
        print(t[5]+"\n")
        if repeat != "r":
            return ""


def scan_number():
    t = ['scanf("%d",','scanf("%lf",'," &",");"]
    while True:
        print("//Choose i for int or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0] + t[2] + name  + t[3] + "\n")
        elif ch == "d":
            print("\n" + t[1] + t[2] + name + t[3] + "\n")
        if repeat != "r":
            return ""
        


def scan_heap():
    t = ['scanf("%d",','scanf("%lf",',");",'scanf("%f",']
    while True:
        print("//Choose i for int f for float or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "f" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0]   + name  + t[2] + "\n")
        elif ch == "d":
            print("\n" + t[1]  + name + t[2] + "\n")
        elif ch == "f":
            print("\n" + t[3] + name + t[2] + "\n")
        if repeat != "r":
            return ""
        

def check_scanf():
    t = ['if(scanf("%d",','if(scanf("%lf",'," &",")!=1){",'while(scanf("%d",','while(scanf("%lf",']
    while True:
        print("//Choose i for int or d for double or m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name of variable.")
        name = input("//")
        if ch == "i":
            print("\n" + t[0] + t[2] + name  + t[3] + "\n")
            print(f"\n{t[0]}{name}{t[3]}      //Use with malloc.\n")
            print("\n" + t[4] + t[2] + name  + t[3] + "\n")
            print(f"\n{t[4]}{name}{t[3]}     //Use with malloc.\n")
        elif ch == "d":
            print("\n" + t[1] + t[2] + name + t[3] + "\n")
            print(f"\n{t[1]}{name}{t[3]}    //Use with malloc.\n")
            print("\n" + t[5] + t[2] + name + t[3] + "\n")
            print(f"\n{t[5]}{name}{t[3]}    //Use with malloc.\n") 
        print("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n")
        if repeat != "r":
            return ""


def variable_number():
    t = ["double ","int "," = ", ";", " ;"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name.")
        name = input("//")
        print("//Enter a value.")
        value = input("//")
        if ch == "i":
            print("\n" + t[1] + name + t[2] + value + t[3] + "\n")
            if repeat != "r":
                return "" 
        elif ch == "d":
            print("\n" + t[0] +name + t[2] + value + t[3] + "\n")
        if repeat != "r":
            return ""


def variable_no_value():
    t = ["double ","int ", ";"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            continue
        print("//Enter the name.")
        name = input("//")
        if ch == "i":
            print("\n" + t[1]+name+t[2] + "\n")
        elif ch == "d":
            print("\n" + t[0]+name+t[2] + "\n")
        if repeat != "r":
            return ""


def copy():
    print("\n#include <stdio.h>")
    print("\n")
    print("#include <stdio_ext.h>")
    print("\n")
    print("#include <string.h>")
    print("\n")
    print("#include <stdlib.h>")
    print("\n")
    print("while(1) {")
    print("\n")
    print("break;")
    print("\n")
    print("break;}")
    print("\n")
    print("continue;")
    print("\n")
    print("continue;}")
    print("\n")
    print("int main() {")
    print("\n")
    print("__fpurge(stdin);")
    print("\n")
    print("fflush(stdin);")
    print("\n")
    print("getchar();")
    print("\n")
    print("} else {")
    print("\n")
    print("else {")
    print("\n")
    print("     }")
    print("}")
    print("return 0;")
    print("}")
    print("\n")
    print("//Enter m for main.")
    

def stringg():
    print("// ")
    st = ['std::cout << "', "\\n",'";','"'," << std::endl;"]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print(f"\n{st[0]}{text}{st[1]}{st[2]}\n")
        print(f"\n{st[0]}{st[1]}{text}{st[1]}{st[1]}{st[2]}\n")
        print(f"\n{st[0]}{text}{st[2]}\n")
        print(f"\n{st[0]}{text}{st[3]}{st[4]}\n")
        if repeat != "r":
            return ""


def estring():
    t = ["std::cout << ",  "\\n", "\""," << std::endl;", ";"]
    print("//Enter text m for main");
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[3] + "\n\n")
        if repeat != "r":
            return ""


def arrayCPP():
    t = ["std::string "," [", "] = {","};"]
    while True:
        print("//Enter the name of array m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of elements.")
        ne = input("//")
        print("//Enter elements with quotations and commas between each.")
        elements = input("//")
        print("\n" + t[0] + name + t[1] + ne + t[2] + elements + t[3] + "\n\n")
        if repeat != "r":
            return ""


def ifStatementp():
    f = ["if(", " == ",  '"', ") {"]
    while True:
        print("//Enter name of the if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//") 
        print("\n" + f[0] +  name + f[1] + f[2] + value + f[2] + f[3] + "\n\n")
        if repeat != "r":
            return ""
    
    
def elseifp():
    f = ["} else if(", " == ",  '"', ") {"]
    while True:
        print("//Enter name of the else if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//") 
        print("\n" + f[0] +  name + f[1] + f[2] + value + f[2] + f[3] + "\n\n")
        if repeat != "r":
            return ""

def multiIfCpp():
    t =["if(","} else if("," == ", " != ",'"'," && "," || ",") {"]
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
            select = t[1]
        print("//Enter a name of first m for main.")
        name = input("//")
        if name == "m":
            return ""
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
            compare = t[2]
        elif compare == "b":
            compare = t[3]
        print("//Enter a operator a for and o for or.")
        while True:
            op = input("//")
            if op != "a" and op != "o":
                print("//Enter a or o only.")
            else:
                break
        if op == "a":
            op = t[5]
        elif op == "o":
            op = t[6]
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
            scompare = t[2]
        elif scompare == "b":
            scompare = t[3]
        print("\n\n" + select + name + compare + t[4] + value + t[4] + op + sname + scompare + t[4] + svalue + t[4] + t[7] + "\n\n")
        if repeat != "r":
            return "" 
    
def user_input():
    f = ["std::","getline(","std::cin", ",", ");","std::cin >> ",";","while(",")) {"]  
    while True:
        print("//Enter name of variable m for main.")
        v = input("//")
        if v == "m":
            return ""
        print("\n" + f[1] + f[2] + f[3] + v + f[4] + "\n\n")
        print("\n" + f[0] + f[1] + f[2] + f[3]  + v + f[4] + "\n\n")
        print("\n" + f[7] + f[1] + f[2] + f[3]  + v + f[8] + "\n\n")
        print("\n" + f[5] +  v + f[6]  + "\n\n")
        print("\nstd::cin.clear();")
        print("std::cin.ignore(2000, '\\n');     //Clears input buffer.\n")
        print("\nstd::cin.clear();")
        print("std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');    //Clears entire input buffer\n")
        if repeat != "r":
            return ""

def clear_buff():
    t = ["void ","(","){","}","();"]
    while True:
        print("//Name the function m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2])  
        print("    std::cin.clear();")
        print("    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');") 
        print(t[3] + "\n")
        print(name + t[4] + "\n")
        if repeat != "r":
            return ""

def mapp():
    t = ["std::map","<","std::string","int","double","> ",",", " = {"]
    b = ["    {", "}," , "}", "};", "\"", ","," "]

    while True:
        print("//Enter the name of the map m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a key type, s for string, i for int d for double.")
        key_type = input("//")
        if key_type != "s" and key_type != "i" and key_type != "d":
            print("Enter s i or d only.\n")
            continue
        if key_type == "s":
            key_type = t[2]
        elif key_type == "i":
            key_type = t[3]
        elif key_type == "d":
            key_type = t[4]
        print("//Enter a value type, s for string, i for int d for double.")
        while True:
            value_type = input("//")
            if value_type != "s" and value_type != "i" and value_type != "d":
                print("//Enter s i or d only.")
            else:
                break
        if value_type == "s":
            value_type = t[2]
        elif value_type == "i":
            value_type = t[3]
        elif value_type == "d":
            value_type = t[4]
        print("//Enter a key.\n")
        key = input("//")
        print("//Enter s if key is a string.")
        key_t = input("//")
        print("//Enter a value.")
        value = input("//")
        print("//Enter s if the value is a string.")
        value_t = input("//")
        print("\n" +  t[0] + t[1] + key_type + t[6] + value_type + t[5] + name +  t[7])
        if key_t == "s" and value_t == "s":
            print(b[0] + b[4] + key + b[4] + b[5] + b[6] + b[4] + value + b[4] + b[1])
            print(b[3] + "\n")
        elif key_t != "s" and value_t != "s":
            print(b[0] + key + b[5]  + b[6] + value + b[1])
            print(b[3] + "\n")
        elif key_t == "s" and value_t != "s":
            print(b[0] + b[4]   + key + b[4] +  b[5] + b[6] + value + b[1])
            print(b[3] + "\n")
        elif value_t == "s" and key_t != "s":
            print(b[0] + key + b[5] + b[6] +  b[4] + value + b[4] + b[1])
            print(b[3] + "\n")
        if repeat != "r":
            return ""


def map_access():
    t = ["std::cout << ",  "\\n", "\""," << std::endl;", ";", ".at(", ")","[","]"]
    st = [" std::cout << \"", "\\n","\";}","\" << std::endl;}"]
             
    while True:
        print("//Enter the name of the map m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the name of the variable.")
        var = input("//")
        print("To enter a key error message for exception press e.")
        print("//Press enter to not enter a error message.")
        em = input("//")
        if em != "e": 
            print("\n"+ t[0] + name + t[5] + var + t[6] + t[3] + "\n")
            print("\n" + t[0] + name + t[7] + var + t[8] + t[3] + "\n")
            print("\n" + name + t[5] + var + t[6] + "     // Use with try catch.\n")
            print("\n" + name + t[7] + var + t[8] + "\n")
            print("\n }" + "\n")
            print("\n" +  "try{\n")
            print("\n" + "}catch(std::out_of_range){" +  "    //For map key error.\n") 
            if repeat != "r":
                return "" 
        elif em == "e":
            print("//Enter error message.")
            text = input("//")
            print("\n"+ t[0] + name + t[5] + var + t[6] + t[3] + "\n")
            print("\n }" + "\n")
            print("\n" + "try{" + "\n")
            print("}catch(std::out_of_range){")  
            print(st[0] +  text + st[1] + st[2] + "\n")
            print("}catch(std::out_of_range){") 
            print(st[0] +  text + st[3] + "\n")
        if repeat != "r":
            return ""


def variablep():
    f = ["std::string ",";"]	
    while True:
        print("//Enter name of variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("\n" + f[0] + name + f[1] + "\n")
        if repeat != "r":
            return ""
        
        
def variable_valuep():    
    t = ["std::string "," = ","\"",";"]
    while True:
        print("//Enter a name of variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//enter a value\n")
        value = input("//")
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")
        if repeat != "r":
            return ""


def copyy(): 
    print("\n")
    print("#include <iostream>")
    print("\n")
    print("#include <string>")
    print("\n")
    print("#include <map>")
    print("\n")
    print("#include <limits>")
    print("\n")
    print("#include <cstdio>")
    print("\n")
    print("#include <cstring>")
    print("\n");
    print("#include <cstdlib>")
    print("\n")
    print("int main() {")
    print("\n")
    print("while(true) {")
    print("\n")
    print("else {")
    print("\n")
    print("} else {")
    print("\n")
    print("break;")
    print("\n")
    print("break;}")
    print("\n")
    print("continue;")
    print("\n")
    print("continue;}")
    print("\n")
    print("try {")
    print("\n")
    print("}catch(std::out_of_range){")
    print("\n")
    print("std::cin.clear();")
    print("std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');")
    print("\n")
    print("        }")
    print("}")
    print("return 0;")
    print("}")
    print("\n")
    print("//Enter m for main.")


switch = {
         "ch": choice,
         "a": string,
         "hd": hide_text,
         "c": empty_string,
         "f": fgets,
         "s": scanf,
         "sb": scanf_basic,
         "i": if_statement,
         "e": elif_statement,
         "mi": multi_if,
         "in": if_number,
         "im": if_malloc,
         "v": variable,
         "vv": variable_value,
         "aa": array,
         "ia": num_array,
         "fc": function,
         "cf": call_function,
         "h": heap,
         "hi": heap_numbers,
         "cm": check_malloc,
         "si": scan_number,
         "sh": scan_heap,
         "sc": check_scanf,
         "vi": variable_number, 
         "vn": variable_no_value,
         "cy": copy,
         "sp": stringg,
         "cp": estring,
         "aap": arrayCPP,
         "ip": ifStatementp,
         "ep": elseifp,
         "mip": multiIfCpp,
         "up": user_input,
         "cbp": clear_buff,
         "mp": mapp,
         "ma": map_access,
         "vp": variablep,
         "vvp": variable_valuep,
         "cyp": copyy,
}

    
choice()    
while True:
    try:
        print("//Enter x for exit m for main ch for choices.")
        call = input("//")
        if call == "x":
            break
        (switch[call]())
    except KeyError:
        print("Enter a letter in choices.")
      
    
    
    
    
    
    
    
    
    
    
    
     

        
        
        
        
        
        
        
        
        
        
        






            
            


    
    
  

    
            
            
            
                


        
        
        
    
        
        
    
        
        
        
        
        
    
    
    
                                

   
    
           
       
   
  
        
    
    
    

    


 
