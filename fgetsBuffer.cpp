// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <iostream>
#include <string>
#include <cstdlib>

void fgetsBuffer() {
    std::string f[12] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
    std::string v;
    std::string me;
    std::string function;
    int m;

    while (true) {
	std::cout << "//Enter name of variable m for main.\n";
	std::cout << "//";
	getline(std::cin,v);
	if (v  ==  "m") {
	    break;
	}
	std::cout << "//Enter the memory to be allocated to the variable 5 minimum.\n";
	std::cout << "//";
        while(true) {
	    try {	
                getline(std::cin,me);	        
	            m = std::stoi(me);
	        if(m <=4) {
	            std::cout << "//\nEnter a number 5 or more.\n\n";
                } else {
	            break;
	        } 
	    }catch(std::invalid_argument){
	        std::cout << "\n//Enter a number only.\n\n";
		}
	 }
	std::cout << "//enter the function name.\n";
	std::cout << "//";
	getline(std::cin,function);
	std::cout << "\n" <<  f[0] << v << f[1] << me << f[1] << f[2] << "\n";
	std::cout << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
	std::cout << "if(strlen(" << v << ")" <<  " >= "  << m-1 << ") {\n";
	std::cout << "    " << function << "();\n";
	std::cout << "}\n\n";	
	std::cout << "\n" << f[6] << f[0] << v << f[1] << me << f[1] << f[8] << "\n";
	std::cout << f[7] << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
	std::cout << "    if(strlen(" << v << ")" <<  " >= "  << m-1 << ") {\n";
	std::cout << "        " << function << "();\n";
	std::cout << "    }\n\n";

	std::cout  << "\n" << f[0] << v << f[1] << f[9] << v << f[10] << "\n";
	std::cout  <<  v << f[3] << v << f[1] << f[4] << f[5] << "\n";
	std::cout << "if(strlen(" << v << ")" <<  " >= "  << m-1 << ") {\n";
	std::cout << "    " << function << "();\n";
	std::cout << "}\n\n";	
	std::cout << "\n" << f[6] << f[0] << v << f[1] << f[9] << v << f[11] << "\n";	
	std::cout << f[7] << v << f[3] << v << f[1] << f[4] << f[5] << "\n";
	std::cout << "    if(strlen(" << v << ")" <<  " >= "  << m-1 << ") {\n";
	std::cout << "        " << function << "();\n";
	std::cout << "    }\n\n";	
	//if (repeat != "r") {
	    //break;
          //}	
     }
}
int main() {
fgetsBuffer();
return 0;
}
