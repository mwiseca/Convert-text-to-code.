// Copyright 2023-2024 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
int main() {
    std::string t[11] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
    std::string select;
    std::string name;
    std::string value;
    std::string op;
    std::string compare;
    std::string sname;
    std::string svalue;
    std::string scompare;

    while (true) {
	std::cout << "//Enter i for if, e for else if.\n";
        while (getline(std::cin,select)) {
            if (select != "i" && select != "e") {
	        std::cout << "//Enter i or e only.\n";
            } else {
                break;
            }
        }
        if (select == "i") {
            select = t[0];
        } else if (select == "e") {
            select = t[2];
        }
	std::cout << "//Enter a name of first m for main.\n";
	std::cout << "//";
        getline(std::cin,name);
        if (name == "m") {
            break;
        }
	std::cout << "//Enter a value.\n";
	std::cout << "//";
        getline(std::cin,value);
	std::cout << "//Enter a comparison a for equal b for not equal.\n";
	std::cout << "//";
        while (getline(std::cin,compare)) {
            if (compare != "a" && compare != "b") {
	        std::cout << "//Enter a or b only.\n";
            } else {
                break;
            }
        }
        if (compare == "a") {
            compare = t[4];
        } else if (compare == "b") {
            compare = t[5];
        }
	std::cout << "//Enter a operator a for and o for or.\n";
	std::cout << "//";
        while (getline(std::cin,op)) {
            if (op !=  "a" && op != "o") {
	        std::cout << "//Enter a or o only.\n";
            } else {
                break;
            }
        }
        if (op == "a") {
            op = t[8];
        } else if (op == "o") {
            op = t[9];
        }

	std::cout << "//Enter the second name,\n";
	std::cout << "//";
        getline(std::cin,sname);
	std::cout << "Enter the second value.\n";
	std::cout << "//";
        getline(std::cin,svalue);
	std::cout << "Enter a second comparison a for equal b for not equal\n";
	std::cout << "//";
        while (getline(std::cin,scompare)) {
            if (scompare != "a" && scompare != "b") {
	        std::cout << "//Enter a or b only.\n";
            } else {
                break;
            }
        }
	if (scompare == "a") {
            scompare = t[6];
        } else if (scompare == "b") {
            scompare = t[7];
        }

std::cout << "\n" << "\n" <<  select <<  name <<  t[1] << t[3] << value << t[3] << compare << op << t[10] << sname << t[1] << t[3] <<  svalue << t[3] <<  scompare << "\n\n";
    }
    return 0;
}

