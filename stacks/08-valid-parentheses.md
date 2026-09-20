## Problem: Valid Parentheses (Easy)

**Link:** [My Accepted Solution – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/submissions/2147634885/)

# Intuition

We need to check whether the brackets in the string are properly matched.

# Approach

Use a stack to store the opening brackets.

- If the character is an opening bracket, store it in the stack.
- If the character is a closing bracket, check the top element of the stack.
- If the brackets do not match, return `false`.
- After checking all characters, if the stack is empty, return `true`.

# Complexity

- Time complexity: $O(n)$ because the string is traversed once.
- Space complexity: $O(n)$ because a stack is used to store the brackets.

# Notes

For the input `()[]{}`, all the brackets are correctly matched, so the result is `true`.

# Code

```c
bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }
        else {
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

    if (top == -1)
        return true;

    return false;
}