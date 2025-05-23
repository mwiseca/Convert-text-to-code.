// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <iostream>
#include <string>
#include <map>
void keys() {
    std::cout << "      A\n";
    std::cout << "      B\n";
    std::cout << "      C\n";
    std::cout << "      D\n";
    std::cout << "      E\n";
    std::cout << "      F\n";
    std::cout << "      G\n";
    std::cout << "      H\n";
    std::cout << "      I\n";
    std::cout << "      J\n";
    std::cout << "      k\n";
    std::cout << "      L\n";
    std::cout << "      M\n";
    std::cout << "      N\n";
    std::cout << "      O\n";
    std::cout << "      P\n";
    std::cout << "      Q\n";
    std::cout << "      R\n";
    std::cout << "      S\n";
    std::cout << "      T\n";
    std::cout << "      U\n";
    std::cout << "      V\n";
    std::cout << "      W\n";
    std::cout << "      X\n";
    std::cout << "      Y\n";
    std::cout << "      Z\n";
    std::cout << "      a\n";
    std::cout << "      b\n";
    std::cout << "      c\n";
    std::cout << "      d\n";
    std::cout << "      e\n";
    std::cout << "      f\n";
    std::cout << "      g\n";
    std::cout << "      h\n";
    std::cout << "      i\n";
    std::cout << "      j\n";
    std::cout << "      k\n";
    std::cout << "      l\n";
    std::cout << "      m\n";
    std::cout << "      n\n";
    std::cout << "      o\n";
    std::cout << "      p\n";
    std::cout << "      q\n";
    std::cout << "      r\n";
    std::cout << "      s\n";
    std::cout << "      t\n";
    std::cout << "      u\n";
    std::cout << "      v\n";
    std::cout << "      w\n";
    std::cout << "      x\n";
    std::cout << "      y\n";
    std::cout << "      z\n";
    std::cout << "      .\n";
    std::cout << "      \\n" << "\n";
    std::cout << "      sp space\n";
    std::cout << "      ,\n";
    std::cout << "      ;\n";
    std::cout << "      :\n";
    std::cout << "      !\n";
}


