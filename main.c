//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int z=5;
    struct node a,b,c,d,*head ;
    a.value = z;
    a.next=&b;
    d.next=&a;
    head=&d;
    d.value=2;
    b.value=head->next->value+3;
    b.next=&c;
    c.value=head->next->next->value +3;
    c.next=NULL;

    printf("%d\n", head ->value);
    printf("%d\n", head ->next->value ); //what value for 5
    printf("%d\n", head ->next->next->value ); //what value for 8
    printf("%d\n", head ->next->next->next->value);
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
    4. Print โดยใช้ head ด้วย
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything*/
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp = tmp->next;
        }
    tmp = head;
    printf("\n");
    
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
       
         while(tmp){
            printf("%3d", tmp->value);
            tmp = tmp->next;
        }
    printf("\n");

    /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help*/

         //head=(struct node*) malloc(sizeof(struct node));
         head=(NodePtr) malloc(sizeof(struct node));
         tmp = head;

    for(i=2;i<=11;i+=3){
        tmp->value=i;
        if(i==11) tmp->next=NULL;
        else{
            tmp->next=(NodePtr) malloc(sizeof(struct node));
            tmp=tmp->next;
        }
    }
        /* tmp->value=2;
         tmp->next=(NodePtr) malloc(sizeof(struct node)); //make new node

         tmp=tmp->next;
         tmp->value=5;
         tmp->next=(NodePtr) malloc(sizeof(struct node));

         tmp=tmp->next;
         tmp->value=8;
         tmp->next=(NodePtr) malloc(sizeof(struct node));

         tmp=tmp->next;
         tmp->value=11;*/

    /*  Exercise VI Free all node !!
         //use a loop to help*/

        while(head != NULL){
            tmp = head;
            head=head->next;
            printf("%5d",tmp->value);
            free(tmp);
        }
        printf("\n");
        /*
        head=head->next;
        free(tmp);
        tmp=head;
        head=head->next;
        free(tmp);
        tmp=head;
        head=head->next;
        free(tmp);
        */
    
    return 0;
}
