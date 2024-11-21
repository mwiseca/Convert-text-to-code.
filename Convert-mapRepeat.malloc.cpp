//Copyright 2023-2024 Mitchell E Wise 
//SPDX-License-Identifier: Apache-20 


#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

                                 char repeat [2000];
                                     
void choice(){
 printf("//Enter ch for choices.\n");
 printf("//Enter a for strings.\n");
 printf("//Enter aa for arrays.\n");
 printf("//Enter ia for arrays with numbers C C++.\n");
 printf("//Enter c for strings with no quotation marks.\n");
 printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
 printf("//Enter i for if statements e for else if for strings.\n");
 printf("//Enter in for if and else if statements for numbers C-C++.\n");
 printf("//Enter im for if and else if statements for numbers if malloc is used.\n");
 printf("//Enter f for fgets.\n");
 printf("//Enter s for scanf for strings to allow for white spaces.\n");
 printf("//Enter sb for scanf basic no white spaces.\n");
 printf("//Enter si for scanf for integers and doubles.\n");
 printf("//Enter sh for scanf for ints and doubles on the heap.\n");
 printf("//Enter sc for check scanf.\n");
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
 printf("//Enter up for C++ user input.\n");
 printf("//Enter mp to start a C++ map.\n");
 printf("//Enter ma for map acces C++.\n");
 printf("//Enter vp for string variables no value C++.\n");
 printf("//Enter vvp for string variables with a value c++.\n");
 printf("//Enter cyp for what's needed to copy and paste to finish a simple C++ program.\n"); 
 }


void string(){
char string  [3] [15] = {"printf(\"", "\\n","\");"};
    char *text;
    printf("//Enter your string, m for main.\n");
    while (1){
    text = (char*)malloc(2000* sizeof(char));
    if(text == NULL){
        printf("Error: Insufficent memory.\n");
	exit(1);}
    printf("//");
    fgets(text,2000,stdin);
    text[strcspn(text,"\n")]=0;
    if (strcmp(text,"m")==0){
    free(text);
    text = NULL;
    break;}
    printf("\n%s%s%s%s\n\n",string[0],text,string[1], string[2]);
    printf("%s%s%s\n\n",string[0],text,string[2]);
    free(text);
    text == NULL; 
    if(strcmp(repeat,"r")!=0){
        break;}
         }
}


void stringEmpty(){
    char t [2] [12] = {"printf(", ");"};
    char *text;
    
 printf("//Enter text m for main.\n");   
 while(1){
 text = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
     printf("Error: Insufficiant memory.\n");
     exit(1);}
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 free(text);
 text == NULL;
 break;}
 printf("\n%s%s%s\n\n",t[0],text,t[1]);
 free(text);
 text == NULL;
    if(strcmp(repeat,"r")!=0){ 
     break;}   
     }
}


