#include <iostream>
#include<stdlib.h>
#include<string>
#include<map>
#include<time.h>
#include<Windows.h>
#include<unistd.h>
#include<bits/stdc++.h>
using namespace std;

map<string,string> users={           //map to store predefined users
    {"Shubham","kohima"},
    {"Aanchal","kangra"},
    {"Gaurav","delhi"},
    {"Deepali","himachal"},
    {"Ritesh","haryana"}};           
    
map<string,string>::iterator it;

int verify(string n,string d,string m,string a,string e){     //to verify the details of users 
    int f=0;
    if(n.length()>3&&d.length()==10&&m.length()==10&&a.length()>10&&e.length()>8)
    f=1;
    for(int i=0;i<10;i++){
     if(!isdigit(m[i]))
     {
        f=0;
        break;
     }
    }
return f;
}

int checku(string u){       //checks if username exists
 it=users.find(u);
 if(it!=users.end())
    return 1;
  return 0;
}

int generateotp(){         //generates and prints otp during user login
   int temp;
   srand(time(0));
   temp=rand();
    return temp%100000;
}

int checks(string u,string s){     //checks if the answer of the security question is true
auto search=users.find(u);
if(search->second==s)
    return 1;
return 0;
}

string generatep(){                 //generates and print the password during user login 
   char temp;
   string f="";
   int r;
   srand(time(0));
   for(int i=0;i<6;i++){
    r=rand()%26;
    if(i%2==0){
    temp=(r+'a');
    f=f+temp;}
    else
    f=f+to_string(r);
   }
    return f;
}

void after_entry(){             //things to be done after a successful login
    
    system("CLS");
    int bal=5000,ch,i;
    char a, acc[20]; 
	    cout<<"\n\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+";
        cout<<"\n\t\t\t|                              |";
        cout<<"\n\t\t\t+                              +";
	    cout<<"\n\t\t\t|  WELCOME TO THE FUTURE BANK  |";                          
        cout<<"\n\t\t\t+                              +";                        
        cout<<"\n\t\t\t|                              |";
	    cout<<"\n\t\t\t|+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=|";
        cout<<"\n\t\t\t|                              |";
        cout<<"\n\t\t\t|                              |";
        cout<<"\n\t\t\t|                              |";
		cout<<"\n\n\n\t\t\t\t    ::MAIN MENU::\n";
		cout<<"\n\t\t\t\t1. DEPOSIT AMOUNT";
		cout<<"\n\t\t\t\t2. WITHDRAW AMOUNT";
		cout<<"\n\t\t\t\t3. MONEY TRANSFER";
		cout<<"\n\t\t\t\t4. BALANCE ENQUIRY";
		cout<<"\n\t\t\t\t5. DEMAT ACCOUNT";
		cout<<"\n\t\t\t\t6. EXIT";
		cout<<"\n\n\t\t\t    Select Your Option (1-8): ";
		cin>>ch;
        system("CLS");
		switch(ch)
		{
		case 1:
			cout<<"\n\n\t\t\tEnter The Amount : "; cin>>i;
            system("CLS");
            cout<<"\n\n\t\t"<<i<<" amount succesfully added.";
            bal+=i;
			cout<<"\n\n\t\t\tBalance : "<<bal;
			usleep(10000000);
            system("CLS");
			after_entry();
			break;
		case 2:
			cout<<"\n\n\t\t\tEnter The Amount : "; cin>>i;
            system("CLS");
			if(i>5000)
			cout<<"\n\n\t\t\tInsufficient Balance";
			else{
            cout<<"\n\n\t\t"<<i<<" Amount Withdrawn Successfull.";
            bal-=i;
			cout<<"\n\n\t\t\tBalance : "<<bal;
            }usleep(10000000);
            system("CLS");
			after_entry();
			break;
		case 3:
			cout<<"\n\n\t\t\tEnter The account No. : ";
			cin>>a;
			gets(acc);
			cout<<"\n\n\t\t\tEnter the amount : "<<bal;
			if(bal>5000)
			cout<<"\n\n\t\t\tInsufficient Balance";
			else{
			cout<<"\n\n\t\t\tBalance : "<<5000-bal;
			cout<<"\n\n\t\t\t<--Transfer Successfull-->";
			}
            usleep(10000000);
            system("CLS");
	        after_entry();
			break;
		case 4:
			cout<<"\n\n\t\t\tCurrent Balance : "<<bal;
            cout<<"\n\n\t\t\tVirtual Card 4346 7653 1283 4321 Balance : 0000";
	        usleep(10000000);
            system("CLS");
	        after_entry();
			break;
		case 5:
            cout<<"\n\t\t\t:::  DEMAT MENU:::";
	        cout<<"\n\n\t\t1. Inside Sell Stock\n\t\t2. Buy Stock\n\t\t3. Activate Virtual Card";
            int t;
            cout<<"\n\n\t\t Enter Your Choice:::";
            cin>>t;
            if(t==3){
            system("CLS");
            cout<<"\n\n\t\t<--THE CARD IS VALID FOR THE NEXT 48 hours-->";
            cout<<"\n\t\t    ________________________________";
            cout<<"\n\t\t    |         Virtual Card         |";
            cout<<"\n\t\t    |                              |";
	        cout<<"\n\t\t    |09 Mar 2033          CVV:123  |";                          
            cout<<"\n\t\t    |                              |";                        
            cout<<"\n\t\t    |     4346 7653 1283 4321      |";
            cout<<"\n\t\t    |______________________________|";
	        cout<<"\n\t\t    |______________________________|";
	        cout<<"\n\n\t\t\tBalance : "<<bal;
            }
            else
            cout<<"\n\n\t\t !!Sorry for the inconvenience!!";
	        usleep(10000000);
            system("CLS");
	        after_entry();
			break;
		case 6:
			cout<<"\n\n\t\t\t<--Thank You FOR Banking With US-->";
            usleep(1000000);
            system("CLS");
			break;
		}
}

