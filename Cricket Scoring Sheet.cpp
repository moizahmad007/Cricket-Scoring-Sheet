#include <iostream>
#include<string>
#include <stack>
#include "doubly.h"
#include "doublybowl.h"
#include "static queue.h"
using namespace std;
class match{
	public:
	int maxovers;
	int overperbowler;
	string venue,date,time,day,weather;
	string team1,team2,bat,bowl,tosswin;
    void setMatchDetails() {
    		cout<<"###################################################################################\n\n";
				cout<<"                        WELCOME TO CRICKET SCORING SHEET                          \n\n";
				cout<<"###################################################################################\n\n";
        cout << "Enter match venue: ";
        cin.ignore();
        getline(cin, venue);
        cout << "Enter match date (DD/MM/YYYY): ";
        getline(cin, date);
        cout << "Enter match time: ";
        getline(cin, time);
        cout << "Enter match day: ";
        getline(cin, day);
        cout << "Enter weather conditions: ";
        getline(cin, weather);
    }
    int displayMatchDetails() {
        cout << "\nMATCH DETAILS\n";
        cout << "Venue: " << venue << endl;
        cout << "Date: " << date << endl;
        cout << "Time: " << time << endl;
        cout << "Day: " << day << endl;
        cout << "Weather: " << weather << endl;
    }
void menu(){	
                cout<<"\t\tLet's Begin\t\t\t";
	choice:
	int choice=0;
  	cout<<"\nPLEASE SELECT A FORMAT\n\n";
cout<<"       \n1:T20\n2:DI\n3:TEST \n4:T10 \n5:5 overs       ";
cin>>choice;
if(choice==1){
	maxovers=20;
	overperbowler=4;
}
else if(choice==2){
		maxovers=50;
	overperbowler=10;
}
else if(choice==3){
		maxovers=200;
	overperbowler=200;
}else if(choice==4){
		maxovers=10;
	overperbowler=2;
}else if(choice==5){
		maxovers=5;
	overperbowler=1;
}
else{
	cout<<"Invalid choice\n";
	goto choice;
}
                cout<<"                            \n\nPLEASE NAME OF YOUR TEAMS\n";
cout<<"Team 1: ";
cin>>team1;
cin.ignore();
cout<<team1<<endl;
cout<<"Team 2: ";
cin>>team2;
cin.ignore();
cout<<team2<<endl;
cout<<"Alright, So it's a battle between \n"<<team1<<"   VS   "<<team2<<endl<<endl;
cout<<"                         Lets's move on to the toss!!!"<<endl<<endl;
choice=0;
cout<<"Which team won the toss?\n";
cout<<"1)"<<team1<<endl<< "2)"<<team2<<endl;
cin>>choice;
if (choice==1){
	cout<< ""<<team1<<" has won the toss.\n";
	tosswin=team1;
	cout<<"What has the team decided to do?\n";
tossresult:
choice=0;
cout<<"1)Batting\n2)Bowling\n\n"<<endl;
cin>>choice;
if(choice==1){
		cout<<team1<<" has won the toss and decided to bat first.\n\n";
		bat=team1;
		bowl=team2;
}
else if(choice==2){
		cout<<team1<<" has won the toss and decided to bowl first.\n\n";
		bowl=team1;
		bat=team2;
}
else {
	cout<<"Invalid choice.\n";
	goto tossresult;
}
}  
else if (choice==2){
	cout<<team2<<" has won the toss.\n";
	tosswin=team2;
	cout<<"What has the team decided to do?";
choice=0;
cout<<"1)Batting\n2)Bowling\n\n"<<endl;
cin>>choice;
if(choice==1){
		cout<<team2<<" has won the toss and decided to bat first.\n\n";
		bat=team2;
		bowl=team1;
}
else if(choice==2){
		cout<<team2<<" has won the toss and decided to bowl first.\n\n";
		bowl=team2;
		bat=team1;
}
else {
	cout<<"Invalid choice.\n";
	goto tossresult;
}
} 
}
void startinnings(){
	
	int choice=0;
	int maxballs=maxovers*6;
	int strike=2;
	string c,c1,c2;
	int out=0;
	int s1=0,s2=0,b1=0,b2=0,o=0;
	int over=0;
	int target;
	int freehit=0;
	int extras=0;
	int rmnwkt=0;
	int towin;
	int ball=1;
	int totalscore=0;
	int bowlerover=0;
	int totalbowlers=0;
	int a1,a2,d1,d2;
				string a3,d3;
	int bowlernumber=0;
	int overscore=0;
	int wickets=0;
	int check=0;
	int totalballs=0;
	int score0=0,over0=0,wicket0=0;
	int innings=1;
	queue ovr;
	doublybat bat1,bat2;
	doublybowl ball1,ball2;
	//bat1.createbat();
	//bat1.createbat();
	while(innings<=2){
		t:
	cout<<"Enter number of bowlers 5-11.\n";
	cin>>totalbowlers;
	if (totalbowlers<5||totalbowlers>11){
		cout<<"Invalid entry, try again.\n";
		goto t;
	}
	
	for(int i=0;i<totalbowlers;i++){
		cout<<"Enter bowler's name:\n";
		cin>>c2;
		if(innings==1){
		ball1.createbowl(score0, over0, c2, wicket0);
	}
	else if(innings==2){
		ball2.createbowl(score0, over0, c2, wicket0);
	}}
//	ball1.display();
		cout<<"Enter 1st batter name.\n";
			cin>>c;
				cout<<"Enter 2nd batter name.\n";
			cin>>c1;
			if(innings==1){
			ball1.display();}
			else if(innings==2){
			ball2.display();}
			select:
			cout<<"Select bowler number.(1-"<<totalbowlers<<")\n";
			cin>>bowlernumber;
			if(bowlernumber>0&&bowlernumber<=totalbowlers){
			/*	if(innings==1){
			    ball1.edit(bowlernumber, overscore,wickets);
			}
			else if(innings==2){
				 ball2.edit(bowlernumber, overscore,wickets);
			}*/}
			else{cout<<"Invalid option, select again.\n";
			goto select;
			}
		while(out<10&&over<maxovers){
			if(innings==2&&totalscore>=target){
			goto p;}
	bat2.display();
	cout<<"Select what happened at "<<"Over "<<over<<" Ball "<<ball<<endl;
	cout<<"0) 0   1) 1   2) 2   3) 3   4) 4   5) 5   6) 6   7)Wide   8) No-Ball   9) Out\n";
	cin>>choice;
	if (choice==0){
		if(strike%2==0){
		//s1++;
		b1++;}
		else if(strike%2!=0){
		//	s2++;
			b2++;
	}
	ball++;
	maxballs--;
				freehit=0;
	ovr.enqueue(0);}
	else if(choice==1){
		totalscore++;
		if(strike%2==0){
		s1++;
		b1++;}
		else if(strike%2!=0){
			s2++;
			b2++;
		}
		maxballs--;
		strike++;
		ball++;
					freehit=0;
		ovr.enqueue(1);
	}
	else if(choice==2){
		totalscore=totalscore+2;
		if(strike%2==0){
		s1=s1+2;
		b1++;}
		else if(strike%2!=0){
			s2=s2+2;
		b2++;}
				maxballs--;
		ball++;
					freehit=0;
		ovr.enqueue(2);
	//	strike++;
	}
		else if(choice==3){
		totalscore=totalscore+3;
		if(strike%2==0){
		s1=s1+3;
		b1++;}
		else if(strike%2!=0){
			s2=s2+3;
			b2++;
		}
		ball++;
				maxballs--;
		ovr.enqueue(3);
		strike++;
					freehit=0;
	}
		else if(choice==4){
		totalscore=totalscore+4;
		if(strike%2==0){
		s1=s1+4;
		b1++;}
		else if(strike%2!=0){
			s2=s2+4;
			b2++;
		}
				maxballs--;
		ovr.enqueue(4);
					freehit=0;
		ball++;
	//	strike++;
	}
		else if(choice==5){
		totalscore=totalscore+5;
		if(strike%2==0){
		s1=s1+5;
		b1++;}
		else if(strike%2!=0){
			s2=s2+5;
			b2++;
		}
				maxballs--;
		ball++;
		ovr.enqueue(5);
					freehit=0;
		strike++;
	}
		else if(choice==6){
			freehit=0;
		totalscore=totalscore+6;
		if(strike%2==0){
		s1=s1+6;
		b1++;}
		else if(strike%2!=0){
			s2=s2+6;
			b2++;
		}
				maxballs--;
		ball++;
		ovr.enqueue(6);
	//	strike++;
	}
		else if(choice==7){
		totalscore=totalscore+1;
		extras++;
	//	strike++;
	ovr.enqueue(-2);
	}
		else if(choice==8){
		totalscore=totalscore+1;
				extras++;
		freehit++;
	//	strike++;
	ovr.enqueue(-3);
	}
		else if(choice==9){
			if(freehit==1){
				cout<<"IT'S A FREEHIT YOU FOOL!\n";
			}else{
					maxballs--;
			wickets++;
		if(strike%2==0){
			if(innings==1){
		bat1.createbat(s1,b1,c);}
		else if(innings==2){
			bat2.createbat(s1,b1,c);
		}
	//	bat1.display();
			cout<<"\nBatter "<<c<<" got out on "<<s1<<" runs. After facing "<<b1<<" balls.\n\n";
			cout<<"Enter name of next batter:";
		cin>>c;
		s1=0;
		b1=0;
		out++;
	
		}
		else if(strike%2!=0){
	if(innings==1){
	bat1.createbat(s2,b2,c1);}
	else if(innings==2){
		bat2.createbat(s2,b2,c1);
	}
		cout<<"\nBatter "<<c1<<" got out on "<<s2<<" runs. After facing "<<b2<<" balls.\n\n";
		cout<<"Enter name of next batter:";
		cin>>c1;
		s2=0;
		b2=0;
		out++;
}
		ball++;
		ovr.enqueue(-1);
	//	strike++;
	}}
	else{cout<<"Invalid choice\n";
	}
	cout<<endl<<"TOTAL SCORE: "<<totalscore<<endl;
		cout<<endl<<"WICKETS: "<<out<<endl;
			cout<<endl<<"BALLS LEFT: "<<maxballs<<endl;
         towin=target-totalscore;
		if(innings==2){
			cout<<endl<<"TO WIN "<<bowl<<" need "<<towin<<" runs in "<<maxballs<<endl;
		}

	if((ball-1)%6==0&&ball>5){
		over++;
	
		cout<<"\nThis over: \n";
		while(!ovr.isEmpty()){
			if(ovr.displayrear()>=0&&ovr.displayrear()<=6){
			cout<<ovr.displayrear()<<endl;}
			else if(ovr.displayrear()==-1){
				cout<<"Wicket\n";
			}
			else if(ovr.displayrear()==-2){
				cout<<"Wide\n";
			}
			else if(ovr.displayrear()==-3){
				cout<<"No Ball\n";
			}
			ovr.dequeue();
			
		}strike++;
		overscore=totalscore-overscore;
		
		totalballs=totalballs+6;
			ball=1;
			cout<<endl<<"Total score: "<<totalscore<<endl;
			cout<<endl<<"Runs scored this over: "<<overscore<<endl;
			cout<<endl<<"Total overs played: "<<over<<endl<<endl;
			cout<<endl<<"Total wickets fallen: "<<out<<endl<<endl;
						cout<<endl<<"Extras: "<<extras<<endl<<endl;
			select1:
			
			if(bowlernumber>0&&bowlernumber<=totalbowlers){
				if(innings==1){
			    ball1.edit(bowlernumber,overscore,wickets);
			}
			else if (innings==2){
		        ball2.edit(bowlernumber,overscore,wickets);

			}}
			else{cout<<"Invalid option, select again.\n";
			goto select1;
		
		
			//	ball1.createbowl(overscore, )
	}wickets=0;
	overscore=totalscore;
	if (innings==1){
		ball1.display();}
		else if (innings==2){
			ball2.display();
		}
	bat1.display();
		cout<<"Batter "<<c<<" has scored "<<s1<<" runs in "<<b1<<" balls.\n";
		cout<<"Batter "<<c1<<" has scored "<<s2<<" runs in "<<b2<<" balls.\n";
		if(over>=maxovers||out>=10){
			goto p;
		}

	check=bowlernumber;
	d:
	cout<<"Select a different bowler number.(1-"<<totalbowlers<<")\n";
			cin>>bowlernumber;
			if(check==bowlernumber||bowlernumber<1||bowlernumber>totalbowlers){
				cout<<"Please choose a different bowler.\n";
				goto d;
			}
			if(innings==1){
			if(	ball1.overlimit(bowlernumber, overperbowler))
			goto d;
			}
			if(innings==2){
			if(	ball2.overlimit(bowlernumber, overperbowler))
			goto d;
			}
	}
//cout<<out<<endl<<over<<endl<<"Max overs are:"<<maxovers<<endl;
	}
	p:
	if(innings==1){
	cout<<"\n\n END OF 1ST INNINGS\n\n";
	cout<<endl<<"Total score: "<<totalscore<<endl;
	target=totalscore+1;
	cout<<endl<<bowl<<" has to score "<<target<<" runs in "<<maxovers<<" overs."<<endl<<endl;
			cout<<endl<<"Total balls played: "<<totalballs<<endl<<endl;
			cout<<endl<<"Total wickets fallen: "<<out<<endl<<endl;
			bat1.display();
			cout<<"Batter "<<c<<" has scored "<<s1<<" runs in "<<b1<<" balls.\n";
		cout<<"Batter "<<c1<<" has scored "<<s2<<" runs in "<<b2<<" balls.\n";
				cout<<"\n\n START OF 2ND INNINGS\n\n";
				totalscore=0;
				a1=s1;
				a2=b1;
				a3=c;
				d3=c1;
				d1=s2;
				d2=b2;
				out=0;
				innings++;
				choice=0;
				strike=2;
				totalballs=0;
				overscore=0;
				ball=1;
				over=0;
				 s1=0;
				 s2=0;
				 b1=0;
				 extras=0;
				 b2=0;
				 o=0;
				 maxballs=maxovers*6;}
	else if(innings==2){
		rmnwkt=10-out;
		if(totalscore>=target){
			cout<<endl<<endl<<bowl<<" HAS WON THE MATCH WITH "<<rmnwkt<<" WICKETS LEFT !!!\n\n" ;
		}
		else{
			cout<<endl<<endl<<bat<<" HAS WON THE MATCH BY "<<towin<< " RUNS !!!\n\n";
		}
		cout<<"\n***** FIRST INNINGS SCORECARD*****\n";
		bat1.display();
			cout<<"Batter "<<a3<<" has scored "<<a1<<" runs in "<<a2<<" balls.\n";
		cout<<"Batter "<<d3<<" has scored "<<d1<<" runs in "<<d2<<" balls.\n";
		ball1.display();
		cout<<"\n***** SECOND INNINGS SCORECARD*****\n";
		bat2.display();
			cout<<"Batter "<<c<<" has scored "<<s1<<" runs in "<<b1<<" balls.\n";
		cout<<"Batter "<<c1<<" has scored "<<s2<<" runs in "<<b2<<" balls.\n";
		ball2.display();
				cout<<"\n*****MATCH HAS ENDED*****\n";

		innings++;
	}
}}
};
int main(){
	match obj;
	obj.setMatchDetails(); 
	obj.menu();
	obj.startinnings();
	return 0;
}
