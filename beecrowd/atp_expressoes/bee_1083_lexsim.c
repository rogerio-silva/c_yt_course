#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 5000

int get_priority(char op) {
    switch (op) {
        case '^': return 6;
        case '*': case '/': return 5;
        case '+': case '-': return 4;
        case '>': case '<': case '=': case '#': return 3;
        case '.': return 2;
        case '|': return 1;
        case '(': return 0;
        default: return -1;
    }
}

bool is_operator(char c) {
    return strchr("^*/+-><=#.|", c) != NULL;
}

bool is_operand(char c) {
    return isalnum(c);
}

bool check_lexical(const char *expr) {
    for (int i = 0; expr[i]; i++) {
        unsigned char uc = (unsigned char)expr[i];
        if (!is_operand(uc) && !is_operator(uc) && uc != '(' && uc != ')' && uc != '\n' && uc != '\r') {
            return false;
        }
    }
    return true;
}

void solve() {
    char expr[MAX];
    while (fgets(expr, MAX, stdin)) {
        size_t len = strlen(expr);
        while (len > 0 && (expr[len - 1] == '\n' || expr[len - 1] == '\r')) {
            expr[--len] = '\0';
        }
        if (len == 0) continue;

        if (!check_lexical(expr)) {
            printf("Lexical Error!\n");
            continue;
        }

        char stack[MAX];
        int top = -1;
        char postfix[MAX];
        int p_idx = 0;
        bool syntax_error = false;
        int open_parens = 0;
        bool expect_operand = true;

        for (int i = 0; i < len; i++) {
            char c = expr[i];

            if (is_operand(c)) {
                if (!expect_operand) {
                    syntax_error = true;
                    break;
                }
                postfix[p_idx++] = c;
                expect_operand = false;
            } else if (c == '(') {
                if (!expect_operand) {
                    syntax_error = true;
                    break;
                }
                stack[++top] = c;
                open_parens++;
                expect_operand = true;
            } else if (c == ')') {
                if (expect_operand || open_parens == 0) {
                    syntax_error = true;
                    break;
                }
                while (top >= 0 && stack[top] != '(') {
                    postfix[p_idx++] = stack[top--];
                }
                if (top >= 0 && stack[top] == '(') {
                    top--;
                    open_parens--;
                } else {
                    syntax_error = true;
                    break;
                }
                expect_operand = false;
            } else if (is_operator(c)) {
                if (expect_operand) {
                    syntax_error = true;
                    break;
                }
                while (top >= 0 && stack[top] != '(' && get_priority(stack[top]) >= get_priority(c)) {
                    postfix[p_idx++] = stack[top--];
                }
                stack[++top] = c;
                expect_operand = true;
            }
        }

        if (syntax_error || open_parens != 0 || expect_operand) {
            printf("Syntax Error!\n");
        } else {
            while (top >= 0) {
                if (stack[top] == '(') {
                    syntax_error = true;
                    break;
                }
                postfix[p_idx++] = stack[top--];
            }
            if (syntax_error) {
                printf("Syntax Error!\n");
            } else {
                postfix[p_idx] = '\0';
                printf("%s\n", postfix);
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
