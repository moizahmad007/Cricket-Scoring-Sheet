#include<iostream>
#include<string>
using namespace std;
struct batter{
			int score;
			int balls;
						string name;
			batter *next, *prev;
		};
	
class doublybat{
	batter *head, *tail;
	int counter=0;
	public:
		doublybat(){
			head=tail=NULL;
		}
		void createbat(int s, int b,string c ){
			batter *temp=new batter;
			temp->score=s;
			temp->name=c;
			temp->balls=b;
			temp->next=NULL;
			temp->prev=NULL;
			if(head==NULL){
				tail=head=temp;
			}
			else{
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
			}
			cout<<"New batter.\n";
		counter++;
		}
		int count(){
			return counter;
		}
	/*	void createball(int s, int b, int o){
			node *temp=new node;
			temp->overs=o;
			temp->score=s;
			temp->name=player;
			temp->balls=b;
			temp->next=NULL;
			temp->prev=NULL;
			if(head==NULL){
				tail=head=temp;
			}
			else{
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
			}
			cout<<" inserted successfully.\n";
		counter++;
		}*/
		bool isEmpty(){
			if(counter==0){
				return true;}
				else
				return false;
			}
		
		void display(){
			if(isEmpty()){
			//	cout<<"Nothing to display.\n";
			}
			else{
				    cout<<"###################################################################\n";
					cout<<"                     BATTING SCORECARD                             \n";
					cout<<"###################################################################\n";
				batter*cur=head;
				while(cur!=NULL){
					cout<<"-------------------------------------------------\n";
					cout<<"Batter "<<cur->name<<" got out on ";
					cout<<cur->score<<" after facing ";
					cout<<cur->balls<<" balls."<<endl;
					cout<<"-------------------------------------------------\n";
					cur=cur->next;
				}
				cur=head;}
			return;}
		/*	void insertatstart(int d)
			{
				node *temp=new node;
				if(head==NULL){
					temp->data=d;
				tail=head=temp;
			}
			else{
				temp->data=d;
				temp->next=head;
				temp->prev=NULL;
				head=temp;}
				cout<<d<<" Inserted at start\n";
				counter++;
			}
			void insertatend(int d){
				node *temp=new node;
				if(head==NULL){
					temp->data=d;
				tail=head=temp;
			}
			else{
			temp->data=d;
			temp->next=NULL;
			temp->prev=tail;
			tail->next=temp;
			tail=temp;	
			}
			cout<<d<<" Inserted at end\n";
			counter++;
			}
			void insertatpos(int a, int d){
				if(a>counter){
					cout<<"Invalid position.\n";
				}
				else
				int pos=a;
				node *cur=head;
				node *temp=new node;
				temp->data=d;
				for(int b=1;b<a;b++){
					cur=cur->next;
				}
				
				cur->prev=temp;
				temp->next=cur;
				cur=head;
				for(int b=1;b<a-1;b++){
					cur=cur->next;
				}
				//cout<<cur->data<<endl;
				cur->next=temp;
				temp->prev=cur;
				cout<<d<<" Inserted at position "<<a<<endl;
			counter++;}
			void delatstart(){
				if(isEmpty()){
					cout<<"Nothing to delete.\n";
				}
				else{
				
				node *temp=head;
				
				head=head->next;
				head->prev=NULL;
				cout<<temp->data<<" is deleted.\n";
				counter--;
			}
			}
			void delatend(){
				if(isEmpty()){
					cout<<"Nothing to delete.\n";
				}
				else{
					node *temp=tail;
					tail=tail->prev;
					tail->next=NULL;
					cout<<temp->data<<" is deleted.\n";
					counter--;
				}
			}
			void delatpos(int a){
				if(a>counter){
					cout<<"Invalid position.\n";
				}
				else{
					if(a==1){
						delatstart();
						return;
					}
					if(a==counter){
						delatend();
					}
				node *temp=head,*cur=head;
				for(int b=1;b<a;b++){
					cur=cur->next;
				}
				temp=cur;
				cur=cur->next;
				cout<<temp->data<<" is deleted.\n";
				temp=temp->prev;
			//	cout<<"error found";
				temp->next=cur;
				cur->prev=temp;
				counter--;
				
				display();
				}
			}*/
};
	
