#include<iostream>
#include<windows.h>
#include<string>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>


using namespace std;
class Parent{
	protected:
		string pehli_team,doosri_team,pehlikeplayer[5],doosrikeplayer[5];
		int overs,a,c,d,b,gaind,toss_winner,meri_marzi;
	public:	
		void display();
		void toss();
		void over_amount();
		void marzi();
		void teemokeplayer();
};
void Parent::display(){
		cout<<"===================";
	Sleep(1000);
	    cout<<" WELCOME ";
	Sleep(1000);
		cout<<"SIR ";
	Sleep(1000);
		cout<<"FAROOQ ";
	Sleep(1000);
		cout<<"==================="<<endl<<endl<<endl;
	
	cout<<"PRESS 69 TO START:"<<endl;
	cin>>a;
	if(a==69){
		over_amount();
	}
	else
	cout<<"\t\t\t------bye bye!------"<<endl;
}
void Parent::over_amount(){
	system("cls");
	cout<<"\t\t\tEnter Number Of Overs To Be Played: "<<endl;
	cout<<"\t\t\t";
	cin>>overs;
	system("cls");
	gaind=(overs)*6;
	cout<<"\t\t\tnumber of balls= "<<gaind<<endl;
    cout<<"\t\t\tEnter the first team:"<<endl;
    cout<<"\t\t\t";
	cin>>pehli_team;
	cout<<"\t\t\tEnter the second team:"<<endl;
	cout<<"\t\t\t";
	cin>>doosri_team; 
	teemokeplayer();                          
	cout<<"\t\t\tNOW SHOULD WE HEAD OVER TO THE TOSS (1 for yes)(2 for no):"<<endl;
	cout<<"\t\t\t";
	cin>>b;
	switch(b){
		case 1:toss();
		break;
		case 2:cout<<"\t\t\t------bye bye then!------"<<endl;
		break;
	}
}
void Parent::toss(){
	system("cls");
	cout<<"\t\t\tWho won the toss!"<<endl;
	cout<<"\t\t\tFor "<<pehli_team<<" press 1"<<endl;
	cout<<"\t\t\tFor "<<doosri_team<<" press 2"<<endl;
	cout<<"\t\t\t";
	cin>>toss_winner;
	switch(toss_winner){
		case 1:cout<<"\t\t\t!!!Congrats!!! "<<pehli_team<<endl;
		marzi();
		break;
		case 2:cout<<"\t\t\t!!!Congrats!!! "<<doosri_team<<endl;
		marzi();
	}}
void Parent::marzi(){
	cout<<"\t\t\tChoose batting or balling?"<<endl;
	cout<<"\t\t\tPress 1 for batting and 2 for balling"<<endl;
	cout<<"\t\t\t";
	cin>>meri_marzi;
	switch(meri_marzi){
		case 1:cout<<"\t\t\tChooses to bat first"<<endl;
		break;
		case 2:cout<<"\t\t\tChooses to ball first"<<endl;
	}
	if (toss_winner==1&&meri_marzi==1)
            {
            cout<<"\t\t\t"<<pehli_team<<" have won the toss and elected to bat first"<<endl;
            cout<<"\t\t\t"<<pehli_team<<" is playing the first innings"<<endl;
            }
            else if (toss_winner==1&&meri_marzi==2)
            {
            cout<<"\t\t\t"<<pehli_team<<" have won the toss and elected to ball first"<<endl;
            cout<<"\t\t\t"<<doosri_team<<" is playing the first innings"<<endl;           
            }
            else if (toss_winner==2&&meri_marzi==1)
            {
            cout<<"\t\t\t"<<doosri_team<<" have won the toss and elected to bat first"<<endl;
            cout<<"\t\t\t"<<doosri_team<<" is playing the first innings"<<endl;
            }
            else if (toss_winner==2&&meri_marzi==2)
            {
            cout<<"\t\t\t"<<doosri_team<<" have won the toss and elected to ball first"<<endl;
            cout<<"\t\t\t"<<pehli_team<<" is playing the first innings"<<endl;
           
            }
            return;
}
void Parent::teemokeplayer(){
	system("cls");
	cout<<"\t=======>Enter players of "<<pehli_team<<endl;
	for (int i=0;i<6;i++)
        {
        	cout<<"\t\t\t";
            getline(cin,pehlikeplayer[i]);
        }
        cout<<"\t=======>Enter players of "<<doosri_team<<endl;
        for (int i=0;i<5;i++)
        {
        	cout<<"\t\t\t";
            getline(cin,doosrikeplayer[i]);
        }

};
//******
class child:public Parent{
	private:
		int run_striker[6]={0,0,0,0,0,0};
		int run_nonstriker[6]={0,0,0,0,0,0};
		int run_striker2[6]={0,0,0,0,0,0};
		int ball_striker2[6]={0,0,0,0,0,0};
		int ball_striker[6]={0,0,0,0,0,0};
		int ball_nonstriker[6]={0,0,0,0,0,0};
		int bowlerballs[6];
		int bowlerballs2[6];
		int bowlerruns[6];
		int bowlerruns2[6];
				int runs=0,runs2=0,wickets=0,wickets2=0,ball,ball2,balls,balls2,rem_ball,rem_ball2,power,power2,batsmanruns;
		float over,over2;
		int striker,nonstriker,striker2,nonstriker2,bowler,bowler1;
		public:
			child();
			child2();
			void playing();
			void overs_1();
			void play();
			void sbdisplay();
			void sbdisplay2();
			void play2();
			void strikernon();
			void strikernon2();
			void winner();
			void bowler3();
			void bowler2();
};
child::child(){
	ball=0;
	balls=0;
	ball2=0;
	balls2=0;
	batsmanruns=0;
	over=0;
	over2=0;
	striker=0;
	nonstriker=0;
	striker2=0;
	nonstriker2=0;
}
child::child2(){
	ball2=0;
	balls2=0;
	over2=0;
}


