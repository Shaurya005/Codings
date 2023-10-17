#include "LinkedList.h"
struct node *start=NULL;

ll *move(ll *start){
	ll *ptr=start,*temp,*start1=NULL;
	int i=1;
	while(ptr->next->next!=NULL){
		if(i%2!=0){
			temp=ptr->next;
			ptr->next=ptr->next->next;
		}
		else{
			temp=ptr->next;
			if(start1==NULL){
				start1=ptr;
				ptr->next=ptr->next->next;
			}
			else
				ptr->next=ptr->next->next;
			}
			ptr=temp;i++;
		}
		  
		if(i%2!=0)
		{
		   ptr->next=start1;	
		}
		else{
			ptr->next->next=start1;
			ptr->next=NULL;
		}
		return start;
}

int main()
{
	int opt;
	do{
		p("\n *****MAIN MENU*****");
		p("\n 1: Create a list");
		p("\n 2: Display the list");
		p("\n 3: Move the list");
		p("\n\nEnter your option: ");
		s("%d",&opt);
		switch(opt)
		{
			case 1: start=create_ll(start);
			        p("\n LINKED LIST CREATED");
			        break;
		    case 2: display(start);
		            break;
		    case 3: start=move(start);
		            break;
		    default:
		    	printf("Wrong Option\n");
		} 
    }while(opt!=-1);
	return 0;
}
