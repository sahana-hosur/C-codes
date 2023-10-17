#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphviz/gvc.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(char data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* createTree(char* exp) {
    struct Node* root = newNode(exp[0]);
    int i, j;
    for (i = 1; i < strlen(exp); i++) {
        if (exp[i] >= '0' && exp[i] <= '9') {
            struct Node* new = newNode(exp[i]);
            if (root->left == NULL) {
                root->left = new;
            } else if (root->right == NULL) {
                root->right = new;
            } else {
                // create a new root node
                struct Node* temp = newNode(exp[i - 1]);
                temp->left = root;
                temp->right = new;
                root = temp;
            }
        }
    }
    return root;
}

void createGraph(struct Node* node, Agraph_t* g, Agnode_t* parent) {
    if (node == NULL) return;

    char label[2];
    label[0] = node->data;
    label[1] = '\0';
    Agnode_t* n = agnode(g, label, 1);
    if (parent != NULL) {
        agedge(g, parent, n, NULL, 1);
    }
    createGraph(node->left, g, n);
    createGraph(node->right, g, n);
}

int main() {
    char exp[100];
    printf("Enter an mathematical expression: ");
    scanf("%s", exp);
    struct Node* root = createTree(exp);

    GVC_t* gvc = gvContext();
    Agraph_t* g = agopen("g", Agdirected, 0);
    createGraph(root, g, NULL);
    gvLayout(gvc, g, "dot");
    FILE *fp;
    fp = fopen("tree.png","w");
    gvRender(gvc, g, "png", fp);
    gvFreeLayout(gvc, g);
    agclose(g);
    gvFreeContext(gvc);
    fclose(fp);
    return 0;
}