void child::sbdisplay(){
		if(ball>5)
			   	{
			   		ball=0;
				    over++;
				    bowler3();
				}
	cout<<"\t\t"<<"***"<<pehli_team<<" SCORE BOARD"<<"***"<<endl;
	cout<<"\t====================================================="<<endl;
	cout<<"\t\t"<<"TOTAL"<<"       "<<"WICKETS"<<endl;                                               
		cout<<"\t====================================================="<<endl;
	cout<<"\t\t"<<runs<<"          "<<wickets<<endl;                                                       
		cout<<"\t-----------------------------------------------------"<<endl;
	cout<<"overs"<<endl;                                                                           
		
	cout<<"\t\t"<<over<<"."<<ball<<endl; 
	cout<<"\t\t\t"<<"STRIKER"<<endl;                                                                  
		
	cout<<pehlikeplayer[striker]<<"\t\t\t("<<run_striker[striker]<<")("<<ball_striker[striker]<<")"<<endl;
	cout<<"\t_____________________________________________________"<<endl;
	//cout<<pehlikeplayer[nonstriker]<<endl;
	cout<<"\t\t\t"<<"BOWLER"<<endl;
	cout<<doosrikeplayer[bowler]<<"\t\t\t("<<bowlerballs[bowler]<<")("<<bowlerruns[bowler]<<")"<<endl;                                                           cout<<"*"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t_____________________________________________________"<<endl;

	
}
void child::play(){
rem_ball=gaind;
bowler3();
cout<<"\t\t\t"<<pehli_team<< "BATTING............................"<<endl;
		while(balls<gaind&&wickets<10){
			getch();
			system("cls");
			cout<<endl;
			
			strikernon();
			
			cout<<"\t\t"<<"For dot ball press 0"<<endl;
			cout<<"\t\t"<<"For one run press 1"<<endl;
			cout<<"\t\t"<<"For two run press 2"<<endl;
			cout<<"\t\t"<<"For three run press 3"<<endl;
			cout<<"\t\t"<<"For four run press 4"<<endl;
			cout<<"\t\t"<<"For six run press 6"<<endl;
			cout<<"\t\t"<<"For wide run press 7"<<endl;
			cout<<"\t\t"<<"For no-ball run press 8"<<endl;
			cout<<"\t\t"<<"For wicket press 9"<<endl;
			cout<<"\t\t\t";
			cin>>power;
			switch(power){
				case 0:
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
					
					ball_striker[striker]=ball_striker[striker]+1;
					sbdisplay();
					
					break;
					
					case 1:
						runs++;
						balls++;
						ball++;
						bowlerballs[bowler]=bowlerballs[bowler]+1;
						bowlerruns[bowler]=bowlerruns[bowler]+1;
						run_striker[striker]=(run_striker[striker])+1;
          
                        ball_striker[striker]=ball_striker[striker]+1;
			
			
			            sbdisplay();
			            cout<<"\t\tplayers rotating strike...."<<endl;
						
						cout<<"\t\t"<<"Striker"<<pehlikeplayer[nonstriker]<<endl;
			          	cout<<"\t\t"<<"Non-Striker"<<pehlikeplayer[striker]<<endl;
					break;
					
					case 2:
					runs+=2;
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
						run_striker[striker]=(run_striker[striker])+2;
          			bowlerruns[bowler]=bowlerruns[bowler]+2;
                        ball_striker[striker]=ball_striker[striker]+1;
					
					sbdisplay();
					break;
					
					case 3:
					runs+=3;
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
						run_striker[striker]=(run_striker[striker])+3;
          			bowlerruns[bowler]=bowlerruns[bowler]+3;
                        ball_striker[striker]=ball_striker[striker]+1;
				
					cout<<"\t\t"<<"Striker"<<pehlikeplayer[nonstriker]<<endl;
			          	cout<<"\t\t"<<"Non-Striker"<<pehlikeplayer[striker]<<endl;
				
					sbdisplay();
					break;
					
					case 4:
					runs+=4;
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
						run_striker[striker]=(run_striker[striker])+4;
          			bowlerruns[bowler]=bowlerruns[bowler]+4;
                        ball_striker[striker]=ball_striker[striker]+1;
					
					sbdisplay();
					break;
					
					case 6:
					runs+=6;
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
						run_striker[striker]=(run_striker[striker])+6;
          			bowlerruns[bowler]=bowlerruns[bowler]+6;
                        ball_striker[striker]=ball_striker[striker]+1;
					
					sbdisplay();
					break;
					
					case 7:
					runs+=1;
					bowlerruns[bowler]=bowlerruns[bowler]+1;
					sbdisplay();
					break;
					
					case 8:
					runs+=1;
				
					bowlerruns[bowler]=bowlerruns[bowler]+1;
					sbdisplay();
					break;
					
					case 9:
					wickets++;
					balls++;
					ball++;
					bowlerballs[bowler]=bowlerballs[bowler]+1;
					ball_striker[striker]=ball_striker[striker]+1;
					
					
				
							
					
					sbdisplay();
					
					break;
					
				
						
			}
			
		
			
//****			
	
}}
void child::sbdisplay2(){

		if(ball2>5)
			   	{
			   		ball2=0;
				    over2++;
				    bowler2();
				}
	cout<<"\t\t"<<"***"<<doosri_team<<" SCORE BOARD"<<"***"<<endl;
	cout<<"\t====================================================="<<endl;
	cout<<"\t\t"<<"TOTAL"<<"       "<<"WICKETS"<<endl;             
		cout<<"\t====================================================="<<endl;
	cout<<"\t\t"<<runs2<<"          "<<wickets2<<endl;             
		cout<<"\t-----------------------------------------------------"<<endl;
	cout<<"\t\t"<<"overs"<<endl;                                   
		
	cout<<"\t\t"<<over2<<"."<<ball2<<endl; 
	cout<<"\t\t\tSTRIKER"   <<endl;                     
		
	cout<<doosrikeplayer[striker2]<<"\t\t\t("<<run_striker2[striker2]<<")("<<ball_striker2[striker2]<<")"<<endl;
	cout<<"\t_____________________________________________________"<<endl;          
	//cout<<doosrikeplayer[nonstriker]<<endl; 
	cout<<"\t\t\tBOWLER"<<endl;             cout<<"*"<<endl;
	cout<<pehlikeplayer[bowler1]<<"\t\t\t("<<bowlerballs2[bowler1]<<")("<<bowlerruns2[bowler1]<<")"<<endl;
	cout<<"\t_____________________________________________________"<<endl;
	}
	
	
