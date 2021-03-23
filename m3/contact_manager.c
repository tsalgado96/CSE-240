#include <stdio.h>
#include <ctype.h>

 int main(){
	 char input = ' ';
	// display menu
	printf("Enter your selection:\n");
	printf("    i: insert a new entry\n");
	printf("    d: delete an entry\n");
	printf("    s: search an entry\n");
	printf("    p: print all entries\n");
	printf("    q: quit\n");
	scanf(" %c", &input);
	input = tolower(input);

	printf("%c", input);
}
