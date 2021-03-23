/**
 * This C program demonstrates the switch statement using breaks.
 *
 * Completion time: 1 hour
 *
 * @author Teodoro Salgado
 * @version 1.0
 *
*/

#include <stdio.h>
int main() {
	char ch = '+';
        double a = 10, b = 20, f;
        printf("ch = %c\n", ch);
        switch (ch) {
		case '+': 
			f = a + b; 
			printf("f = %f\n", f);
			break;
        	case '-': 
			f = a - b; 
			printf("f = %f\n", f);
			break;
        	case '*': 
			f = a * b; 
			printf("f = %f\n", f);
			break;
        	case '/': 
			f = a / b; 
			printf("f = %f\n", f);
			break;
        	default: 
			printf("invalid operator\n");
        }
        ch = '-';
        printf("ch = %c\n", ch);
        switch (ch) {
        	case '+': 
			f = a + b; 
			printf("f = %f\n", f);
			break;
       		case '-': 
			f = a - b; 
			printf("f = %f\n", f);
			break;
       		case '*': 
			f = a * b; 
			printf("f = %f\n", f);
			break;
       		case '/': 
			f = a / b; 
			printf("f = %f\n", f);
			break;
       		default: 
			printf("invalid operator\n");
        }
        ch = '*';
        printf("ch = %c\n", ch);
        switch (ch) {
       		case '+': 
			f = a + b; 
			printf("f = %f\n", f);
       		case '-': 
			f = a - b; 
			printf("f = %f\n", f);
                case '*': 
                        f = a * b; 
                        printf("f = %f\n", f);
                        break;
                case '/': 
                        f = a / b; 
                        printf("f = %f\n", f);
                        break;
                default: 
                        printf("invalid operator\n");
	}
	ch = '/';
        printf("ch = %c\n", ch);
        switch (ch) {
                case '+': 
                        f = a + b;
                        printf("f = %f\n", f);
                case '-':
                        f = a - b;
                        printf("f = %f\n", f);
                case '*':
                        f = a * b;
                        printf("f = %f\n", f);
                        break;
                case '/':
                        f = a / b;
                        printf("f = %f\n", f);
                        break;
                default:
                        printf("invalid operator\n");
        }
	ch = '%';
        printf("ch = %c\n", ch);
        switch (ch) {
                case '+': 
                        f = a + b;
                        printf("f = %f\n", f);
                case '-':
                        f = a - b;
                        printf("f = %f\n", f);
                case '*':
                        f = a * b;
                        printf("f = %f\n", f);
                        break;
                case '/':
                        f = a / b;
                        printf("f = %f\n", f);
                        break;
                default:
                        printf("invalid operator\n");
        }
}