void child::play2(){
	cout<<"\t\t\t"<<doosri_team<<" BATTING........."<<endl;
rem_ball2=gaind;
bowler2();
		while(balls2<gaind&&wickets2<10){
			strikernon2();
			
			cout<<"\t\t"<<"For dot ball press 0"<<endl;
			cout<<"\t\t"<<"For one run press 1"<<endl;
			cout<<"\t\t"<<"For two run press 2"<<endl;
			cout<<"\t\t"<<"For three run press 3"<<endl;
			cout<<"\t\t"<<"For four run press 4"<<endl;
			cout<<"\t\t"<<"For six run press 6"<<endl;
			cout<<"\t\t"<<"For wide run press 7"<<endl;
			cout<<"\t\t"<<"For no-ball run press 8"<<endl;
			cout<<"\t\t"<<"For wicket press 9"<<endl;
			cout<<"\t\t\t";
			cin>>power2;
			switch(power2){
				case 0:
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
					
          
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 1:
					runs2++;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
					run_striker2[striker2]=(run_striker2[striker2])+1;
                    bowlerruns2[bowler1]=bowlerruns2[bowler1]+1;
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 2:
					runs2+=2;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
					run_striker2[striker2]=(run_striker2[striker2])+2;
          			bowlerruns2[bowler1]=bowlerruns2[bowler1]+2;
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 3:
					runs2+=3;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
							run_striker2[striker2]=(run_striker2[striker2])+3;
          			bowlerruns2[bowler1]=bowlerruns2[bowler1]+3;
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 4:
					runs2+=4;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
					run_striker2[striker2]=(run_striker2[striker2])+4;
          			bowlerruns2[bowler1]=bowlerruns2[bowler1]+4;
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 6:
					runs2+=6;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
					run_striker2[striker2]=(run_striker2[striker2])+6;
          			bowlerruns2[bowler1]=bowlerruns2[bowler1]+6;
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
					
					case 7:
					runs2+=1;
					bowlerruns2[bowler1]=bowlerruns2[bowler1]+1;
					sbdisplay2();
					break;
					
					case 8:
					runs2+=1;
					bowlerruns2[bowler1]=bowlerruns2[bowler1]+1;
					sbdisplay2();
					break;
					
					case 9:
					wickets2++;
					balls2++;
					ball2++;
					bowlerballs2[bowler1]=bowlerballs2[bowler1]+1;
                      
          
                        ball_striker2[striker2]=ball_striker2[striker2]+1;
					sbdisplay2();
					break;
						
			}
			
	
}

	
}
void child::strikernon(){
		
		cout<<"\tPress 1 for "<<pehlikeplayer[1]<<endl;
    	cout<<"\tPress 2 for "<<pehlikeplayer[2]<<endl;
    	cout<<"\tPress 3 for "<<pehlikeplayer[3]<<endl;
    	cout<<"\tPress 4 for "<<pehlikeplayer[4]<<endl;
    	cout<<"\tPress 5 for "<<pehlikeplayer[5]<<endl;
                    cout<<"\t\tEnter the striker"<<endl;
					cout<<"\t\t\t";
					cin>>striker;
					//cout<<"enter non-striker"<<endl;
					//cin>>nonstriker;
	
}
void child::strikernon2(){
	    cout<<"\tPress 0 for "<<doosrikeplayer[0]<<endl;
    	cout<<"\tPress 1 for "<<doosrikeplayer[1]<<endl;
    	cout<<"\tPress 2 for "<<doosrikeplayer[2]<<endl;
    	cout<<"\tPress 3 for "<<doosrikeplayer[3]<<endl;
    	cout<<"\tPress 4 for "<<doosrikeplayer[4]<<endl;
                    cout<<"\t\tEnter the striker"<<endl;
					cout<<"\t\t\t";
					cin>>striker2;
					//cout<<"enter non-striker"<<endl;
					//cin>>nonstriker2;
}
void child::bowler3(){
	    cout<<"\tPress 0 for "<<doosrikeplayer[0]<<endl;
    	cout<<"\tPress 1 for "<<doosrikeplayer[1]<<endl;
    	cout<<"\tPress 2 for "<<doosrikeplayer[2]<<endl;
    	cout<<"\tPress 3 for "<<doosrikeplayer[3]<<endl;
    	cout<<"\tPress 4 for "<<doosrikeplayer[4]<<endl;
                    cout<<"\t\tEnter the bowler"<<endl;
					cout<<"\t\t\t";
					cin>>bowler;
					
}
void child::bowler2(){
		cout<<"\tPress 1 for "<<pehlikeplayer[1]<<endl;
    	cout<<"\tPress 2 for "<<pehlikeplayer[2]<<endl;
    	cout<<"\tPress 3 for "<<pehlikeplayer[3]<<endl;
    	cout<<"\tPress 4 for "<<pehlikeplayer[4]<<endl;
    	cout<<"\tPress 5 for "<<pehlikeplayer[5]<<endl;
	                cout<<"\t\tEnter the bowler"<<endl;
					cout<<"\t\t\t";
					cin>>bowler1;
					
}
void child::playing(){
	if (toss_winner==1&&meri_marzi==1)
            {
            play();
            play2();
            
			}
            
            else if (toss_winner==1&&meri_marzi==2)
            {
           play2(); 
		   play();         
            }
            else if (toss_winner==2&&meri_marzi==1)
            {
            play2();
            play();
            }
            else if (toss_winner==2&&meri_marzi==2)
            {
            	play();
            	play2();
      
           
            }
}
void child::winner(){
	if (toss_winner==1)
    {
        if(runs>runs2)
           	cout<<"\t^v^v^v^v^v^"<<pehli_team<<" has won the match"<<"^v^v^v^v^v^"<<endl;
			
		else
			cout<<"\t^v^v^v^v^v^"<<doosri_team<<" has won the match"<<"^v^v^v^v^v^"<<endl;
            
    }
            
    else if (toss_winner==2)
    {
       	if(runs2>runs)
           	cout<<"\t^v^v^v^v^v^"<<doosri_team<<" has won the match"<<"^v^v^v^v^v^"<<endl;
			
		else
			cout<<"\t^v^v^v^v^v^"<<pehli_team<<" has won the match"<<"^v^v^v^v^v^"<<endl;
    }
            
}



int main(){
	system("color b0");
	Parent p;
	child c;
	c.display();
	c.playing();
	c.winner();
	
	
	
}
