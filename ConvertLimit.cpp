// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <functional>
#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdlib>
#define SIZE 100
#define MAX 99

/*To use CONST int SIZE and const int MAX comment out the #define SIZE 
and the #define MAX and uncomment the const int variables.*/

//const int SIZE = 100;
//const int MAX = 99;
char repeat[100];

void clear(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

void checkInput() {
    printf("\nInvalid input Try again.\n\n");
    clearerr(stdin);
}

void choice() {
    printf("//Enter ch for choices.\n");
    printf("//Enter a for strings.\n");
    printf("//Enter aa for arrays.\n");
    printf("//Enter ia for arrays with numbers C C++.\n");
    printf("//Enter c for strings with no quotation marks.\n");
    printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
    printf("//Enter i for if statements e for else if for strings.\n");
    printf("//Enter mi for if statements with 2 conditions.\n");
    printf("//Enter in for if and else if statements for numbers C-C++.\n");
    printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
    printf("//Enter f for fgets.\n");
    printf("//Enter fs for fgets with sizeof operator.\n");
    printf("//Enter fb for fgets to use with cb to clear input buffer without having ");
    printf("to press enter twice.\n");
    printf("//Enter s for scanf for strings to allow for white spaces.\n");
    printf("//Enter sb for scanf basic no white spaces.\n");
    printf("//Enter si for scanf for integers and doubles.\n");
    printf("//Enter sh for scanf for ints and doubles on the heap.\n");
    printf("//Enter sc for check scanf.\n");
    printf("//Enter csl to check scanf and limmit size.\n");
    printf("Enter cb to clear input buffer in C.\n");
    printf("//Enter h to allocate memory on the heap.\n");
    printf("//Enter hi to allocate numbers on the heap.\n");
    printf("//Enter cm to check malloc.\n");
    printf("//Enter fc for void functions C-C++.\n");
    printf("//Enter cf to call functions C-C++.\n");
    printf("//Enter v for variables without assigning a value.\n");
    printf("//Enter vv for variables with assigning a string value.\n");
    printf("//Enter vi for int and double variables C-C++.\n");
    printf("//Enter vn for int and double variables with no value C-C++.\n");
    printf("//Enter m for main x to exit.\n");
    printf("//Enter sp for C++ strings.\n");
    printf("//Enter cp for C++ empty strings.\n");
    printf("//Enter aap for C++ string arrays.\n");
    printf("//Enter ip for C++ string if statements.\n");
    printf("//Enter ep for C++ string else if statements.\n");
    printf("//Enter mip for if statements with 2 conditions C++.\n");
    printf("//Enter up for C++ user input.\n");
    printf("//Enter cbp for a function to clear input buffer C++.\n");
    printf("//Enter mp to start a C++ map.\n");
    printf("//Enter ma for map acces C++.\n");
    printf("//Enter vp for string variables no value C++.\n");
    printf("//Enter vvp for string variables with a value c++.\n");
    printf("//Enter cyp for what's needed to copy and paste to finish a simple C++ program.\n");
}

void string() {
    char string[3][15] = {"printf(\"", "\\n", "\");"};
    char text[SIZE];
    printf("//Enter your string, m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text, SIZE, stdin) == NULL) {
			checkInput();
		}
        text[strcspn(text, "\n")] = 0;
	    if (strlen(text) >= MAX) {
            clear();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
        printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1],string[1], string[2]);
        printf("%s%s%s\n\n", string[0], text, string[2]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void stringEmpty() {
    char t[2][12] = {"printf(", ");"};
    char text[SIZE];

    printf("//Enter text m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text,SIZE, stdin) == NULL) {
		    checkInput();
		}
        text[strcspn(text, "\n")] = 0;
	    if (strlen(text) >= MAX) {
            clear();
        }
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", t[0], text, t[1]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void fgetss() {
    char f[8][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';"};
    char w[9][15] = {"while(fgets(", ",", "stdin)){", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';", "      "};

    char v[SIZE];
    char me[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(v,SIZE, stdin) == NULL) {
		    checkInput();
		}
        v[strcspn(v, "\n")] = 0;
	    if (strlen(v) >= MAX) {
            clear();
        }
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable.\n");
        printf("//");
        while(fgets(me,SIZE, stdin) == NULL) {
		    checkInput();
		}
        me[strcspn(me, "\n")] = 0;
	    if (strlen(me) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4], f[5]);
        printf("%s%s%s%s%s%s\n", w[0], v, w[1], me, w[1], w[2]);
        printf("%s%s%s%s%s%s%s\n\n", w[8], v, w[3], v, w[1], w[4], w[5]);
        printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
        printf("%s%s%s%s\n\n", v, f[6], v, f[7]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void fgetsSizeof() {
    char f[12][15] = {"fgets(", ",","sizeof(", "),stdin);", "[strcspn(", "\"\\n", "\")]=0;", "[strlen(", ")-1] = '\\0';","while(", "      ", "),stdin)) {"};
    char name[SIZE];
            
    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear();
	    }
        if (strcmp(name, "m") == 0) {
                break;
        }
        printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]);
        printf("%s%s%s%s%s%s\n\n", name, f[4], name, f[1], f[5], f[6]);
        printf("\n%s%s%s%s%s%s%s\n",f[9], f[0], name, f[1], f[2] ,name, f[11]);
        printf("%s%s%s%s%s%s%s\n\n",f[10], name, f[4], name, f[1], f[5], f[6]);
        printf("\n%s%s%s%s%s%s\n", f[0], name, f[1],  f[2],name, f[3]); 
        printf("%s%s%s%s\n\n", name, f[7], name, f[8]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}
  
void fgetsBuffer() {
    char f[12][15] = {"fgets(", ",", "stdin);", "[strcspn(", "\"\\n", "\")]=0;", "while(", "      ", "stdin)) {","sizeof(","),stdin);","),stdin)) {"};
    char v[SIZE];
    char me[10];
    char function[SIZE];
    int m;

    while (1) {
        printf("//Enter name of variable m for main.\n");
	    printf("//");
	    fgets(v, SIZE, stdin);
	    v[strcspn(v, "\n")] = 0;
	    if(strlen(v) >= MAX){ 
	        clear();
	    }
	    if (strcmp(v, "m") == 0) {
	        break;
	    }
	    printf("//Enter the memory to be allocated to the variable 5 minimum.\n");
	    printf("//");
	    while(fgets(me, sizeof(me), stdin)) {
	        me[strcspn(me, "\n")] = 0;
	        if(strlen(me) >= 9){ 
	            clear();
	        }
	        m = atoi(me);
	        if(m <=4) {
	            printf("\n//Enter a number 5 or more.\n\n");
            } else {
	            break;
	        }
	    }
	    printf("//Enter the function name.\n");
	    fgets(function,SIZE,stdin);
	    function[strcspn(function,"\n")]=0;
	    if(strlen(v) >= MAX){ 
	        clear();
	    }
	    printf("\n%s%s%s%s%s%s\n", f[0], v, f[1], me, f[1], f[2]);
	    printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
	    printf("if(strlen(%s) >= %d) {\n",v,m - 1);
	    printf("    %s();\n",function);
	    printf("}\n\n");
	    printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1], me, f[1], f[8]);
	    printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
	    printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
	    printf("        %s();\n",function);
	    printf("    }\n\n");

	    printf("\n%s%s%s%s%s%s\n", f[0], v, f[1],f[9],v,f[10]);
	    printf("%s%s%s%s%s%s\n", v, f[3], v, f[1], f[4], f[5]);
	    printf("if(strlen(%s) >= %d) {\n",v,m - 1);
	    printf("    %s();\n",function);
	    printf("}\n\n");
	    printf("\n%s%s%s%s%s%s%s\n",f[6], f[0], v, f[1],f[9],v, f[11]);	
	    printf("%s%s%s%s%s%s%s\n",f[7], v, f[3], v, f[1], f[4], f[5]);
	    printf("    if(strlen(%s) >= %d) {\n",v,m - 1);
	    printf("        %s();\n",function);
	    printf("    }\n\n");
	    if (strcmp(repeat, "r") != 0) {
	        break;
        }	
    }     
}

void scanff() {
    char t[6][15] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
    char var[SIZE];
    char mem[10];
    int m;

    while (1) {
	    printf("//Enter the name of variable m for main.\n");
	    printf("//");
	    fgets(var,SIZE, stdin);
	    var[strcspn(var, "\n")] = 0;
	    if (strlen(var) >= MAX) {
	        clear();
	    }
	    if (strcmp(var, "m") == 0) {
	        break;
	    }
	    printf("//Enter memory allocated to variable 2 or more.\n");
	    printf("//");
	    while(fgets(mem,10, stdin)){
	        mem[strcspn(mem, "\n")] = 0;
	        if (strlen(mem) >= 9) {
	            clear();
	        }
            m = atoi(mem);
	        if (m < 2){
	            printf("\n//Enter a valid number only.\n\n");
		        printf("//");
	        }else{
	           break;
	        }
	    }	
	    printf("\n%s%s%d%s%s%s%s\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
	    printf("%s\n\n", t[5]);
	    if (strcmp(repeat, "r") != 0) {
	        break;
	    }
    }
}

void scanfBasic() {
    char t[5][15] = {"scanf(\"", "%", "s\"", ", ", ");"};
    char var[SIZE];
    char mem[10];
    int m;

    while (1) {
	    printf("//Enter the name of variable m for main.\n");
	    printf("//");
	    fgets(var,SIZE, stdin);
	    var[strcspn(var, "\n")] = 0;
	    if (strlen(var) >= MAX) {
	        clear();
	    }
	    if (strcmp(var, "m") == 0) {
	        break;
	    }
	    printf("//Enter memory allocated to variable 2 or higher.\n");
	    printf("//");
	    while(fgets(mem,10, stdin)){
	        mem[strcspn(mem, "\n")] = 0;
	        if (strlen(mem) >= 9) {
	            clear();
	        }
	       m = atoi(mem);
	       if (m < 2){
	           printf("\n//Enter a valid number only.\n\n");
	           printf("//");
	       }else{
	           break; 
	       }
	    }
	    printf("\n%s%s%d%s%s%s%s\n\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
	    if (strcmp(repeat, "r") != 0) {
	        break;
	    }
    }
}

void clearBuffC() {
    char t[5][12] = {"void ", "(", "){", "}","();"};	
    char name[SIZE];

    while (1) {
	    printf("//Name function m for main.\n");
	    printf("//");
	    while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
	    name[strcspn(name, "\n")] = 0;
        if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
	    break;
        }
	    printf("\n%s%s%s%s\n", t[0], name, t[1], t[2]);
	    printf("    int clear;\n");   
	    printf("    while ((clear = getc(stdin)) != '\\n' && clear != EOF) {\n");
	    printf("%s%s\n","    ",t[3]);	
	    printf("%s\n\n",t[3]);
	    printf("%s%s\n\n",name,t[4]);
	    if (strcmp(repeat, "r") != 0) {
	        break;
	    }
    }	
}

void ifStatement() {
    char f[4][15] = {"if(strcmp(", ",", "\"", ")==0) {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
		    checkInput();
		}
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void elseIf() {
    char f[4][18] = {"} else if(strcmp(", ",", "\"", ")==0) {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the else if statement m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
		    checkInput();
		}
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear();
        }
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void multiIf() {
    char t[11][30] = {"if(strcmp(", ",", "} else if(strcmp(", "\"", ")==0", ")!=0", ")==0) {", ")!=0) {", " && ", " || ", "strcmp("};
    char select[SIZE];
    char name[SIZE];
    char value[SIZE];
    char op[SIZE];
    char compare[SIZE];
    char sname[SIZE];
    char svalue[SIZE];
    char scompare[SIZE];

    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while (fgets(select, SIZE, stdin)) {
            select[strcspn(select, "\n")] = 0;
	        if (strlen(select) >= MAX) {
                clear(); 
            }
	        if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("//Enter i or e only.\n");
            } else {
                break;
            }
        }
        if (strcmp(select, "i") == 0) {
            strcpy(select, t[0]);
        } else if (strcmp(select, "e") == 0) {
            strcpy(select, t[2]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        fgets(name, SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear();
        }
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        fgets(value,SIZE, stdin);
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear();
        }
        printf("//Enter a comparison a for equal b for not equal.\n");
        printf("//");
        while (fgets(compare,SIZE, stdin)) {
            compare[strcspn(compare, "\n")] = 0;
	    if (strlen(compare) >= MAX) {
                clear();
	    }
	    if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
                printf("//Enter a or b only.\n");
            } else {
                break;
            }
        }
        if (strcmp(compare, "a") == 0) {
            strcpy(compare, t[4]);
        } else if (strcmp(compare, "b") == 0) {
            strcpy(compare, t[5]);
        }
        printf("//Enter a operator a for and o for or.\n");
        printf("//");
        while (fgets(op, SIZE, stdin)) {
            op[strcspn(op, "\n")] = 0;
	    if (strlen(op) >= MAX) {
                clear();
	    }
	    if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("//Enter a or o only.\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[8]);
        } else if (strcmp(op, "o") == 0) {
            strcpy(op, t[9]);
        }

        printf("//Enter the second name,\n");
        printf("//");
        fgets(sname, SIZE, stdin);
        sname[strcspn(sname, "\n")] = 0;
	    if (strlen(sname) >= MAX) {
            clear();
        }
        printf("Enter the second value.\n");
        printf("//");
        fgets(svalue,SIZE, stdin);
        svalue[strcspn(svalue, "\n")] = 0;
	    if (strlen(sname) >= MAX) {
            clear();
        }
        printf("Enter a second comparison a for equal b for not equal\n");
        printf("//");
        while (fgets(scompare, SIZE, stdin)) {
            scompare[strcspn(scompare, "\n")] = 0;
	    if (strlen(scompare) >= MAX) {
                clear();
	    }
	    if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
                printf("//Enter a or b only.\n");
            } else {
                break;
            }
        }
        if (strcmp(scompare, "a") == 0) {
            strcpy(scompare, t[6]);
        } else if (strcmp(scompare, "b") == 0) {
            strcpy(scompare, t[7]);
        }

        printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n", select, name, t[1], t[3], value, t[3], compare, op, t[10], sname, t[1], t[3], svalue, t[3], scompare);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void ifNumber() {
    char t[10][20] = {"if(", "} else if(", "strlen", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
    char select[SIZE];
    char var[SIZE];
    char op[SIZE];
    char num[SIZE];
    while (1) {
        printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
        printf("//");
        fgets(select, SIZE, stdin);
        select[strcspn(select, "\n")] = 0;
	    if (strlen(select) >= MAX) {
                clear(); 
            }
        if (strcmp(select, "s") != 0 && strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("//Enter s or i or e only.\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        fgets(var,SIZE, stdin);
        var[strcspn(var, "\n")] = 0;
	    if (strlen(var) >= MAX) {
                clear(); 
            }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while (fgets(op, SIZE, stdin)) {
            op[strcspn(op, "\n")] = 0;
	        if (strlen(op) >= MAX) {
                clear(); 
	        }
	        if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                printf("//Enter a or b or c or d only.\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[3]);
        } else if (strcmp(op, "b") == 0) {
            strcpy(op, t[4]);
        } else if (strcmp(op, "c") == 0) {
            strcpy(op, t[5]);
        } else if (strcmp(op, "d") == 0) {
            strcpy(op, t[6]);
        }
        printf("//Enter a number to compare to.\n");
        printf("//");
        fgets(num, SIZE, stdin);
        num[strcspn(num, "\n")] = 0;
	    if (strlen(num) >= MAX) {
                clear(); 
            }
        if (strcmp(select, "s") == 0) { 
            printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[2], t[7], var, t[8], op, num, t[9]);
            if (strcmp(repeat, "r") !=0) {
                break;
            }
        } else if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[9]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[9]);
            if (strcmp(repeat, "r") != 0) {
                break;              
            }
        }
    }
}

void ifHeap() {
    char t[9][20] = {"if(*", "}else if(*", " <= ", " == ", " >= ", " != ", "(", ")", "){"};
    char select[SIZE];
    char var[SIZE];
    char op[SIZE];
    char num[SIZE];
    while (1) {
        printf("//Enter i for if statement. Enter e for else if.\n");
        printf("//");
        fgets(select, SIZE, stdin);
        select[strcspn(select, "\n")] = 0;
	    if (strlen(select) >= MAX) {
                clear(); 
            }
        if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
            printf("//Enter i or e only.\n");
            continue;
        }
        printf("//Enter the name of if or else if statement  enter m for main.\n");
        fgets(var, SIZE, stdin);
        var[strcspn(var, "\n")] = 0;
	    if (strlen(var) >= MAX) {
                clear(); 
            }
        if (strcmp(var, "m") == 0) {
            break;
        }
        printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
        printf("//");
        while (fgets(op, SIZE, stdin)) {
            op[strcspn(op, "\n")] = 0;
	        if (strlen(op) >= MAX) {
                clear(); 
	        }
            if (strcmp(op, "a") != 0 && strcmp(op, "b") != 0 && strcmp(op, "c") != 0 && strcmp(op, "d") != 0) {
                printf("//Enter a or b or c or d only.\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[2]);
        } else if (strcmp(op, "b") == 0) {
            strcpy(op, t[3]);
        } else if (strcmp(op, "c") == 0) {
            strcpy(op, t[4]);
        } else if (strcmp(op, "d") == 0) {
            strcpy(op, t[5]);
        }
        printf("//Enter a number to compare to.\n");
        printf("//");
        fgets(num, SIZE, stdin);
        num[strcspn(num, "\n")] = 0;
	    if (strlen(num) >= MAX) {
                clear(); 
            }
        if (strcmp(select, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], var, op, num, t[8]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(select, "e") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], var, op, num, t[8]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void variable() {
    char f[3][15] = {"char ", " [", "];"};
    char name[SIZE];
    char mem[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
                clear(); 
            } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the memory to be allocated to the variable.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
		 checkInput();
		}
        mem[strcspn(mem, "\n")] = 0;
	    if (strlen(name) >= MAX) {
                clear(); 
            } 
        printf("\n%s%s%s%s%s\n\n", f[0], name, f[1], mem, f[2]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void variableValue() {
    char v[6][15] = {"char ", "[", "]", " = ", "\"", ";"};
    char name[SIZE];
    char mem[SIZE];
    char value[SIZE];
    while (1) {
        printf("//Enter a name of variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
                clear(); 
            } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
		    checkInput();
		}
        mem[strcspn(mem, "\n")] = 0;
	    if (strlen(mem) >= MAX) {
            clear(); 
        }  
        printf("//enter a value\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
		    checkInput();
		}	
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        }  
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", v[0], name, v[1], mem, v[2], v[3], v[4], value, v[4], v[5]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void array() {
    char t[5][15] = {"char ", " [", "] ", "] = {", "};"};
    char name[SIZE];
    char ne[SIZE];
    char m[SIZE];
    char elements[SIZE];
    while (1) {
        printf("//Enter the name of array m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL){
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
         } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the amount of elements.\n");
        printf("//");
        while(fgets(ne, SIZE, stdin) == NULL) {
		    checkInput();
		}
        ne[strcspn(ne, "\n")] = 0;
	    if (strlen(ne) >= MAX) {
            clear(); 
        } 
        printf("//Enter memory allocated to elements.\n");
        printf("//");
        while(fgets(m, SIZE, stdin) == NULL) {
		    checkInput();
		}
        m[strcspn(m, "\n")] = 0;
	    if (strlen(m) >= MAX) {
            clear(); 
        } 
        printf("//Enter elements with quotations and commas between each.\n");
        printf("//");
        while(fgets(elements,SIZE, stdin) == NULL) {
		    checkInput();
		}
        elements[strcspn(elements, "\n")] = 0;
	    if (strlen(elements) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], t[1], m, t[3], elements, t[4]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void numArray() {
    char a[6][20] = {"int ", "double ", "[", "]", " = {", "};"};
    char typ[SIZE];
    char name[SIZE];
    char num[SIZE];
    char elements[SIZE];

    while (1) {
        printf("//Enter a data type i for int d for double.\n");
        printf("//");
        while (fgets(typ,SIZE, stdin)) {
            typ[strcspn(typ, "\n")] = 0;
	        if (strlen(typ) >= MAX) {
                clear(); 
            } 
            if (strcmp(typ, "i") != 0 && strcmp(typ, "d") != 0) {
                printf("//Enter i or d.\n");
            } else {
                break;
            }
        }
        if (strcmp(typ, "i") == 0) {
            strcpy(typ, a[0]);
        } else if (strcmp(typ, "d") == 0) {
            strcpy(typ, a[1]);
        }
        printf("//Enter the name of the array m for main.\n");
        printf("//");
        fgets(name,SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter number of elements m for main.\n");
        printf("//");
        fgets(num, SIZE, stdin);
        num[strcspn(num, "\n")] = 0;
	    if (strlen(num) >= MAX) {
            clear(); 
        } 
        printf("//Enter elements with a comma between them.\n");
        printf("//");
        fgets(elements, SIZE, stdin);
        elements[strcspn(elements, "\n")] = 0;
	    if (strlen(elements) >= MAX) {
            clear(); 
        } 
        printf("%s%s%s%s%s%s%s%s\n", typ, name, a[2], num, a[3], a[4], elements, a[5]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void funct() {
    char t[4][12] = {"void ", "(", "){", "}"};
    char name[SIZE];
    char per[SIZE];

    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
			checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter parameters.\n");
        printf("//");
        while(fgets(per,SIZE, stdin) == NULL) {
		    checkInput();
		}
        per[strcspn(per, "\n")] = 0;
	    if (strlen(per) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s\n\n\n%s\n\n", t[0], name, t[1], per, t[2], t[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void callFunct() {
    char t[2][12] = {"(", ");"};
    char name[SIZE];
    char per[SIZE];
    while (1) {
        printf("//Enter the name of function m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter values for parameters.\n");
        printf("//");
        while(fgets(per,SIZE, stdin) == NULL) {
		    checkInput();
		}
        per[strcspn(per, "\n")] = 0;
	    if (strlen(per) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s\n\n", name, t[0], per, t[1]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void heap() {
    char t[9][18] = {"char", " *", ";", " = (char*)malloc", "(", ");", "* sizeof(char));", "free", " = NULL;"};
    char name[SIZE];
    char mem[SIZE];

    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
	        checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter memory to allocate.\n");
        printf("//");
        while(fgets(mem,SIZE, stdin) == NULL) {
			checkInput();
		}
        mem[strcspn(mem, "\n")] = 0;
	    if (strlen(mem) >= MAX) {
            clear(); 
        } 
        printf("\n");
        printf("\n%s%s%s%s\n\n", t[0], t[1], name, t[2]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[5]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
        printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
        printf("%s%s\n\n", name, t[8]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void heapNum() {
    char t[15][20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float"," = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};                                     
    char name[SIZE];
    char mem[SIZE];
    while (1) {
        printf("//Enter the name of the variable m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
			checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter memory to allocate.\n");
        printf("//");
        while(fgets(mem, SIZE, stdin) == NULL) {
		    checkInput();
		}
        mem[strcspn(mem, "\n")] = 0;
	    if (strlen(mem) >= MAX) {
            clear(); 
        } 
        printf("\n");
        printf("%s%s%s%s\n\n", t[0], t[1], name, t[2]);
        printf("%s%s%s%s\n\n", t[9], t[1], name, t[2]);
        printf("%s%s%s%s\n\n", t[10], t[1], name, t[2]);
        printf("%s%s%s%s%s\n\n", name, t[3], t[4], mem, t[6]);
        printf("%s%s%s%s%s\n\n", name, t[11], t[4], mem, t[13]);
        printf("%s%s%s%s%s\n\n", name, t[12], t[4], mem, t[14]);
        printf("%s%s%s%s\n", t[7], t[4], name, t[5]);
        printf("%s%s\n\n", name, t[8]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void checkMalloc() {
    char t[8][18] = {"if(", " == NULL){", "    printf(\"", "\\n", "\");", "    exit(1);}","    exit(1);","}"};
    char name[SIZE];
    char em[SIZE];
    while (1) {
        printf("//Enter the name m for main.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter an error message.\n");
        printf("//");
        while(fgets(em, SIZE, stdin) == NULL) {
		    checkInput();
		}
        em[strcspn(em, "\n")] = 0;
	    if (strlen(em) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s\n", t[0], name, t[1]);
        printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
        printf("%s\n\n", t[5]);
        printf("\n%s%s%s\n", t[0], name, t[1]);
        printf("%s%s%s%s\n", t[2], em, t[3], t[4]);
        printf("%s\n", t[6]);
	    printf("%s\n\n", t[7]);   
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void variableNum() {
    char t[5][15] = {"double ", "int ", " = ", ";", " ;"};
    char ch[SIZE];
    char name[SIZE];
    char value[SIZE];
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) ==NULL) {
		    checkInput();
		}
        ch[strcspn(ch, "\n")] = 0;
        name[strcspn(ch, "\n")] = 0;
	    if (strlen(ch) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("Enter the name.\n");
        printf("//");
        while(fgets(name,SIZE,stdin) == NULL) {
			checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        printf("Enter a value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
			checkInput();
		}
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        } 
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[1], name, t[2], value, t[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], name, t[2], value, t[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void varNoValue() {
    char t[3][15] = {"double ", "int ", ";"};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int d for double, m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
			checkInput();
		}
        ch[strcspn(ch, "\n")] = 0;
	    if (strlen(ch) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("Enter the name.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s\n\n", t[1], name, t[2]);
        if (strcmp(repeat, "r") != 0) {
            break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s\n\n", t[0], name, t[2]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void scanfNum() {
    char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", " &", ");"};
    char ch[SIZE];
    char name[SIZE];

    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
			checkInput();
		}
        ch[strcspn(ch, "\n")] = 0;
	    if (strlen(ch) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void scanfHeap() {
    char t[6][15] = {"scanf(\"", "\%d\"", "\%lf\"", ",", ");", "\%f\""};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int f for float or d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
			checkInput();
		}
        ch[strcspn(ch, "\n")] = 0;
	    if (strlen(ch) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "f") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i, f, d  or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
			checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[1], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[2], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(ch, "f") == 0) {
            printf("\n%s%s%s%s%s\n\n", t[0], t[5], t[3], name, t[4]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void checkScanf() {
    char t[7][15] = {"if(scanf(\"", "\%d\"", "\%lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char ch[SIZE];
    char name[SIZE];
    while (1) {
        printf("//Choose i for int d for double or m for main.\n");
        printf("//");
        while(fgets(ch,SIZE, stdin) == NULL) {
			checkInput();
		}
        ch[strcspn(ch, "\n")] = 0;
	    if (strlen(ch) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "m") == 0) {
            break;
        } else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
            printf("Choose i or d or m only.\n");
            continue;
        }
        printf("//Enter the name of variable.\n");
        printf("//");
        while(fgets(name,SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
	    }
        if (strcmp(ch, "i") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1], t[3], name, t[5]);
            printf("\n%s%s%s%s%s%s\n\n", t[6], t[1], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[1], t[3], name, t[5]);
            if (strcmp(repeat, "r") != 0) {
                printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
                break;
            }
        } else if (strcmp(ch, "d") == 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], t[2], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[2], t[3], name, t[5]);
            printf("\n%s%s%s%s%s%s\n\n", t[6], t[2], t[3], t[4], name, t[5]);
            printf("\n%s%s%s%s%s    //Use with malloc.\n\n", t[6], t[2], t[3], name, t[5]);
        }
        printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void checkScanfL() {
    char t[8][15] = {"if(scanf(\"", "%","d\"", "lf\"", ",", " &", ")!=1){", "while(scanf(\""};
    char ch[SIZE];
    char name[SIZE];
    char mem[SIZE];
    while (1) {
	printf("//Choose i for int d for double or m for main.\n");
	printf("//");
	while(fgets(ch, SIZE, stdin) == NULL) {
		checkInput();
	}
	ch[strcspn(ch, "\n")] = 0;
	if (strlen(ch) >= MAX) {
            clear();
        }	    
	if (strcmp(ch, "m") == 0) {
	    break;
	} else if (strcmp(ch, "i") != 0 && strcmp(ch, "d") != 0) {
	    printf("Choose i or d or m only.\n");
	    continue;
	}
	printf("//Enter the name of variable.\n");
	printf("//");
	while(fgets(name, SIZE, stdin) == NULL) {
		checkInput();
	}
	name[strcspn(name, "\n")] = 0;
	if (strlen(name) >= MAX) {
	    clear();
	}
	printf("//Enter memory allocated to variable.\n");
	printf("//");
	while(fgets(mem,SIZE,stdin) == NULL) {
		checkInput();
	}
	mem[strcspn(mem,"\n")]=0;
	if (strlen(mem) >= MAX) {
	    clear();
	}
	if (strcmp(ch, "i") == 0) {
	    printf("\n%s%s%s%s%s%s%s%s\n\n", t[0], t[1],mem,t[2], t[4], t[5], name, t[6]);
	    printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[0], t[1],mem,t[2], t[4], name, t[6]);
	    printf("\n%s%s%s%s%s%s%s%s\n\n", t[7], t[1],mem, t[2], t[4],t[5], name,t[6]);
	    printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[7], t[1],mem,t[2], t[4], name, t[6]);
	    if (strcmp(ch, "r") == 0) {
		    printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
		    break;
	    }	
	} else if (strcmp(ch, "d") == 0) {
	    printf("\n%s%s%s%s%s%s%s%s\n \n", t[0],t[1],mem, t[3], t[4], t[5], name, t[6]);
	    printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[0],t[1],mem, t[3], t[4], name, t[6]);
        printf("\n%s%s%s%s%s%s%s%s\n\n", t[7], t[1],mem, t[3], t[4], t[5],name, t[6]);
        printf("\n%s%s%s%s%s%s%s    //Use with malloc.\n\n", t[7], t[1],mem, t[3], t[4],name, t[6]);
    }
        printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
        if (strcmp(repeat, "r") != 0) {
            break;
        }         
    }
}

void copy() {
    printf("\n");
    printf("#include <stdio.h>\n");
    printf("\n");
    printf("#include <stdio_ext.h>\n");
    printf("\n");
    printf("#include <string.h>\n");
    printf("\n");
    printf("#include <stdlib.h>\n");
    printf("\n");
    printf("while(1) {\n");
    printf("\n");
    printf("break;\n");
    printf("\n");
    printf("break;}\n");
    printf("\n");
    printf("continue;\n");
    printf("\n");
    printf("continue;}\n");
    printf("\n");
    printf("int main() {\n");
    printf("\n");
    printf("fflush(stdin);\n");
    printf("\n");
    printf("__fpurge(stdin);\n");
    printf("\n");
    printf("getchar();\n");
    printf("\n");
    printf("} else {\n");
    printf("\n");
    printf("else {\n");
    printf("\n");
    printf("    }\n");
    printf("}\n");
    printf("\n");
    printf("return 0;\n");
    printf("}\n");
    printf("\n");
}

void cppStrings() {
    char string[4][20] = {"std::cout << \"", "\\n", "\";", "\" << std::endl;"};
    char text[SIZE];
    printf("//Enter your string, m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text, SIZE, stdin) == NULL) {
			checkInput();
		}
        text[strcspn(text, "\n")] = 0;
	    if (strlen(text) >= MAX) {
            clear(); 
        } 
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s\n\n", string[0], text, string[1], string[2]);
        printf("\n%s%s%s%s%s%s\n\n", string[0], string[1], text, string[1], string[1], string[2]);
        printf("\n%s%s%s\n\n", string[0], text, string[2]);
        printf("\n%s%s%s\n\n", string[0], text, string[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void estringp() {
    char t[5][20] = {"std::cout << ", "\\n", "\"", " << std::endl;", ";"};
    char text[SIZE];

    printf("//Enter text m for main.\n");
    while (1) {
        printf("//");
        while(fgets(text,SIZE, stdin) == NULL) {
		    checkInput();
		}
        text[strcspn(text, "\n")] = 0;
	    if (strlen(text) >= MAX) {
            clear(); 
        } 
        if (strcmp(text, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", t[0], text, t[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void arraysp() {
    char t[4][20] = {"std::string ", " [", "] = {", "};"};
    char name[SIZE];
    char ne[SIZE];
    char elements[SIZE];
    while (1) {
        printf("//Enter the name of array m for main.\n");
        printf("//");
        fgets(name, SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the amount of elements.\n");
        printf("//");
        fgets(ne, SIZE, stdin);
        ne[strcspn(ne, "\n")] = 0;
	    if (strlen(ne) >= MAX) {
            clear(); 
        } 
        printf("//Enter elements with quotations and commas between each.\n");
        printf("//");
        fgets(elements,SIZE, stdin);
        elements[strcspn(elements, "\n")] = 0;
	    if (strlen(ne) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s\n\n", t[0], name, t[1], ne, t[2], elements, t[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void ifStatementp() {
    char f[4][15] = {"if(", " == ", "\"", ") {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
			checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        while(fgets(value, SIZE, stdin) == NULL) {
			checkInput();
		}
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void elseIfp() {
    char f[4][15] = {"} else if(", " == ", "\"", ") {"};
    char name[SIZE];
    char value[SIZE];

    while (1) {
        printf("//Enter name of the else if statement m for main.\n");
        printf("//");
        while(fgets(name, SIZE, stdin) == NULL) {
		    checkInput();
		}
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the value.\n");
        printf("//");
        while(fgets(value,SIZE, stdin) == NULL) {
		    checkInput();
		}
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2], value, f[2], f[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void multiIfCpp() {
    char t[8] [20] ={"if(","} else if("," == ", " != ","\""," && "," || ",") {"};
    char select[SIZE];
    char name[SIZE];
    char value[SIZE];
    char op[SIZE];
    char compare[SIZE];
    char sname[SIZE];
    char svalue[SIZE];
    char scompare[SIZE];

    while (1) {
        printf("//Enter i for if, e for else if.\n");
        while (fgets(select,SIZE, stdin)) {
            select[strcspn(select, "\n")] = 0;
	if (strlen(select) >= MAX) {
            clear(); 
        } 
            if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("//Enter i or e only.\n");
            } else {
                break;
            }
        }
        if (strcmp(select, "i") == 0) {
            strcpy(select, t[0]);
        } else if (strcmp(select, "e") == 0) {
            strcpy(select, t[1]);
        }
        printf("//Enter a name of first m for main.\n");
        printf("//");
        fgets(name,SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        fgets(value,SIZE, stdin);
        value[strcspn(value, "\n")] = 0;
	if (strlen(value) >= MAX) {
            clear(); 
        } 
        printf("//Enter a comparison a for equal b for not equal.\n");
        printf("//");
        while (fgets(compare,SIZE, stdin)) {
            compare[strcspn(compare, "\n")] = 0;
	        if (strlen(compare) >= MAX) {
                    clear(); 
                }  
                if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
                    printf("//Enter a or b only.\n");
                } else {
                    break;
                }
        }
        if (strcmp(compare, "a") == 0) {
            strcpy(compare, t[2]);
        } else if (strcmp(compare, "b") == 0) {
            strcpy(compare, t[3]);
        }
        printf("//Enter a operator a for and o for or.\n");
        printf("//");
        while (fgets(op,SIZE, stdin)) {
            op[strcspn(op, "\n")] = 0;
	    if (strlen(op) >= MAX) {
                clear(); 
            }  
            if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("//Enter a or o only.\n");
            } else {
                break;
            }
        }
        if (strcmp(op, "a") == 0) {
            strcpy(op, t[5]);
        } else if (strcmp(op, "o") == 0) {
            strcpy(op, t[6]);
        }

        printf("//Enter the second name,\n");
        printf("//");
        fgets(sname,SIZE, stdin);
        sname[strcspn(sname, "\n")] = 0;
	if (strlen(sname) >= MAX) {
            clear(); 
        }  
        printf("Enter the second value.\n");
        printf("//");
        fgets(svalue, SIZE, stdin);
        svalue[strcspn(svalue, "\n")] = 0;
	if (strlen(svalue) >= MAX) {
            clear(); 
        }  
        printf("Enter a second comparison a for equal b for not equal\n");
        printf("//");
        while (fgets(scompare,SIZE, stdin)) {
            scompare[strcspn(scompare, "\n")] = 0;
	    if (strlen(scompare) >= MAX) {
                clear(); 
            }  
            if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
                printf("//Enter a or b only.\n");
            } else {
                break;
            }
        }
        if (strcmp(scompare, "a") == 0) {
            strcpy(scompare, t[2]);
        } else if (strcmp(scompare, "b") == 0) {
            strcpy(scompare, t[3]);
        }
        printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n",select,name,compare,t[4],value,t[4],op,sname,scompare,t[4],svalue,t[4],t[7]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void userInput() {
    char f[9][20] = {"std::", "getline(", "std::cin", ",", ");", "std::cin >> ", ";","while(",")) {"};
    char v[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        fgets(v,SIZE, stdin);
        v[strcspn(v, "\n")] = 0;
	    if (strlen(v) >= MAX) {
            clear(); 
        } 
        if (strcmp(v, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s%s\n\n", f[1], f[2], f[3], v, f[4]);
        printf("\n%s%s%s%s%s%s\n\n", f[0], f[1], f[2], f[3], v, f[4]);
        printf("\n%s%s%s%s%s%s\n\n", f[7], f[1], f[2], f[3], v, f[8]);
        printf("\n%s%s%s\n\n", f[5], v, f[6]);
        printf("\nstd::cin.clear();");
        printf("\nstd::cin.ignore(2000, '\\n');     //Clears input buffer.\n\n");
	    printf("\nstd::cin.clear();\n");    
	    printf("std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');    //Clears entire input buffer.\n\n");
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void clearBuff() {
    char t[5][12] = {"void ", "(", "){", "}","();"};
    char name[SIZE];
    while (1) {
        printf("//Name function m for main.\n");
        printf("//");
        fgets(name,SIZE,stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("\n%s%s%s%s\n", t[0], name, t[1], t[2]);
        printf("    std::cin.clear();\n");
        printf("    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');\n");
	    printf("%s\n\n",t[3]);
	    printf("%s%s\n\n",name,t[4]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void map() {
    char t[8][20] = {"std::map", "<", "std::string", "int", "double", "> ", ",", " = {"};
    char b[7][15] = {"    {", "},", "}", "};", "\"", ",", " "};
    char key_type[SIZE];
    char value_type[SIZE];
    char name[SIZE];
    char key[SIZE];
    char key_t[SIZE];
    char value[SIZE];
    char value_t[SIZE];

    while (1) {
        printf("//Enter the name of the map m for main.\n");
        printf("//");
        fgets(name,SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter a key type, s for string, i for int d for double.\n");
        printf("//");
        fgets(key_type,SIZE, stdin);
        key_type[strcspn(key_type, "\n")] = 0;
	    if (strlen(key_type) >= MAX) {
            clear(); 
        } 
        if (strcmp(key_type, "s") != 0 && strcmp(key_type, "i") != 0 && strcmp(key_type, "d") != 0) {
            printf("Enter s i or d only.\n");
            continue;
        }
        if (strcmp(key_type, "s") == 0) {
            strcpy(key_type, t[2]);
        } else if (strcmp(key_type, "i") == 0) {
            strcpy(key_type, t[3]);
        } else if (strcmp(key_type, "d") == 0) {
            strcpy(key_type, t[4]);
        }
        printf("//Enter a value type, s for string, i for int d for double.\n");
        printf("//");
        while (fgets(value_type,SIZE, stdin)) {
            value_type[strcspn(value_type, "\n")] = 0;
	    if (strlen(value_type) >= MAX) {
                clear(); 
            } 
            if (strcmp(value_type, "s") != 0 && strcmp(value_type, "i") != 0 && strcmp(value_type, "d") != 0) {
                printf("//Enter s i or d only.\n");
            } else {
                break;
            }
        }
        if (strcmp(value_type, "s") == 0) {
            strcpy(value_type, t[2]);
        } else if (strcmp(value_type, "i") == 0) {
            strcpy(value_type, t[3]);
        } else if (strcmp(value_type, "d") == 0) {
            strcpy(value_type, t[4]);
        }
        printf("//Enter a key.\n");
        printf("//");
        fgets(key,SIZE, stdin);
        key[strcspn(key, "\n")] = 0;
	    if (strlen(key) >= MAX) {
                clear(); 
            } 
        printf("//Enter s if key is a string.\n");
        printf("//");
        fgets(key_t,SIZE, stdin);
        key_t[strcspn(key_t, "\n")] = 0;
	    if (strlen(key_t) >= MAX) {
            clear(); 
        } 
        printf("//Enter a value.\n");
        printf("//");
        fgets(value,SIZE, stdin);
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        } 
        printf("//Enter s if the value is a string.\n");
        printf("//");
        fgets(value_t,SIZE, stdin);
        value_t[strcspn(value_t, "\n")] = 0;
	    if (strlen(value_t) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s%s\n", t[0], t[1], key_type, t[6], value_type, t[5], name, t[7]);
        if (strcmp(key_t, "s") == 0) {
            printf("%s%s%s%s%s%s", b[0], b[4], key, b[4], b[5], b[6]);
        } else if (strcmp(key_t, "s") != 0) {
            printf("%s%s%s%s", b[0], key, b[5], b[6]);
        }
        if (strcmp(value_t, "s") == 0) {
            printf("%s%s%s%s\n", b[4], value, b[4], b[1]);
            printf("%s\n\n", b[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(value_t, "s") != 0) {
            printf("%s%s\n", value, b[1]);
            printf("%s\n\n", b[3]);
        }
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void mapAccess() {
    char t[9][20] = {"std::cout << ", "\\n", "\"", " << std::endl;", ";", ".at(", ")", "[", "]"};
    char string[4][20] = {" std::cout << \"", "\\n", "\";}", "\" << std::endl;}"};
    char var[SIZE];
    char name[SIZE];
    char text[SIZE];
    char em[SIZE];
    while (1) {
        printf("//Enter the name of the map m for main.\n");
        printf("//");
        fgets(name, SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//Enter the name of the variable.\n");
        printf("//");
        fgets(var,SIZE, stdin);
        var[strcspn(var, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        printf("To enter a key error message for exception press e.\n");
        printf("//Press enter to not enter a error message.\n");
        printf("//");
        fgets(em, SIZE, stdin);
        em[strcspn(em, "\n")] = 0;
	    if (strlen(em) >= MAX) {
            clear(); 
        } 
        if (strcmp(em, "e") != 0) {
            printf("\n%s%s%s%s%s%s\n\n", t[0], name, t[5], var, t[6], t[3]);
            printf("\n%s%s%s%s%s%s\n\n", t[0], name, t[7], var, t[8], t[3]);
            printf("\n%s%s%s%s      //Use with try catch.\n\n", name, t[5], var, t[6]);
            printf("\n%s%s%s%s\n\n", name, t[7], var, t[8]);
            printf("\n } \n\n");
            printf("\ntry{ \n\n");
            printf("\n }catch(std::out_of_range){      //For map key error.\n\n");
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        } else if (strcmp(em, "e") == 0) {
            printf("//Enter error message.\n");
            printf("//");
            fgets(text,SIZE, stdin);
            text[strcspn(text, "\n")] = 0;
        if (strlen(text) >= MAX) {
            clear(); 
        } 
            printf("\n%s%s%s%s%s%s\n\n", t[0], name, t[5], var, t[6], t[3]);
            printf("\n}\n\n");
            printf("\ntry{\n\n");
            printf("}catch(std::out_of_range){\n");
            printf("%s%s%s%s\n\n", string[0], text, string[1], string[2]);
            printf("}catch(std::out_of_range){\n");
            printf("%s%s%s\n\n", string[0], text, string[3]);
            if (strcmp(repeat, "r") != 0) {
                break;
            }
        }
    }
}

void variablep() {
    char f[2][20] = {"std::string ", ";"};
    char name[SIZE];

    while (1) {
        printf("//Enter name of variable m for main.\n");
        printf("//");
        fgets(name,SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("\n%s%s%s\n\n", f[0], name, f[1]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void variableValuep() {
    char v[4][20] = {"std::string ", " = ", "\"", ";"};
    char name[SIZE];
    char value[SIZE];
    while (1) {
        printf("//Enter a name of variable m for main.\n");
        printf("//");
        fgets(name,SIZE, stdin);
        name[strcspn(name, "\n")] = 0;
	    if (strlen(name) >= MAX) {
            clear(); 
        } 
        if (strcmp(name, "m") == 0) {
            break;
        }
        printf("//enter a value\n");
        printf("//");
        fgets(value,SIZE, stdin);
        value[strcspn(value, "\n")] = 0;
	    if (strlen(value) >= MAX) {
            clear(); 
        } 
        printf("\n%s%s%s%s%s%s%s\n\n", v[0], name, v[1], v[2], value, v[2], v[3]);
        if (strcmp(repeat, "r") != 0) {
            break;
        }
    }
}

void copyy() {
    printf("\n");
    printf("#include <iostream>\n");
    printf("\n");
    printf("#include <string>\n");
    printf("\n");
    printf("#include <map>\n");
    printf("\n");
    printf("#include <limits>\n");
    printf("\n");
    printf("#include <cstdio>\n");
    printf("\n");
    printf("#include <cstring>\n");
    printf("\n");
    printf("#include <cstdlib>\n");
    printf("\n");
    printf("int main() {\n");
    printf("\n");
    printf("while(true) {\n");
    printf("\n");
    printf("else{\n");
    printf("\n");
    printf("} else {\n");
    printf("\n");
    printf("break;\n");
    printf("\n");
    printf("break;}\n");
    printf("\n");
    printf("continue;\n");
    printf("\n");
    printf("continue;}\n");
    printf("\n");
    printf("try {\n");
    printf("\n");
    printf("}catch(std::out_of_range){\n");
    printf("\n");
    printf("std::cin.clear();\n");
    printf("std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\\n');\n");
    printf("\n");
    printf("        }\n");
    printf("}\n");
    printf("return 0;\n");
    printf("}\n");
    printf("\n");
}

int main() {
    std::map<std::string, std::function<void()>> f = {
        {"ch",          choice},
        {"cy",            copy},
        {"a",           string}, 
        {"c",      stringEmpty},  
        {"f",           fgetss},
        {"fs",     fgetsSizeof},
	    {"fb",     fgetsBuffer},
        {"s",           scanff},      
        {"sb",      scanfBasic}, 
	    {"cb",      clearBuffC},
        {"i",      ifStatement},
        {"e",           elseIf},
        {"mi",         multiIf},	
        {"in",        ifNumber},   
        {"im",          ifHeap},          
        {"v",         variable},    
        {"vv",   variableValue}, 
        {"aa",           array},      
        {"ia",        numArray},   
        {"fc",           funct},
        {"cf",       callFunct},  
        {"h",             heap},        
        {"hi",         heapNum},         
        {"cm",     checkMalloc}, 
        {"vi",     variableNum},   
        {"vn",      varNoValue}, 
        {"si",        scanfNum},   
        {"sh",       scanfHeap},
        {"sc",      checkScanf},
	    {"csl",    checkScanfL},
        {"sp",      cppStrings}, 
        {"cp",        estringp},        
        {"aap",        arraysp},    
        {"ip",    ifStatementp},  
        {"ep",         elseIfp},
        {"mip",     multiIfCpp},	
        {"up",       userInput},
        {"cbp",      clearBuff},	
        {"mp",             map},
        {"ma",       mapAccess},  
        {"vp",       variablep},  
        {"vvp", variableValuep}, 
        {"cyp",          copyy},
    };

    char sw[100];

    printf("\n\n");
    printf("          copyright 2025 Mitchell E Wise\n");
    printf("          SPDX-License-Identifier: Apache-20\n\n\n");

    printf("//Enter r to repeat choices enter to not.\n");
    while(fgets(repeat,sizeof(repeat), stdin) == NULL) {
	    checkInput();
	}
    repeat[strcspn(repeat, "\n")] = 0;
    if (strlen(repeat) >= 99) {
        clear(); 
    } 
    choice();
    while (1) {
        printf("//Enter a selection from choices x to exit ch for choices.\n");
        printf("//");
        while(fgets(sw,sizeof(sw), stdin) == NULL) {
		    checkInput();
		}
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(repeat) >= 99) {
            clear();  
        } else if (strcmp(sw, "x") == 0) {
            break;
        }
        auto c = f.find(sw);
        if (c != f.end()) {
            (*c).second();
        } else {
            printf("//Enter a letter in choices.\n\n");
        }
    }
    return 0;
}

