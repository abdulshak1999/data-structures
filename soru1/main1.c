
#include<stdio.h> 
#include<stdlib.h> 
  
/* Link list node */
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
 void ekle(struct Node** head_ptr,int new_data){
 	//new_node i�in alan ay�r�yoruz.
 	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
 	
 	//de�erleri ekleyelim.
 	new_node->data = new_data;
 	new_node->next=(*head_ptr);
 	*head_ptr=new_node;
 }
 
 int say(struct Node *head){
 	int count=0;
	 
	 if(head==NULL){
	 	return 0;
	 }
	 return 1+ say(head->next);
 }

int main(){
	struct Node *head=NULL; //Bo� bir pointer tan�mlayarak ba�lat�yoruz
	ekle(&head, 1); 
    ekle(&head, 2); 
    ekle(&head, 3); 
    ekle(&head, 4); 
    ekle(&head, 5); 
    
    printf("uzunlu�u: %d",say(head));
    return 0;
    
}
