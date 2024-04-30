#include <stdio.h>
#include <math.h>
#define STAGE1 0
#define STAGE2 1
#define STAGE3 2
void int_calculator(void);
int int_operation(char op, int op1, int op2);
int get_int(int current_operand, char c);
int is_operator(char c);
int is_digit(char c);

int main()
{
    printf("Start Calculate Program\n");
    printf("Enter an integer operand or one of the four arithmetic operators.\n");
    printf("After receiving the results, type the letter x to exit.\n");
    int_calculator();
    printf("\nExit Calcultate Program.\n");
}

void int_calculator(void)
{
    int operand1 = 0, operand2 = 0;
    char op, c='0';
    int result;
    int current_stage = STAGE1;

    while(c != 'x') {
        c = getchar();
        if (current_stage == STAGE1) {
            if (is_digit(c))
                operand1 = get_int(operand1, c);
            else if (is_operator(c)) {
                op = c;
                current_stage = STAGE2;
                operand2 = 0;
            }
        }
        else if (current_stage == STAGE2) {
            if (is_digit(c))
                operand2 = get_int(operand2, c);
            else if (c == '\n')  {
                result = int_operation(op, operand1, operand2);
                printf("= %d", result);
                current_stage = STAGE3;
            }
        }
        else if (current_stage == STAGE3) {
            if (c == '\n')  {
                operand1 = 0;
                current_stage = STAGE1;
            }
            else if (is_operator(c)) {
                op = c;
                current_stage = STAGE2;
                operand1 = result;
                operand2 = 0;
            }
        }
    }
}

int int_operation(char op, int op1, int op2)
{
    int result;
    switch(op)  {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            result = op1 / op2;
            break;
    }
    return result;
}

int get_int(int current_operand, char c)
{
    int new_value;
    new_value = c-'0';
    current_operand *= 10;
    current_operand += new_value;
    return current_operand;
}
int is_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' )
        return 1;
    else
        return 0;
}
int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}