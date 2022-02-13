#include<iostream>
using namespace std;

int main(){
	
	// Integer use for how many bike, car and bus.
	int bike=0;
	int car=0;
	int bus=0;
	
	// Integer use for how many amount and count.
	int u_input;
	int amount=0,count=0;
	
	//Menu.
	while(true)
	{	
		cout<<endl;
		cout<<"##############################################"<<endl;
		cout<<"#           Parking Recording Data           #"<<endl;
		cout<<"##############################################"<<endl;	
		cout<<"Press 1 For Bike"<<endl;
		cout<<"Press 2 For Car"<<endl;
		cout<<"Press 3 For Bus"<<endl;
		cout<<"Press 4 To Show All The Recorded Data"<<endl;
		cout<<"Press 5 To Delete All The Recorded Data"<<endl;
		cout<<endl;
		cin>>u_input;
	
	// It is use to park the bike, amount, count and parking full.
	if(u_input==1)
	{
		bike++;
	if(count <= 50)
	{
		amount = amount + 100;
		count = count + 1;
	}
	else
		cout<<"No more Bike, Parking is full"<<endl;
	}
	
	// It is use to park the car, amount, count and parking full. 
	else if(u_input==2)
    {
	if(count <= 50){
		car++;
		amount = amount + 200;
		count = count + 1;
	}
	else
		cout<<"No more Car, Parking is full"<<endl;
	}
	
	// It is use to park the bus, amount, count and parking full. 
	else if(u_input==3)
	{
	if(count <= 50)
	{
		bus++;
		amount = amount + 300;
		count = count + 1;
	}
	else
		cout<<"No more Bus, Parking is full"<<endl;
	}
	
	// It is used to view recoding data.
	else if(u_input==4)
	{
		cout<<endl;
		cout<<"**********************************************"<<endl;
		cout<<"**          Show All Recorded Data          **"<<endl;
		cout<<"**********************************************"<<endl;
		cout<<"The total amount ="<<amount<<endl;
		cout<<"The total number of vehicles parked ="<<count<<endl;
		cout<<"The total number of Bike parked ="<<bike<<endl;
		cout<<"The total number of Car parked ="<<car<<endl;
		cout<<"The total number of Bus parked ="<<bus<<endl;
		cout<<endl;
		cout<<endl;
	}
	
	// It is used to delete recorded data.
	else if(u_input == 5)
	{
		amount = 0;
		count = 0;
		cout<<endl;
		cout<<"dddddddddddddddddddddddddddddddddddddddddddddd"<<endl;
		cout<<"dd         Delete All Recorded Data         dd"<<endl;
		cout<<"dddddddddddddddddddddddddddddddddddddddddddddd"<<endl;
		cout<<endl;
		cout<<endl;
	}
	else {
		cout<<"Invalid Number"<<endl;
	}
}  
	return 0;
}
