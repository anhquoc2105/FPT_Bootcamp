bool isValid(char* s) {
    int len = strlen(s);
    int stack[len];
    int top = -1;
    for (int i = 0; i < len; i++){
        char c = s[i];
        if(c == '(' || c == '[' || c == '{')
            stack[++top] = c;
        else {
            
            if(top == -1)   return 0;
            char t = stack[top--];
            if(t == '(' && c != ')') return 0;
            if(t == '[' && c != ']') return 0;
            if(t == '{' && c != '}') return 0;
        }
    }
    return top == -1;
}