void fgetss(){
         char f  [8] [15] = {"fgets(", ",", "stdin);", "[strcspn(","\"\\n", "\")]=0;","[strlen(",")-1] = '\\0';"};
	 char w  [9] [15] = {"while(fgets(", ",", "stdin)){", "[strcspn(","\"\\n", "\")]=0;","[strlen(",")-1] = '\\0';","      "};
     char *v;
     char *me;

 while (1){
 v = (char*)malloc(2000* sizeof(char));
 me = (char*)malloc(2000* sizeof(char));
 if(v == NULL || me == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(v,2000,stdin);
 v[strcspn(v,"\n")]=0;
 if (strcmp(v,"m")==0){
 free(v);
 v == NULL;
 free(me);
 me == NULL;
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(me,2000,stdin);
 me[strcspn(me,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s%s%s\n\n", v, f[3], v, f[1], f[4] ,f[5]);
 printf("%s%s%s%s%s%s\n",w[0], v,w[1],me, w[1],w[2]);
 printf("%s%s%s%s%s%s%s\n\n",w[8],v,w[3],v,w[1],w[4],w[5]);
 printf("\n%s%s%s%s%s%s\n",f[0], v, f[1],me,f[1],f[2]);
 printf("%s%s%s%s\n\n", v,f[6],v,f[7]);
 free(v);
 v = NULL;
 free(me);
 me = NULL; 
    if(strcmp(repeat,"r")!=0){ 
     break;} 
     }
}


void scanff(){
         char t [6] [15] = {"scanf(\"","%","[^\\n]\"",",",");","getchar();"};
         char *var;
	 char *mem;

 while(1){
 var = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 if(var == NULL || mem == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n"); 
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 printf("%s\n\n",t[5]);
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;}
     }  
}


void scanfBasic(){
	 char t [5] [15] = {"scanf(\"","%","s\"",", ", ");"};
         char *var;
         char *mem;
   
 while(1){
 var = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 if(var == NULL || mem == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of variable m for main.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(var);
 var = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory allocated to variable -1 byte.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",t[0],t[1],mem,t[2],t[3],var,t[4]);
 free(var);
 var = NULL;
 free(mem);
 mem = NULL; 
    if(strcmp(repeat,"r")!=0){  
     break;}
   }
}


void ifStatement(){
char f  [4] [15] = {"if(strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;
	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
 if(name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter name of the if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;} 
      }
}


void elseIf(){
     char f  [4] [18] = {"}else if(strcmp(",   ",",  "\"", ")==0){"};
     char *name;
     char *value;

 while (1){
 name = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
 if(name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter name of the else if statement m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", f[0], name, f[1], f[2],  value, f[2],  f[3] );
 free(name);
 name = NULL;
 free(value);
 value = NULL;
    if(strcmp(repeat,"r")!=0){ 
     break;}
     }
}


void ifNumber(){
       char t [10] [20] = {"if(", "}else if(","strlen"," <= ", " == "," >= "," != ","(",")","){"};
       char *select;
       char *var;
       char *op;
       char *num;
 while(1){
 select = (char*)malloc(2000* sizeof(char));
 var = (char*)malloc(2000* sizeof(char));
 op = (char*)malloc(2000* sizeof(char));
 num = (char*)malloc(2000* sizeof(char));
 if(select == NULL || var == NULL || op == NULL || num == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter s for strlen  or i for regular if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"s")!=0 && strcmp(select,"i")!=0 && strcmp(select,"e")!=0){ 
 printf("//Enter s or i or e only.\n");
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 while(fgets(op,1000,stdin)){
       op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");}
 else{
      break;}
 }
 if(strcmp(op,"a")==0){
  strcpy(op,t[3]);
}else if(strcmp(op,"b")==0){
  strcpy(op,t[4]);
}else if(strcmp(op,"c")==0){
 strcpy(op,t[5]);
}else if(strcmp(op,"d")==0){
 strcpy(op,t[6]);}
 printf("//Enter a number to compare to.\n");
 printf("//");
 fgets(num,1000,stdin);
 num[strcspn(num,"\n")]=0;
 if(strcmp(select,"s")==0){
 printf("\n%s%s%s%s%s%s%s%s\n\n",t[0],t[2],t[7],var,t[8],op,num,t[9]);
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;
 if(repeat != "r"){
     break;}
 }else if(strcmp(select,"i")==0){
  printf("\n%s%s%s%s%s\n\n",t[0],var,op,num,t[9]);
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL; 
    if(strcmp(repeat,"r")!=0){  
     break;}
 }else if(strcmp(select,"e")==0){
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[9]);
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL; 
    if(strcmp(repeat,"r")!=0){  
     break;}
         }
    }
 }


void ifHeap(){
     char t [9] [20] = {"if(*", "}else if(*"," <= ", " == "," >= "," != ","(",")","){"};
       char *select;
       char *var;
       char *op;
       char *num;
 while(1){
 select = (char*)malloc(2000* sizeof(char));
 var = (char*)malloc(2000* sizeof(char));
 op = (char*)malloc(2000* sizeof(char));
 num = (char*)malloc(2000* sizeof(char));
 if(select == NULL || var == NULL || op == NULL || num == NULL){ 
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter i for if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"i")!=0 && strcmp(select,"e")!=0){  
 printf("//Enter i or e only.\n");
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL; 
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL; 
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 while(fgets(op,1000,stdin)){
       op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");}
 else{
      break;}
 }
 if(strcmp(op,"a")==0){
  strcpy(op,t[2]);
}else if(strcmp(op,"b")==0){
  strcpy(op,t[3]);
}else if(strcmp(op,"c")==0){
 strcpy(op,t[4]);
}else if(strcmp(op,"d")==0){
 strcpy(op,t[5]);}
 printf("//Enter a number to compare to.\n");
 printf("//");
 fgets(num,1000,stdin);
 num[strcspn(num,"\n")]=0;
  if(strcmp(select,"i")==0){
  printf("\n%s%s%s%s%s\n\n",t[0],var,op,num,t[8]);
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;   
 if(strcmp(repeat,"r")!=0){  
     break;}
 }else if(strcmp(select,"e")==0){
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[8]);
 free(select);
 select = NULL;
 free(var);
 var = NULL;
 free(op);
 op = NULL;
 free(num);
 num = NULL;  
    if(strcmp(repeat,"r")!=0){  
     break;}
        } 
    }
}


void variable(){
  char f  [3] [15] = {"char "," [","];"};
     char *name;
     char *mem;
    	
 while (1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 if(name == NULL || mem == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter the memory to be allocated to the variable.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n",f[0],name,f[1],mem,f[2]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;} 
    }    
}


void variableValue(){
       char v [6] [15] ={"char ","[","]"," = ","\"",";"};
       char *name;
       char *mem;
       char *value;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
 if(name == NULL || mem == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter a name of variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter the amount of memory to allocate or press enter to not allocate m for main.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("//enter a value\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",v[0],name,v[1],mem,v[2],v[3],v[4],value,v[4],v[5]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 free(value);
 value = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;}
     }
}


void array(){
char t [5] [15] = {"char "," [","] ", "] = {","};"};
	char *name;
	char *ne;
	char *m;
	char *elements;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 ne = (char*)malloc(2000* sizeof(char));
 m = (char*)malloc(2000* sizeof(char));
 elements = (char*)malloc(2000* sizeof(char));
 if(name == NULL || ne == NULL || m == NULL || elements == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(m);
 m = NULL;
 free(elements);
 elements = NULL;
 break;}
 printf("//Enter the amount of elements.\n");
 printf("//");
 fgets(ne,2000,stdin);
 ne[strcspn(ne,"\n")]=0;
 printf("//Enter memory allocated to elements.\n");
 printf("//");
 fgets(m,2000,stdin);
 m[strcspn(m,"\n")]=0;
 printf("//Enter elements with quotations and commas between each.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s%s%s\n\n",t[0],name,t[1],ne,t[2],t[1],m,t[3],elements,t[4]);
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(m);
 m = NULL;
 free(elements);
 elements = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;}	
      }
}


void numArray(){
       char a [6] [20] = {"int ","double ", "[","]"," = {","};"};
	char *typ;
	char *name;
	char *num;
	char *elements; 

 while(1){
 typ = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 num = (char*)malloc(2000* sizeof(char));
 elements = (char*)malloc(2000* sizeof(char));
 if(typ == NULL || name == NULL || num == NULL || elements == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter a data type i for int d for double.\n");
 printf("//");
 while(fgets(typ,2000,stdin)){
      typ[strcspn(typ,"\n")]=0; 
 if(strcmp(typ,"i")!=0 && strcmp(typ,"d")!=0){ 
 printf("//Enter i or d.\n");}
 else{
     break;}
 }
 if(strcmp(typ,"i")==0){
  strcpy(typ,a[0]);
 }else if(strcmp(typ,"d")==0){
  strcpy(typ,a[1]);}
 printf("//Enter the name of the array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(typ);
 typ = NULL;
 free(name);
 name = NULL;
 free(num);
 num = NULL;
 free(elements);
 elements = NULL;
 break;}
 printf("//Enter number of elements m for main.\n");
 printf("//"); 
 fgets(num,2000,stdin);
 num[strcspn(num,"\n")]=0;
 printf("//Enter elements with a comma between them.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("%s%s%s%s%s%s%s%s\n",typ,name,a[2],num,a[3],a[4],elements,a[5]);
 free(typ);
 typ = NULL;
 free(name);
 name = NULL;
 free(num);
 num = NULL;
 free(elements);
 elements = NULL;
    if(strcmp(repeat,"r")!=0){  
     break;} 
         }
}


void funct(){
      char t [4] [12] = {"void ","(","){","}"};
      char *name;
      char *per;
 
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 per = (char*)malloc(2000* sizeof(char));
 if(name == NULL || per == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Name function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 break;}
 printf("//Enter parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n\n%s\n\n",t[0],name,t[1],per,t[2],t[3]);
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 if(strcmp(repeat,"r")!=0){   
     break;}
     }
}


void callFunct(){
      char t [2] [12] = {"(",");"};
      char *name;
      char *per;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 per = (char*)malloc(2000* sizeof(char));
 if(name == NULL || per == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 break;}
 printf("//Enter values for parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s\n\n",name,t[0],per,t[1]);
 free(name);
 name = NULL;
 free(per);
 per = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;}
     }
}


void heap(){
	char t [9] [18] = {"char"," *",";"," = (char*)malloc","(",");","* sizeof(char));","free"," = NULL;"};
        char *name;
	char *mem;
	
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 if(name == NULL || mem == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory to allocate.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n");
 printf("\n%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[5]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s\n",t[7],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[8]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;}	
        }
}	


void heapNum(){
	char t [15] [20] = {"int"," *",";"," = (int*)malloc","(",");","* sizeof(int));","free"," = NULL;","double","float", " = (double*)malloc"," = (float*)malloc","* sizeof(double));","* sizeof(float));"};
        char *name;
	char *mem;
	
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 mem = (char*)malloc(2000* sizeof(char));
 if(name == NULL || mem == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name of the variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 break;}
 printf("//Enter memory to allocate.\n");
 printf("//");
 fgets(mem,2000,stdin);
 mem[strcspn(mem,"\n")]=0;
 printf("\n");
 printf("%s%s%s%s\n\n",t[0],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",t[9],t[1],name,t[2]);
 printf("%s%s%s%s\n\n",t[10],t[1],name,t[2]);
 printf("%s%s%s%s%s\n\n",name,t[3],t[4],mem,t[6]);
 printf("%s%s%s%s%s\n\n",name,t[11],t[4],mem,t[13]);
 printf("%s%s%s%s%s\n\n",name,t[12],t[4],mem,t[14]);
 printf("%s%s%s%s\n",t[7],t[4],name,t[5]);
 printf("%s%s\n\n",name,t[8]);
 free(name);
 name = NULL;
 free(mem);
 mem = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;}
       }
}


void checkMalloc(){
               char t [6] [18] = {"if("," == NULL){","    printf(\"", "\\n","\");","    exit(1);}"};
               char *name;
	       char *em;
 while(1){
 name = (char*)malloc(2000* sizeof(char));
 em = (char*)malloc(2000* sizeof(char));
 if(name == NULL || em == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Enter the name m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(em);
 em = NULL;
 break;}
 printf("//Enter an error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 printf("\n%s%s%s\n",t[0],name,t[1]);
 printf("%s%s%s%s\n",t[2],em,t[3],t[4]);
 printf("%s\n\n",t[5]);
 free(name);
 name = NULL;
 free(em);
 em = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;}
    }
}


void variableNum(){
       char t [5] [15] = {"double ","int "," = ", ";", " ;"};
        char *ch;
        char *name;
        char *value;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
 if(ch == NULL || name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 printf("Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s\n\n",t[1],name,t[2],value,t[3]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;} 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],name,t[2],value,t[3]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 free(value);
 value = NULL;
    if(strcmp(repeat,"r")!=0){ 
     break;}	
         }
    }
}


