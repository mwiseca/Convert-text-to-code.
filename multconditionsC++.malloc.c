// Copyright 2023-2024 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    char t[8] [20] ={"if(","} else if("," == ", " != ","\""," && "," || ",") {"};
    char *select;
    char *name;
    char *value;
    char *op;
    char *compare;
    char *sname;
    char *svalue;
    char *scompare;

    while (1) {
	select = (char*)malloc(2000* sizeof(char));
	name = (char*)malloc(2000* sizeof(char));
	value = (char*)malloc(2000* sizeof(char));
	op = (char*)malloc(2000* sizeof(char));
	compare = (char*)malloc(2000* sizeof(char));
	sname = (char*)malloc(2000* sizeof(char));
	svalue = (char*)malloc(2000* sizeof(char));
	scompare = (char*)malloc(2000* sizeof(char));
        if ( select == NULL || name == NULL || value == NULL || op == NULL || compare == NULL || sname == NULL || svalue == NULL || scompare == NULL) {
	    printf("Error: Insuffecent memory.\n");
            exit(1);}	    
        printf("//Enter i for if, e for else if.\n");
	printf("//");
        while (fgets(select, 2000, stdin)) {
            select[strcspn(select, "\n")] = 0;
            if (strcmp(select, "i") != 0 && strcmp(select, "e") != 0) {
                printf("//Enter i or e only.\n");
		printf("//");
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
        fgets(name, 2000, stdin);
        name[strcspn(name, "\n")] = 0;
        if (strcmp(name, "m") == 0) {
            free(select);
            select = NULL;
            free(name);
	    name = NULL;
	    free(value);
	    value = NULL;
	    free(op);
	    op = NULL;
	    free(compare);
	    compare = NULL;
            free(sname);
	    sname = NULL;
	    free(svalue);
	    svalue = NULL;
	    free(scompare);
	    scompare = NULL;
            break;
        }
        printf("//Enter a value.\n");
        printf("//");
        fgets(value, 2000, stdin);
        value[strcspn(value, "\n")] = 0;
        printf("//Enter a comparison a for equal b for not equal.\n");
        printf("//");
        while (fgets(compare, 2000, stdin)) {
            compare[strcspn(compare, "\n")] = 0;
            if (strcmp(compare, "a") != 0 && strcmp(compare, "b") != 0) {
                printf("//Enter a or b only.\n");
		printf("//");
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
        while (fgets(op, 2000, stdin)) {
            op[strcspn(op, "\n")] = 0;
            if (strcmp(op, "a") != 0 && strcmp(op, "o") != 0) {
                printf("//Enter a or o only.\n");
		printf("//");
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
        fgets(sname, 2000, stdin);
        sname[strcspn(sname, "\n")] = 0;
        printf("Enter the second value.\n");
        printf("//");
        fgets(svalue, 2000, stdin);
        svalue[strcspn(svalue, "\n")] = 0;
        printf("Enter a second comparison a for equal b for not equal\n");
        printf("//");
        while (fgets(scompare, 2000, stdin)) {
            scompare[strcspn(scompare, "\n")] = 0;
            if (strcmp(scompare, "a") != 0 && strcmp(scompare, "b") != 0) {
                printf("//Enter a or b only.\n");
		printf("//");
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
        free(select);
        select = NULL;
        free(name);
	name = NULL;
	free(value);
	value = NULL;
	free(op);
	op = NULL;
	free(compare);
	compare = NULL;
        free(sname);
	sname = NULL;
	free(svalue);
	svalue = NULL;
	free(scompare);
	scompare = NULL;
        //if (repeat != "r") {
         //   break;
       // }	
    }
return 0;
}

