#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void clean(){
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}


int main(){
    char t[6][15] = {"scanf(\"", "%", "[^\\n]\"", ",", ");", "getchar();"};
    char var[125];
    char mem[10];
    int m;

    while (1) {
	printf("//Enter the name of variable m for main.\n");
	printf("//");
	fgets(var,125, stdin);
	var[strcspn(var, "\n")] = 0;
	if (strlen(var) >= 124) {
	    clean();
	}
	if (strcmp(var, "m") == 0) {
	    break;
	}
	printf("//Enter memory allocated to variable 2 or more.\n");
	printf("//");
	while(fgets(mem,10, stdin)){
	      mem[strcspn(mem, "\n")] = 0;
	    if (strlen(mem) >= 9) {
	        clean();
	    }
            m = atoi(mem);
	    if (m < 2){
	        printf("\nEnter a valid number only.\n\n");
	    }else{
	        break;
	    }
	}	
	printf("\n%s%s%d%s%s%s%s\n", t[0], t[1], m - 1, t[2], t[3], var, t[4]);
	printf("%s\n\n", t[5]);
	//if (strcmp(repeat, "r") != 0) {
	   // break;
	//}
    }
return 0;
}