void varNoValue(){
       char t [3] [15] = {"double ","int ", ";"};
        char *ch;
        char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 if(ch == NULL || name == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s\n\n",t[1],name,t[2]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;} 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s\n\n",t[0],name,t[2]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;}	
        }
   }
}


void scanfNum(){
      char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ","," &", ");"};
      char *ch;
      char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 if(ch == NULL || name == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Choose i for int d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[1],t[3],t[4],name,t[5]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 if(strcmp(repeat,"r")!=0){ 
     break;}
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 if(strcmp(repeat,"r")!=0){    
     break;}	
         }
    }
}


void scanfHeap(){
     char t [6] [15] = {"scanf(\"", "\%d\"",  "\%lf\"", ",",");","\%f\"",};
       char *ch;
       char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 if(ch == NULL || name == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Choose i for int f for float or d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "f")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i, f, d  or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[1],t[3],name,t[4]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;  
 if(strcmp(repeat,"r")!=0){   
     break;}
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[2],t[3],name,t[4]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;}
}else if (strcmp(ch,"f")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],t[5],t[3],name,t[4]);
 free(ch);
 ch = NULL;
 free(name);
 name = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;}	
         }
    }
}


void checkScanf(){
       char t [7] [15] = {"if(scanf(\"", "\%d\"",  "\%lf\"", ","," &", ")!=1){","while(scanf(\""};
       char *ch;
       char *name;
 while(1){
 ch = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 if(ch == NULL || name == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);}
 printf("//Choose i for int d for double or m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 continue;}
 printf("//Enter the name of variable.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if (strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[1],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[0],t[1],t[3],name,t[5]); 
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[1],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[6],t[1],t[3],name,t[5]); 
 if(strcmp(repeat,"r")!=0){ 
 printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
     break;}
}else if (strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s%s\n\n",t[0],t[2],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[0],t[2],t[3],name,t[5]);
 printf("\n%s%s%s%s%s%s\n\n",t[6],t[2],t[3],t[4],name,t[5]);
 printf("\n%s%s%s%s%s    //Use with malloc.\n\n",t[6],t[2],t[3],name,t[5]);} 
 printf("\ncontinue;}\n\nbreak;}\n\nexit(1);}\n\n__fpurge(stdin);\n\nfflush(stdin);\n\n}\n\n");
 free(ch);
 ch = NULL;
 free(name);
 name = NULL;
 if(strcmp(repeat,"r")!=0){  
     break;} 
      }
}


