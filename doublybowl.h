#include<iostream>
#include<string>
using namespace std;
struct bowler{
			int overs;
		  string name;
			int wickets;
			int score;
			bowler *next,*prev;
		};
class doublybowl{
	bowler *head, *tail;
	int counter=0;
	
	public:
		doublybowl(){
			head=tail=NULL;
		}
		void createbowl(int s, int o,string c,int w ){
			bowler *temp=new bowler;
			temp->score=s;
			temp->wickets=w;
			temp->name=c;
			temp->overs=o;
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
			cout<<"New bowler.\n";
		counter++;
		}
		int count(){
			return counter;
		}
			bool isEmpty(){
			if(counter==0){
				return true;}
				else
				return false;
			}
		
		void display(){
			if(isEmpty()){
				cout<<"Nothing to display.\n";
			}
			else{
				cout<<"###################################################################\n";
				cout<<"                         BOWLER SCORECARD                          \n";
				cout<<"###################################################################\n";
				bowler*cur=head;
				while(cur!=NULL){
					cout<<"----------------------------------------------------------\n";
					cout<<"Bowler "<<cur->name<<" conceded ";
					cout<<cur->score<<" runs and got ";
					cout<<cur->wickets<<" wickets in "<<cur->overs<<" overs."<<endl;
					cout<<"----------------------------------------------------------\n";
					cur=cur->next;
				}
				cur=head;}
			
			return;}
				void edit(int a, int news, int neww){
					bowler*cur=head;
					for(int i=1;i<a;i++){
						cur=cur->next;
					}
					cur->score=cur->score+news;
					cur->wickets=cur->wickets+neww;
					cout<<cur->overs<<endl;
					cur->overs=cur->overs+1;
					cout<<"data updated successfully.\n";
				}
				bool overlimit(int a, int m){
					bowler*cur=head;
					for(int i=1;i<a;i++){
						cur=cur->next;
					}
					if(cur->overs==m){
						cout<<"This bowler has bowled all his overs, please choose a different bolwer.\n";
						return true;
					}
					else
					return false;}
};
