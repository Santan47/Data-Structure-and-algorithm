#include<stdio.h>
#include<malloc.h>
void insert_node();
void delete_node();
void display_node();
struct node{
	    	int data;
	    	struct node *next;
	   };
struct node *start=NULL;
/*creating node for the linked list*/
struct node* create_node(){
 	   	           struct node *n;
  	   		   n=(struct node*)malloc(sizeof(struct node));
 		           return (n);
	  		  }
/*inserting node in the linked list*/
void insert_node(){
 			struct node *temp,*t;
 			temp=create_node();
 			printf("insert data in the node:");
 			scanf("%d",&temp->data);
 			temp->next=NULL;
 			if(start==NULL)
 			start=temp;
 			else
 			{	
  				t=start;
  				while(t->next!=NULL)
  					t=t->next;
  				t->next=temp;
 			}
		  }
/*deleteing a node from the linked list*/
void delete_node(){
			if(start=NULL)
			printf("linked list is empty.");
			else
			{
 				int a;
 				printf("enter the data which you want to delete:");
 				scanf("%d",&a);
 				struct node *c,*p;
 				c=start;
 				while(c->data!=a)
 				c=c->next;
				p=c->next;
				c->next=p->next;
			}
			
 		
		  }
/*display the linked list */
void display_node(){
 			struct node *l=start;
			while(l!=NULL){
					printf("%d\n",l->data);
					 l=l->next;
				      }
		   }
int main(){
		int c;
		while(1)
		{
			printf("1.insert node in the list.\n2.delete node from the list.\n3.display the linked list.\n4.exit\nchose your opion:");
			scanf("%d",&c);
			switch(c)
			{
				case 1: insert_node();
					break;
				case 2: delete_node();
					break;
				case 3: display_node();
					break;
				case 4: return 1;
				default: printf("wrong choise\n");
			}
	 	}			
 	   return 0;
	   }