void copy(){
 printf("\n");
 printf("#include <stdio.h>\n");
 printf("\n");
 printf("#include <stdio_ext.h>\n");
 printf("\n");
 printf("#include <string.h>\n");
 printf("\n");
 printf("#include <stdlib.h>\n");
 printf("\n"); 
 printf("while(1){\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("break;}\n");
 printf("\n");
 printf("continue;\n");
 printf("\n");
 printf("continue;}\n");
 printf("\n");
 printf("int main(){\n");
 printf("\n");
 printf("fflush(stdin);\n");
 printf("\n");
 printf("__fpurge(stdin);\n");
 printf("\n");
 printf("getchar();\n");
 printf("\n");
 printf("}else{\n");
 printf("\n");
 printf("else{\n");
 printf("\n");
 printf("    }\n");
 printf("}\n");
 printf("return 0;\n");
 printf("}\n");
 printf("\n"); 
}


void cppStrings(){
        char string  [4] [20] = {"std::cout << \"", "\\n","\";","\" << std::endl;"};
        char *text;
 printf("//Enter your string, m for main.\n");
 while (1){
 text  = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s%s\n\n",string[0],text,string[1],string[2]);
 printf("\n%s%s%s\n\n",string[0],text,string[2]);
 printf("\n%s%s%s\n\n",string[0],text, string[3]);
 free(text);
 text = NULL;
 if(strcmp(repeat,"r")!=0){   
     break;}  
        }
}


