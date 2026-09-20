#include <stdio.h>
#include <stdbool.h>

bool isValid(char *s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            top++;
            stack[top] = s[i];
        }
        else
        {
            if (top == -1)
                return false;

            if (s[i] == ')' && stack[top] != '(')
                return false;

            if (s[i] == '}' && stack[top] != '{')
                return false;

            if (s[i] == ']' && stack[top] != '[')
                return false;

            top--;
        }
    }

    return top == -1;
}

int main()
{
    char s1[] = "()[]{}";
    char s2[] = "(]";

    printf("Test 1: %s\n", isValid(s1) ? "Valid" : "Invalid");
    printf("Test 2: %s\n", isValid(s2) ? "Valid" : "Invalid");

    return 0;
}