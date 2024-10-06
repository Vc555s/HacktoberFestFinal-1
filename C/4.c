// Remove Nth Node From End of List

// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

// Example 2:
// Input: head = [1], n = 1
// Output: []

// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]
 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertnode();
void removenth();
void display();
int count=0;

struct ListNode {
     int val;
      struct ListNode *next;
 };
 
 struct ListNode *head=NULL;
 
 void main()
 {
    int choice;
    while(1)
    {
        printf("enter options:\n\n");
        printf("1.Enter elements into list\n2.Remove nth element from list\n3.display\n4.exit");
        printf("\n\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertnode();
            break;
            case 2: removenth();
            break;
            case 3:display();
            break;
            case 4:printf("exiting.....\n");
            return;
                
                    
        }
    }
 }
 
 void insertnode()
 {
     struct ListNode *ptr;
     ptr=(struct ListNode *)malloc(sizeof(struct ListNode));
     if(ptr==NULL)
        printf("allocation failed\n");
    else
    {
        int value;
        printf("enter value to be inputed");
        scanf("%d",&value);
        ptr->val=value;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            
        }
        else
        {
            struct ListNode *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
        }
        count++;
    }
 }
void removenth()
{
    int n;
    printf("enter location to delete from the end\n");
    scanf("%d",&n);
    
    struct ListNode *temp,*ptr;
    if(n==1)
    {
        printf("deleting last node\n\n");
        temp=head;
        while(temp->next!=NULL)
        {
        ptr=temp;
        temp=temp->next;
        }
    ptr->next=NULL;
    free(temp);
    
        
    }
    else if(n==count)
    {
        struct ListNode *temp;
        temp=head;
        head=temp->next;
        free(temp);
        
    }
    

    
    else{
        temp=head;
        for(int i=0;i<count-n &&temp!=NULL;i++)
        {
            ptr=temp;
            temp=temp->next;
            
        }
        ptr->next=temp->next;
        free(temp);
         
    }
    count--;
}

void display()
{
    struct ListNode *ptr;
    ptr=head;
    while(ptr!=NULL)
    {   
        printf("%d\t",ptr->val);
        ptr=ptr->next;
    }
}