void choice(int c){                               //takes input from user for account creation or bank services
      char n2[25],addr2[50],a,b;
      string place,dob2,email2,m2,u,s,p2,temp2;
      int temp,p,otp;
      int f;
      switch(c){

      case 1: cout<<"Enter your first name::";
        cin>>a;
        gets(n2);
        cout<<"Enter your Date Of Birth (dd/mm/yyyy)::";
        cin>>dob2;
        cout<<"Enter your mobile number::";
        cin>>m2;
        cout<<"Enter your current address::";
        cin>>b;
        gets(addr2);
        cout<<"Enter your email address::";
        cin>>email2;
        cout<<"Security Question-->What place were you born in?";
        cin>>place;
        f=verify(n2,dob2,m2,addr2,email2);
        if(f==1){
        cout<<"\n                                  ->->You are a member now<-<-\n";
        }
        else
        cout<<"Please restart the program and fill valid details";
        break;

      case 2: 
           cout<<"Enter your username:";
           cin>>u;
           if(!checku(u))
            break;
           temp=generateotp();
           cout<<"Otp is : "<<temp<<endl;
           cout<<"Enter the otp sent to your registered mobile number::";
           cin>>otp;
           if(!(otp==temp))
            break;
           cout<<"Security Question: What place were you born in?:::";
           cin>>s;
           if(!checks(u,s))
            break;
            temp2=generatep();
            cout<<"Password is : "<<temp2<<endl;
           cout<<"Enter your generated password sent to your email id::";
           cin>>p2;
           system("CLS");
           if(p2==temp2){
            transform(u.begin(), u.end(), u.begin(), ::toupper);
            cout<<"\n\n\t\t\t\t***WELCOME "+u+"***     ";
            usleep(1500000);
            after_entry();
           
           }
           break;
}
}
int main()
{
    int option;
    cout<<"\n\t\t    =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+";
    cout<<"\n\t\t    |                              |";
    cout<<"\n\t\t    +                              +";
	cout<<"\n\t\t    |  WELCOME TO THE FUTURE BANK  |";                          
    cout<<"\n\t\t    +                              +";                        
    cout<<"\n\t\t    |                              |";
	cout<<"\n\t\t    |+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=|";
    cout<<"\n\t\t    |                              |";
    cout<<"\n\t\t    |                              |";
    cout<<"\n\t\t    |                              |";
    cout<<"\n\n\t->->Please select one of the options mentioned below<-<-\n"<<endl;
    cout<<"\n\t=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=";
    cout<<"\n\t         /\\\\\\                               /\\\\\\ ";
    cout<<"\n\t        /  \\\\\\                             /  \\\\\\ ";
    cout<<"\n\t       /    \\\\\\                           /    \\\\\\ ";
    cout<<"\n\t      /      \\\\\\                         /      \\\\\\ ";
    cout<<"\n\t     / BECOME \\\\\\                       /  BANK  \\\\\\ ";
    cout<<"\n\t    /    A     \\\\\\                     /          \\\\\\ ";
    cout<<"\n\t   /   MEMBER   \\\\\\                   /  SERVICES  \\\\\\ ";
    cout<<"\n\t  /              \\\\\\                 /              \\\\\\ ";
    cout<<"\n\t /________________\\\\\\               /________________\\\\\\ ";
    cout<<"\n\t        ::1::                                 ::2::";
    cout<<"\n\n\t                    Enter your Option::";
    cin>>option;
    system("CLS");
    choice(option);
}


