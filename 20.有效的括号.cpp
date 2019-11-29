/*************************************************************************
	> File Name: 20.有效的括号.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月06日 星期日 14时39分58秒
 ************************************************************************/
typedef struct Stack {
    int size, top;
    int *data;
}Stack;

Stack *init(int num) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = num;
    s->top = -1;
    s->data = (int *)malloc(sizeof(int) * s->size);
    return s;
}

int push(Stack *s, int val) {
    if (s == NULL) return 0;
    if (s->size == s->top + 1) return 0;
    s->top++;
    s->data[s->top] = val;
    return 1;
}

int top(Stack *s) {
    if (s == NULL) return NULL;
    if (s->top == -1) return NULL;
    return s->data[s->top];
}

int empty(Stack *s) {
    return s->top == -1;
}

int pop(Stack *s) {
    if (s == NULL) return 0;
    if (empty(s)) return 0;
    s->top--;
    return 1;
}

void clear(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
    return ;
}

bool isValid(char *s) {
    int len = strlen(s);
    Stack *stack = init(len);
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case '(' :
            case '{' :
            case '[' : 
                   {
                    push(stack, s[i]);
                   } break;
                   case ')' :
                   {
                       if (top(stack) == '(') {
                           pop(stack);
                       } else {
                           return false;
                       }
                   } break;
                   case ']' :
                   {
                       if (top(stack) == '[') {
                           pop(stack);
                       } else {
                           return false;
                       }
                   } break;
                   case '}' :
            {
                if (top(stack) == '{') {
                    pop(stack);
                } else {
                    return false;
                }
            }
        }
    }
        if (!empty(stack)) {
            clear(stack);
            return false;
        }
        clear(stack);
        return true;
}

