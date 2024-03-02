# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

struct StackNode {
    int data, numstacknode;
    struct StackNode *next, *stacknode;
};

struct StackNode* Newnode(struct StackNode* root, int data) {
    if (Nextstack(root) == NULL) {
        printf("NULL\n");
    }
    else {
        printf("StackNode is create\n");
    }
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
};

int isEmpty(struct StackNode* root) {
    return !root;
}

int push(struct StackNode** root, int data ) {
    struct StackNode* stackNode = Newnode(*root, data);
    stackNode->next = *root;
    *root = stackNode;
    printf("Push %d in node\n", data);
}

int pop(struct StackNode** root) {
    if (isEmpty(*root)) return INT_MIN;
    struct StackNode* temp = *root; 
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int peek(struct StackNode* root) {
    if (isEmpty(root)) return INT_MIN;
    return root->data;
}

int main() {
    struct StackNode* root = NULL;
    int ans, num;
    int i = 0;
    do {
        printf("**********************************\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.\n-> ");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            printf("Enter Number -> ");
            scanf("%d", &num);
            push(&root, num);
            i++;
            break;
        case 2:
            printf("%d is are delete\n", pop(&root));
            i--;
        case 3:
            if (i == 0) {
                printf("NULL\n");
            }
            else {
                printf("%d is a top number\n", peek(root));
            }
            break;
        default:
            break;
        }
    } while(1);
    return 0;
}