void estringp(){
    char t [5]  [20] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";"};
    char *text;
    
 printf("//Enter text m for main.\n");   
 while(1){
 text  = (char*)malloc(2000* sizeof(char));
 if(text == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 free(text);
 text = NULL;
 break;}
 printf("\n%s%s%s\n\n", t[0] , text , t[3]);
 free(text);
 text = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;} 
     }
 }


void arraysp(){
	char t [4]  [20] = {"std::string "," [", "] = {","};"};
        char *name;
	char *ne;
	char *elements;
 while(1){
 name  = (char*)malloc(2000* sizeof(char));
 ne  = (char*)malloc(2000* sizeof(char));
 elements  = (char*)malloc(2000* sizeof(char)); 
 if(name == NULL || ne == NULL || elements == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter the name of array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(elements);
 elements = NULL;
 break;}
 printf("//Enter the amount of elements.\n");
 printf("//");
 fgets(ne,2000,stdin);
 ne[strcspn(ne,"\n")]=0;
 printf("//Enter elements with quotations and commas between each.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", t[0] , name , t[1] , ne , t[2] , elements , t[3]);
 free(name);
 name = NULL;
 free(ne);
 ne = NULL;
 free(elements);
 elements = NULL;
 if(strcmp(repeat,"r")!=0){   
     break;} 
     }
 }


