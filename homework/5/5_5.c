//
// Created by 20212 on 6/6/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// �������ڵ�ṹ
typedef struct TreeNode {
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// �����½ڵ�
TreeNode* createNode(char value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// �ͷ����ڴ�
void freeTree(TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

// ���ز����������ȼ�
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else {
        return 0;
    }
}

// �������ʽ��
TreeNode* buildExpressionTree(char* expression) {
    TreeNode* numberStack[100];
    TreeNode* operatorStack[100];
    int numberTop = -1;
    int operatorTop = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        char value = expression[i];

        // ���������
        if (isdigit(value)) {
            numberStack[++numberTop] = createNode(value);

            // ����ǲ�����
        } else if (value != ' ') {
            while (operatorTop != -1 && precedence(value) <= precedence(operatorStack[operatorTop]->data)) {
                TreeNode* right = numberStack[numberTop--];
                TreeNode* left = numberStack[numberTop--];
                TreeNode* op = operatorStack[operatorTop--];
                op->left = left;
                op->right = right;
                numberStack[++numberTop] = op;
            }
            operatorStack[++operatorTop] = createNode(value);
        }
    }

    // ����ʣ��Ĳ�����
    while (operatorTop != -1) {
        TreeNode* right = numberStack[numberTop--];
        TreeNode* left = numberStack[numberTop--];
        TreeNode* op = operatorStack[operatorTop--];
        op->left = left;
        op->right = right;
        numberStack[++numberTop] = op;
    }

    return numberStack[numberTop];
}

// ������ʽ����ֵ
int evaluateExpressionTree(TreeNode* root) {
    if (root->left == NULL && root->right == NULL) {
        return root->data - '0';
    } else {
        int left_val = evaluateExpressionTree(root->left);
        int right_val = evaluateExpressionTree(root->right);
        if (root->data == '+') {
            return left_val + right_val;
        } else if (root->data == '-') {
            return left_val - right_val;
        } else if (root->data == '*') {
            return left_val * right_val;
        } else if (root->data == '/') {
            return left_val / right_val;
        }
    }
    return 0;
}

// ������
int main() {
    char expression[] = "3+5*2";
    TreeNode* root = buildExpressionTree(expression);
    int result = evaluateExpressionTree(root);
    printf("���ʽ��ֵΪ��%d\n", result);
    freeTree(root);
    return 0;
}
