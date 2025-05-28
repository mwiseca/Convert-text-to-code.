// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <iostream>
#include <string>

void fgetsSizeof() {
	std::string f[12] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
	std::string name;

            while (true) {
		std::cout << "//Enter name of variable m for main.\n";
		std::cout << "//";
                getline(std::cin,name);
                if (name == "m") {
                    break;
                }
		std::cout << "\n" <<  f[0] << name << f[1] << f[2] << name << f[3] << "\n";
	        std::cout << name << f[4] << name << f[1] << f[5] << f[6] << "\n\n";
		std::cout << "\n" << f[9] << f[0] << name << f[1] << f[2] << name << f[11] << "\n";
		std::cout << f[10] << name << f[4] << name << f[1] << f[5] << f[6] << "\n\n";
	        std::cout << "\n" << f[0] << name << f[1] << f[2] << name << f[3] << "\n";
		std::cout << name << f[7] << name << f[8] << "\n\n";
                //if (repeat == "r") {
                    //break;
                //}
            }
}
int main(){
fgetsSizeof();
return 0;
}