void ifStatementp(){
                  char f  [4] [15] = {"if(", " == ",  "\"", "){"};
   	 char *name;
         char *value;
 
 while(1){
 name  = (char*)malloc(2000* sizeof(char));
 value  = (char*)malloc(2000* sizeof(char));
 if(name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter name of the if statement m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",f[0] , name , f[1] , f[2] , value , f[2] , f[3]);
 free(name);
 name = NULL;
 free(value);
 value = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;} 
        }
}


void elseIfp(){
                  char f  [4] [15] = {"}else if(", " == ",  "\"", "){"};
   	 char *name;
         char *value;
 
 while(1){
 name  = (char*)malloc(2000* sizeof(char));
 value  = (char*)malloc(2000* sizeof(char));
 if(name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter name of the else if statement m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL; 
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",f[0] , name , f[1] , f[2] , value , f[2] , f[3]); 
 free(name);
 name = NULL;
 free(value);
 value = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;} 
      }
 }


void userInput(){
          char f  [7] [20] = {"std::","getline(","std::cin", ",", ");","std::cin >> ",";"};
        char *v;
  
   while (1){
 v  = (char*)malloc(2000* sizeof(char));
 if(v == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
   printf("//Enter name of variable m for main.\n");
   printf("//");
   fgets(v,2000,stdin);
   v[strcspn(v,"\n")]=0;
   if(strcmp(v,"m")==0){
   free(v);
   v = NULL;
   break;}
   printf("\n%s%s%s%s%s\n\n", f[1] , f[2] , f[3] , v , f[4]);
   printf("\n%s%s%s%s%s%s\n\n",f[0] , f[1] , f[2] , f[3] , v , f[4]);
   printf("\n%s%s%s\n\n", f[5] , v , f[6]);
   printf("\nstd::cin.clear();");
   printf("\nstd::cin.ignore(2000, '\\n');     //Clears input buffer.\n\n");
   free(v);
   v = NULL;
 if(strcmp(repeat,"r")!=0){     
       break;} 
       }
}


void map(){
  char t [8] [20] = {"std::map","<","std::string","int","double","> ",",", " = {"};
 char b [7]  [15] = {"    {", "}," , "}", "};", "\"", ","," "};
                 char *key_type;
		 char *value_type;
		 char *name;
		 char *key;
		 char *key_t;
		 char *value;
		 char *value_t;
		 
 while(1){
 key_type = (char*)malloc(2000* sizeof(char));
 value_type = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 key = (char*)malloc(2000* sizeof(char));
 key_t = (char*)malloc(2000* sizeof(char));
 value = (char*)malloc(2000* sizeof(char));
 value_t = (char*)malloc(2000* sizeof(char));
 if(key_type == NULL || value_type == NULL || name == NULL || key == NULL || key_t == NULL || value == NULL || value_t == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter the name of the map m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(key_type);
 key_type = NULL;
 free(value_type);
 value_type = NULL;
 free(name);
 name = NULL;
 free(key);
 key = NULL;
 free(key_t);
 key_t = NULL;
 free(value);
 value = NULL;
 free(value_t);
 value_t = NULL;
 break;}
 printf("//Enter a key type, s for string, i for int d for double.\n");
 printf("//");
 fgets(key_type,2000,stdin);
 key_type[strcspn(key_type,"\n")]=0;
if(strcmp(key_type,"s")!=0 && strcmp(key_type,"i")!=0 && strcmp(key_type, "d")!=0){
 printf("Enter s i or d only.\n");
 free(key_type);
 key_type = NULL;
 free(value_type);
 value_type = NULL;
 free(name);
 name = NULL;
 free(key);
 key = NULL;
 free(key_t);
 key_t = NULL;
 free(value);
 value = NULL;
 free(value_t);
 value_t = NULL;
 continue;}
 if(strcmp(key_type,"s")==0){
 strcpy(key_type,t[2]);
}else if(strcmp(key_type, "i")==0){
 strcpy(key_type,t[3]);
}else if(strcmp(key_type,"d")==0){
 strcpy(key_type,t[4]);}
 printf("//Enter a value type, s for string, i for int d for double.\n");
 printf("//");
 while(fgets(value_type,2000,stdin)){
       value_type[strcspn(value_type,"\n")]=0;
 if(strcmp(value_type,"s")!=0 && strcmp(value_type, "i")!=0 && strcmp(value_type, "d")!=0){
 printf("//Enter s i or d only.\n");}
 else{
     break;}
 }
 if(strcmp(value_type,"s")==0){
 strcpy(value_type,t[2]);
}else if(strcmp(value_type,"i")==0){
 strcpy(value_type,t[3]);
}else if(strcmp(value_type,"d")==0){
 strcpy(value_type,t[4]);}
 printf("//Enter a key.\n");
 printf("//");
 fgets(key,2000,stdin);
 key[strcspn(key,"\n")]=0;
 printf("//Enter s if key is a string.\n");
 printf("//");
 fgets(key_t,2000,stdin);
 key_t[strcspn(key_t,"\n")]=0; 
 printf("//Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("//Enter s if the value is a string.\n");
 printf("//");
 fgets(value_t,2000,stdin);
 value_t[strcspn(value_t, "\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s\n",t[0], t[1], key_type, t[6], value_type , t[5] , name, t[7]);  
 if(strcmp(key_t, "s")==0){
 printf("%s%s%s%s%s%s", b[0] , b[4] , key , b[4] , b[5] ,  b[6]);
}else if(strcmp(key_t,"s")!=0){
 printf("%s%s%s%s", b[0] , key , b[5], b[6]);}
 if(strcmp(value_t, "s")==0){
 printf("%s%s%s%s\n", b[4] , value , b[4] , b[1]);
 printf("%s\n\n", b[3]);
 free(key_type);
 key_type = NULL;
 free(value_type);
 value_type = NULL;
 free(name);
 name = NULL;
 free(key);
 key = NULL;
 free(key_t);
 key_t = NULL;
 free(value);
 value = NULL;
 free(value_t);
 value_t = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;} 
}else if(strcmp(value_t,"s")!=0){
 printf("%s%s\n", value , b[1]);
 printf("%s\n\n", b[3]);}
 free(key_type);
 key_type = NULL;
 free(value_type);
 value_type = NULL;
 free(name);
 name = NULL;
 free(key);
 key = NULL;
 free(key_t);
 key_t = NULL;
 free(value);
 value = NULL;
 free(value_t);
 value_t = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;} 
     }
}


void mapAccess(){
    char t [9][20] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";", ".at(", ")","[","]"};
  char string [4] [20] = {" std::cout << \"", "\\n","\";}","\" << std::endl;}"};
             char *var;
	     char *name;
             char *text;
	     char *em;
 while(1){
 var = (char*)malloc(2000* sizeof(char));
 name = (char*)malloc(2000* sizeof(char));
 text = (char*)malloc(2000* sizeof(char));
 em = (char*)malloc(2000* sizeof(char));
 if(var == NULL || name == NULL || text == NULL || em == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter the name of the map m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name, "m")==0){
 free(var);
 var = NULL;
 free(name);
 name = NULL;
 free(text);
 text = NULL;
 free(em);
 em = NULL;
 break;}
 printf("//Enter the name of the variable.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 printf("To enter a key error message for exception press e.\n");
 printf("//Press enter to not enter a error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 if(strcmp(em, "e")!=0){ 
 printf("\n%s%s%s%s%s%s\n\n" , t[0] , name , t[5] , var, t[6] , t[3]);
 printf("\n%s%s%s%s%s%s\n\n", t[0] , name , t[7] , var , t[8], t[3]);
 printf("\n%s%s%s%s      //Use with try catch.\n\n",  name , t[5] , var ,t[6]);
 printf("\n%s%s%s%s\n\n", name , t[7] , var , t[8]);
 printf("\n } \n\n");
 printf("\ntry{ \n\n");
 printf("\n }catch(std::out_of_range){      //For map key error.\n\n");
 free(var);
 var = NULL;
 free(name);
 name = NULL;
 free(text);
 text = NULL;
 free(em);
 em = NULL;
 if(strcmp(repeat,"r")!=0){   
     break;}
 }else if(strcmp(em, "e")==0){
 printf("//Enter error message.\n");
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n\n", t[0] , name , t[5] ,var ,t[6] , t[3]);
 printf("\n}\n\n");
 printf("\ntry{\n\n");
 printf("}catch(std::out_of_range){\n");  
 printf("%s%s%s%s\n\n",string[0] , text , string[1] , string[2]);
 printf("}catch(std::out_of_range){\n");  
 printf("%s%s%s\n\n", string[0] ,  text , string[3]);
 free(var);
 var = NULL;
 free(name);
 name = NULL;
 free(text);
 text = NULL;
 free(em);
 em = NULL; 
 if(strcmp(repeat,"r")!=0){   
     break;}  
        }
     }
} 