void binHex(){
    std::map<std::string,std::string> bin = {
        {"A",   "\n01000001\n\n0b01000001\n\n41\n\n0x41\n"},
	{"B",   "\n01000010\n\n0b01000010\n\n42\n\n0x42\n"},
	{"C",   "\n01000011\n\n0b01000011\n\n43\n\n0x43\n"},
	{"D",   "\n01000100\n\n0b01000100\n\n44\n\n0x44\n"},
	{"E",   "\n01000101\n\n0b01000101\n\n45\n\n0x45\n"},
	{"F",   "\n01000110\n\n0b01000110\n\n46\n\n0x46\n"},
	{"G",   "\n01000111\n\n0b01000111\n\n47\n\n0x47\n"},
	{"H",   "\n01001000\n\n0b01001000\n\n48\n\n0x48\n"},
	{"I",   "\n01001001\n\n0b01001001\n\n49\n\n0x49\n"},
	{"J",   "\n01001010\n\n0b01001010\n\n4A\n\n0x4A\n"},	
	{"K",   "\n01001011\n\n0b01001011\n\n4B\n\n0x4B\n"},
	{"L",   "\n01001100\n\n0b01001100\n\n4C\n\n0x4C\n"},
	{"M",   "\n01001101\n\n0b01001101\n\n4D\n\n0x4D\n"},
	{"N",   "\n01001110\n\n0b01001110\n\n4E\n\n0x4E\n"},
	{"O",   "\n01001111\n\n0b01001111\n\n4F\n\n0x4F\n"}, 
	{"P",   "\n01010000\n\n0b01010000\n\n50\n\n0x50\n"},
	{"Q",   "\n01010001\n\n0b01010001\n\n51\n\n0x51\n"},
	{"R",   "\n01010010\n\n0b01010010\n\n52\n\n0x52\n"},
	{"S",   "\n01010011\n\n0b01010011\n\n53\n\n0x53\n"},
	{"T",   "\n01010100\n\n0b01010100\n\n54\n\n0x54\n"}, 
        {"U",   "\n01010101\n\n0b01010101\n\n55\n\n0x55\n"},	
	{"V",   "\n01010110\n\n0b01010110\n\n56\n\n0x56\n"},
	{"W",   "\n01010111\n\n0b01010111\n\n57\n\n0x57\n"},
	{"X",   "\n01011000\n\n0b01011000\n\n58\n\n0x58\n"},
	{"Y",   "\n01011001\n\n0b01011001\n\n59\n\n0x59\n"},
	{"Z",   "\n01011010\n\n0b01011010\n\n5A\n\n0x5A\n"},
	{"a",   "\n01100001\n\n0b01100001\n\n61\n\n0x61\n"},
	{"b",   "\n01100010\n\n0b01100010\n\n62\n\n0x62\n"}, 
	{"c",   "\n01100011\n\n0b01100011\n\n63\n\n0x63\n"},
	{"d",   "\n01100100\n\n0b01100100\n\n64\n\n0x64\n"},
	{"e",   "\n01100101\n\n0b01100101\n\n65\n\n0x65\n"},
	{"f",   "\n01100110\n\n0b01100110\n\n66\n\n0x66\n"},
	{"g",   "\n01100111\n\n0b01100111\n\n67\n\n0x67\n"},
	{"h",   "\n01101000\n\n0b01101000\n\n68\n\n0x68\n"},
	{"i",   "\n01101001\n\n0b01101001\n\n69\n\n0x69\n"},
	{"j",   "\n01101010\n\n0b01101010\n\n6A\n\n0x6A\n"}, 
        {"k",   "\n01101011\n\n0b01101011\n\n6B\n\n0x6B\n"},
	{"l",   "\n01101100\n\n0b01101100\n\n6C\n\n0x6C\n"},
	{"m",   "\n01101101\n\n0b01101101\n\n6D\n\n0x6D\n"},
	{"n",   "\n01101110\n\n0b01101110\n\n6E\n\n0x6E\n"},
	{"o",   "\n01101111\n\n0b01101111\n\n6F\n\n0x6F\n"}, 
	{"p",   "\n01110000\n\n0b01110000\n\n70\n\n0x70\n"},	
	{"q",   "\n01110001\n\n0b01110001\n\n71\n\n0x71\n"},
	{"r",   "\n01110010\n\n0b01110010\n\n72\n\n0x72\n"},	
	{"s",   "\n01110011\n\n0b01110011\n\n73\n\n0x73\n"},
	{"t",   "\n01110100\n\n0b01110100\n\n74\n\n0x74\n"}, 
	{"u",   "\n01110101\n\n0b01110101\n\n75\n\n0x75\n"},
	{"v",   "\n01110110\n\n0b01110110\n\n76\n\n0x76\n"},
	{"w",   "\n01110111\n\n0b01110111\n\n77\n\n0x77\n"},
	{"x",   "\n01111000\n\n0b01111000\n\n78\n\n0x78\n"},
	{"y",   "\n01111001\n\n0b01111001\n\n79\n\n0x79\n"},
	{"z",   "\n01111010\n\n0b01111010\n\n7A\n\n0x7A\n"},
	{".",   "\n00101110\n\n0b00101110\n\n2E\n\n0x2E\n"},
	{"\\n", "\n00001010\n\n0b00001010\n\n0A\n\n0X0A\n"},
	{"sp",  "\n00100000\n\n0b00100000\n\n20\n\n0x20\n"},
	{",",   "\n00101100\n\n0b00101100\n\n2C\n\n0x2C\n"}, 
	{";",   "\n00111011\n\n0b00111011\n\n3B\n\n0x3B\n"},
	{":",   "\n00111010\n\n0b00111010\n\n3A\n\n0x3A\n"},
	{"!",   "\n00100001\n\n0b00100001\n\n21\n\n0x21\n"},
	{"ii",                            ""},	
    };
    std::string b;
    std::cout << "//Enter a leter to get a binary and hexadecimal.\n";
    std::cout << "//Enter ii for index mn for main.\n";
    while(true) {
        try {
	    std::cout << "//";
	    getline(std::cin,b);
	    if(b == "ii") {
	        keys();
		continue;
	    } else if(b == "mn") {
	        break;
            }
	    std::cout << bin.at(b) << "\n";
	    //if(repeat != "r") {
	     //   break;
	    //}
	    } catch(std::out_of_range){
	        std::cout << "\n//Enter a name from index ii or mn for main.\n\n";
	}
    }
}

int main(){
    binHex();
return 0;
}
















	
