#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib> 

using namespace std;

void clear(){
	#if _WIN32
	system("cls");
	#else
	system("clear");
	#endif
	cout<<endl;
}

int main()
{
	srand(time(0));

//for(int i=0;i<10;i++){
//	for(int j=0;j<10-i;j++){
//		cout<<" ";
//	}
//	for(int f=0;f<i;f++){
//		cout<<" ";
//	
//	for(int o=0;o<f;o+=10){
//		cout<<"*";
//	}}
//	
//	cout<<endl;
//}
	int point=0,tray=0;
	
	while(true){
		int choice,guess,ra=41;
		
		
		cout<<"If you want play enter 1 if you don't want play enter 0: ";
		cin>>choice;
		
		
		if(choice==0){
			break;
			clear();
		}
		
		
		else{
			clear();
			cout<<"Guess whether the circle will be empty (0) or full (1) : ";	
			cin>>guess;
			int go= rand()%2; // make the game randome:)
			
			
			
			if(go==0){//make a empty circle
				for(int i=1;i<=ra;i++){
					cout<<"\t";
					for(float j=0;j<=(ra*2-sqrt((ra-i)*4*i)*2)/2;j++){
						cout<<" ";
					}
					for(float f=0;f<2*sqrt((ra-i)*4*i);f++){
						if(f==0 || f+1>=sqrt((ra*4-i*4)*i)*2 || i==1 || i==ra-1){
							cout<<"*";
						}
						else{
							cout<<" ";
						}
					}
					cout<<endl;
				}
			}
			
			else if(go==1){//make a fulle circle
				for(int i=1;i<=ra;i++){
					cout<<"\t";
					for(float j=0;j<=(ra*2-sqrt((ra-i)*4*i)*2)/2;j++){
						cout<<" ";
					}
					for(float f=0;f<2*sqrt((ra-i)*4*i);f++){
						cout<<"*";
					}
					cout<<endl;
				}	
			}
			
			
			
			if(guess==go){
				system("color 1f");
				cout<<setw(40)<<left<<"Congratulations your guess was correct"<<setw(70)<<setfill('-')<<right<<" Points: "<<++point<<endl;
			}
			
			else{
				system("color 4f");
				cout<<setw(40)<<left<<"Good luck next time, your guess was wrong"<<setw(70)<<setfill('-')<<right<<" Points: "<<point<<endl;
			}
	
			
				
			tray++;
			cout<<endl<<endl<<endl;		
				
		}
		
		if(tray==6 && point==6){
			cout<<"Get out you cheated in my game!:(\n\n";
			break;
		}
		
	}
	if(tray==6 && point==6){
		system("color 4f");
	}
	else{
		system("color 2f");
	}

	cout<<endl<<"\nYou play the game for "<<tray<<" times and get "<<point<<" points";
	
}