void variablep(){
     char f  [2] [20] = {"std::string ",";"};
     char *name;
    	
 while (1){
 name  = (char*)malloc(2000* sizeof(char));
 if(name == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0; 
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 break;}
 printf("\n%s%s%s\n\n", f[0] , name , f[1]);
 free(name);
 name = NULL;
 if(strcmp(repeat,"r")!=0){   
     break;}  
     }
}


void variableValuep(){
       char v [4] [20] = {"std::string "," = ","\"",";"};
       char *name;
       char *value; 
 while(1){
 name  = (char*)malloc(2000* sizeof(char));
 value  = (char*)malloc(2000* sizeof(char));
 if(name == NULL || value == NULL){
     printf("Error: Insufficent memory.\n");
     exit(1);} 
 printf("//Enter a name of variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 free(name);
 name = NULL;
 free(value);
 value = NULL;
 break;}
 printf("//enter a value\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", v[0] , name , v[1] ,  v[2] , value , v[2] , v[3]);
 free(name);
 name = NULL;
 free(value);
 if(strcmp(repeat,"r")!=0){   
     break;}  
      }
 }


void copyy(){
 printf("\n");
 printf("#include <iostream>\n");
 printf("\n");
 printf("#include <string>\n");
 printf("\n");
 printf("#include <map>\n");
 printf("\n");
 printf("#include <cstdio>\n");
 printf("\n");
 printf("#include <cstring>\n");
 printf("\n");
 printf("#include <cstdlib>\n");
 printf("\n");
 printf("int main(){\n");
 printf("\n");
 printf("while(true){\n");
 printf("\n");
 printf("else{\n");
 printf("\n");
 printf("}else{\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("break;}\n");
 printf("\n");
 printf("continue;\n");
 printf("\n");
 printf("continue;}\n");
 printf("\n");
 printf("try{\n");
 printf("\n");
 printf("}catch(std::out_of_range){\n");
 printf("\n");
 printf("        }\n");
 printf("}\n");
 printf("return 0;\n");
 printf("}\n");
 printf("\n"); 
}


