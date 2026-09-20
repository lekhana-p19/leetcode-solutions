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
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                return false;
            }

            char open = stack[top--];

            if (s[i] == ')' && open != '(')
            {
                return false;
            }

            if (s[i] == '}' && open != '{')
            {
                return false;
            }

            if (s[i] == ']' && open != '[')
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    char s[] = "()[]{}";

    if (isValid(s))
    {
        printf("Valid Parentheses\n");
    }
    else
    {
        printf("Invalid Parentheses\n");
    }

    return 0;
}