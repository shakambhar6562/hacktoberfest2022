#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertionAtFront(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
		return;
	}
	node* n=new node(d);
	n->next=head;
	head=n;
}

void insertionAtEnd(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
		return;
	}

	node* n=new node(d);
	tail->next=n;
	tail=n;
}


void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int length(node* head)
{
	int len=0;
	while(head)
	{
		len++;
		head=head->next;
	}
	return len;
}
void my_swap(node*node_1,node*node_2)
{
    int temp = node_1->data;
	node_1->data = node_2 -> data;
	node_2 -> data = temp;

}
void bubble_sort(node *head)
{
	int swapped;

	node *lPtr; // left pointer will always point to the start of the list
	node *rPrt = NULL; // right pointer will always point to the end of the list
	do
	{
		swapped = 0;
		lPtr = head;
		while(lPtr->next != rPrt)
		{
			if (lPtr->data > lPtr->next->data)
			{
				my_swap(lPtr, lPtr->next);
                swapped = 1;
			}
			lPtr = lPtr->next;
		}
		//as the largest element is at the end of the list, assign that to rPtr as there is no need to
		//check already sorted list
		rPrt = lPtr;

	}while(swapped);
}



int main()
{
    int swapped;
	node* head=NULL;
	node* tail=NULL;
    int n,num,i,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        insertionAtEnd(head,tail,num);

    }
    bubble_sort(head);
    print(head);

	return 0;
}