int main(){               
std::map<std::string, std::function<void()> > f = { 
	 {"ch",          choice},
	 {"cy",            copy},
	 {"a",           string},
	 {"c",      stringEmpty},
	 {"f",           fgetss},
	 {"s",           scanff},
 	 {"sb",      scanfBasic},
	 {"i",      ifStatement},
	 {"e",           elseIf},
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
         {"sp",      cppStrings}, 	 
	 {"cp",        estringp}, 
	 {"aap",        arraysp}, 
	 {"ip",    ifStatementp},
	 {"ep",         elseIfp},
	 {"up",       userInput},
	 {"mp",             map},
	 {"ma",       mapAccess},
	 {"vp",       variablep},
	 {"vvp", variableValuep},
	 {"cyp",          copyy},
};

           char sw [2000];

 printf("\n\n"); 
 printf("          copyright 2024 Mitchell E Wise\n"); 
 printf("          SPDX-License-Identifier: Apache-20\n\n\n"); 
  

 printf("//Enter r to repeat choices enter to not.\n");
 fgets(repeat,2000,stdin);
 repeat[strcspn(repeat,"\n")]=0;

 choice();
 while(1){
 printf("//Enter a selection from choices x to exit ch for choices.\n");
 printf("//");
 fgets(sw,2000,stdin);
 sw[strcspn(sw,"\n")]=0;
 if(strcmp(sw,"x")==0){
 break;}
 auto c = f.find(sw);
 if(c != f.end()){
 (*c).second();}
 else{
     printf("//Enter a letter in choices.\n\n");}
 }
return 0;
}


          
