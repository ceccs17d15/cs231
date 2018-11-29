Athira Suresh
Roll no:15

#include<stdio.h>

int count=1;

typedef struct node
{
 int data;
 struct node*left;
 struct node*right;
}node;

void insert(node**bt,int n)
{
 if(*bt==NULL)
 {
  *bt=(node*)malloc(sizeof(node));
  (*bt)->data=n;
  (*bt)->left=NULL;
  (*bt)->right=NULL;
  count++;
 }
 else
 {
 if(count%2==0)
 insert(&((*bt)->left),n);
 else
 insert(&((*bt)->right),n);
 }
}


void inorder(node*bt)
{
 if(bt!=NULL)
 {
  inorder(bt->left);
  printf("%d\t",bt->data);
  inorder(bt->right);
 }
}


void preorder(node*bt)
{
 if(bt!=NULL)
 {
  printf("%d\t",bt->data);
  preorder(bt->left);
  preorder(bt->right);
 }
}


void postorder(node*bt)
{
 if(bt!=NULL)
 {
  postorder(bt->left);
  postorder(bt->right);
  printf("%d\t",bt->data);
  
 }
}

void main()
{
 node*bt=NULL;
 insert(&bt,1);
 insert(&bt,2);
 insert(&bt,3);
 insert(&bt,4);
 insert(&bt,5);
 insert(&bt,6);
 inorder(bt);
 printf("\n");
 preorder(bt);
 printf("\n");
 postorder(bt);
}
output:
          1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 4

           root is 4
           Inorder traversal of binary tree is :  4
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 4

           root is 4
           Inorder traversal of binary tree is :  4
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 6

           root is 4
           Inorder traversal of binary tree is :  4 6
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 5

           root is 4
           Inorder traversal of binary tree is :  4 5 6
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 8

           root is 4
           Inorder traversal of binary tree is :  4 5 6 8
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 1

           Enter new element: 7

           root is 4
           Inorder traversal of binary tree is :  4 5 6 7 8
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 2

           Enter the element to be deleted : 5
           4 6 7 8
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 4

           Postorder traversal of binary tree is :  7 8 6 4
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 5

           Preorder traversal of binary tree is :  4 6 8 7
                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
                   Enter choice : 6

           Search and replace operation in binary tree
           Enter the element to be searched :8

           Element 8 which was searched is found and is = 8
           Do you want replace it, press 1 for yes :
          1

           Enter new element :7

                   1. Insert in Binary Tree
                   2. Delete from Binary Tree
                   3. Inorder traversal of Binary tree
                   4. Postorder traversal of Binary tree
                   5. Preorder traversal of Binary tree
                   6. Search and replace
                   7. Exit
Enter choice : 7
