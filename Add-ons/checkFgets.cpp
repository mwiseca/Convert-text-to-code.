// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <iostream>
#include <string>



void checkFgets() {
    std::string f[12] = {"while(fgets(", ",", "stdin) == NULL) {", "[strcspn(", "\"\\n", "\")]=0;", "    ","sizeof(","),stdin) == NULL) {","printf(\"","\\n","\");"};
    std::string v;
    std::string me;
    std::string em;
    std::string function;
    int m;

    while (true) {
        std::cout <<"//Enter name of variable m for main.\n";
        std::cout << "//";
        getline(std::cin,v);  
        if (v == "m") {
            break;
        }
        std::cout << "//Enter the memory to be allocated to the variable 5 minimum.\n";
        std::cout << "//";
        while(getline(std::cin, me)) {
            try{
                m = std::stoi(me);
                if(m < 5 || m > 10000000){
                    std::cout << "\n//Enter a minimum of 5 or less than 10000000.\n\n"; 
                } else {
                    break;
                }
            } catch(std::invalid_argument) {
                std::cout << "\n//Enter a number only.\n";
            } catch(std::out_of_range) {
                std::cout << "\n//Out of range.\n\n";
            } 
        }
        std::cout << "//Enter a error message. Invalid input is good.\n";
        getline(std::cin, em);
        std::cout << "//Enter the function name.\n";
        getline(std::cin,function);
        std::cout  << "\n" << f[0] << v << f[1] << me << f[1] << f[2] << "\n";
        std::cout << f[6] << "clearerr(stdin);" << f[6] << "\n";
        std::cout << f[6] << f[9] << f[10] << em << f[10] << f[10] << f[11] << "\n"; 
        std::cout << "}\n";
        std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
        std::cout << "if(strlen(" << v << ") >= " << m - 1 << ") {" << "\n";
        std::cout << f[6] << function << "();\n";
        std::cout << "}\n\n";
        std::cout <<"\n" << f[0] << v << f[1] << f[7] << v << f[8] << "\n";
        std::cout << f[6] << "clearerr(stdin);" << f[6] << "\n";
        std::cout << f[6] << f[9] << f[10] << em << f[10] << f[10] << f[11] << "\n";
        std::cout << "}\n";
        std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
        std::cout << "if(strlen(" << v << ") >= " << m - 1 << ") {" << "\n"; 
        std::cout << f[6] << function << "();\n"; 
        std::cout << "}\n\n";
        std::cout << "\n" << f[0] << v << f[1] << me << f[1] << f[2] << "\n";
        std::cout << f[6] << "clearerr(stdin);\n"; 
        std::cout << f[6] << f[9] << f[10] << em << f[10] << f[10] << f[11] << "\n"; 
        std::cout << "}\n";
        std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
        std::cout << "\n\n";
        std::cout << "\n" << f[0] << v << f[1] << f[7] << v << f[8] << "\n";
        std::cout << f[6] << "clearerr(stdin);\n";
        std::cout << f[6] << f[9] << f[10] << em << f[10] << f[10] << f[11] << "\n";
        std::cout << "}\n";
        std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
        std::cout << "\n\n";
        //if (repeat == "r") {
        //break;
        //}

    }	    
}

int main(){
    checkFgets();
return 0;
}



























