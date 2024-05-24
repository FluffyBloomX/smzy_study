//
// Created by 20212 on 2024/5/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ����ջ�ṹ
#define MAX_SIZE 100

typedef struct {
    int top;
    char items[MAX_SIZE];
} Stack;

// ��ʼ��ջ
void init(Stack *s) {
    s->top = -1;
}

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// ��ջ
void push(Stack *s, char c) {
    s->items[++(s->top)] = c;
}

// ��ջ
char pop(Stack *s) {
    return s->items[(s->top)--];
}

// ��ȡջ��Ԫ��
char peek(Stack *s) {
    return s->items[s->top];
}

// �ж�����������ȼ�
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// ��׺���ʽת��Ϊ��׺���ʽ
void infixToPostfix(char *infix, char *postfix) {
    Stack s;
    init(&s);
    int i = 0, j = 0;
    char ch;
    while ((ch = infix[i++]) != '=') {
        if (ch >= '0' && ch <= '9') {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(&s, ch);
        } else if (ch == ')') {
            while (peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); // ����������
        } else {
            while (!isEmpty(&s) && precedence(ch) <= precedence(peek(&s))) {
                postfix[j++] = pop(&s);
            }
            push(&s, ch);
        }
    }
    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
}

// �����׺���ʽ��ֵ
int evaluatePostfix(char *postfix) {
    Stack s;
    init(&s);
    int i = 0;
    char ch;
    while ((ch = postfix[i++]) != '\0') {
        if (ch >= '0' && ch <= '9') {
            push(&s, ch - '0');
        } else {
            int operand2 = pop(&s);
            int operand1 = pop(&s);
            switch (ch) {
                case '+':
                    push(&s, operand1 + operand2);
                    break;
                case '-':
                    push(&s, operand1 - operand2);
                    break;
                case '*':
                    push(&s, operand1 * operand2);
                    break;
                case '/':
                    push(&s, operand1 / operand2);
                    break;
            }
        }
    }
    return pop(&s);
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("��������׺���ʽ����=��������");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("��׺���ʽΪ��%s\n", postfix);
    printf("������Ϊ��%d\n", evaluatePostfix(postfix));
    return 0;
}
