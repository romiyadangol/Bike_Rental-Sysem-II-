#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<unistd.h>
#include<windows.h>
#include<ctime>
using namespace std;
/******************************************************FunctionDeclaration************************************************/
void adminlogin();
void userregister();
void userlogin();
void fullscreen();
void load_EXIT();
void exitArt();
void gotoxy(int , int );
/******************************************************ClassCreationForAdmin**************************************************/
class bbike
{
	public:
		int ch;
		void input(); 
		void add_bikes();
		void show_bikes();
		void check_bikes();
		void update_bikes();
		void del_bikes();
};
/*****************************************************ClassCreationForMain**************************************************/
class bike{
    public :
    string customer_name;
    string customer_gender;
    double contact_no;
    double citizenship_no;
    int customer_age;
    int ch1;
    int ch2;
    /******************************************************Welcome************************************************/
    void welcome()
    {
    	gotoxy(10,10);
    	ifstream ifs ("welcome.txt");
    	string lines ="";
    	if(ifs)
    	{
    		while(ifs.good())
    		{
    			string  tempLine;
    			getline(ifs,tempLine);
    			tempLine += "\n";
    			lines +=tempLine;
			}
			cout<< lines ;
		}
		ifs.close();
	}
};
class rent : public bike{
    public :
    int rentHr;
    int amt;
    int rentFee1;
    int rentFee2;
    int advanceAmt;
    void time1()
    {
    	time_t timetoday;
   		time (&timetoday);
   		cout<<asctime(localtime(&timetoday));
	}
    void calcuRent1()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\n\t\tEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch1==1)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==2)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==3)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==4)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==5)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;
            
        }
        if(ch1==6)
        {
            rentFee1=rentHr*110;
            amt=rentFee1-advanceAmt;  
        }
        if(ch1==7)
        {
        	rentFee1=rentHr*110;
        	amt=rentFee1-advanceAmt;
		}
		if(ch1==8)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==9)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
		if(ch1==10)
		{
			rentFee1=rentHr*110;
			amt=rentFee1-advanceAmt;
		}
    }
    void calcuRent2()
    {
    	cout<<"\n\n****************************************************************";
    	sleep(3);
        cout<<"\n\n\t\tEnter the advance amount for the rental :";
        cin>>advanceAmt;
        if(ch2==1)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==2)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==3)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==4)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==5)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
        if(ch2==6)
        {
            rentFee2=rentHr*100;
            amt=rentFee2-advanceAmt;
            
        }
    }
};
class normal : public rent{
    public:
    void get_bike1()
    {
    	system("cls");
    	time1();
    	gotoxy(40,10);
        cout<<"\t\tYou have chosen normal bike for the rental.....";
        label1:
        sleep(1);
        cout<<"\n\t\tThe list of bike we have are :"<<endl;
        cout<<"\t\t1.Yamaha XTZ 150"<<endl;
        cout<<"\t\t2.Honda XR 150L"<<endl;
        cout<<"\t\t3.Hero Xpulse"<<endl;
        cout<<"\t\t4.Tracker 250"<<endl;
        cout<<"\t\t5.Royal Enfield Classic 350"<<endl;
        cout<<"\t\t6.Jawa Classic"<<endl;
        cout<<"\t\t7.Pulsar NS 100"<<endl;
        cout<<"\t\t8.Honda Hornet"<<endl;
        cout<<"\t\t9.Apache RTR 200"<<endl;
        cout<<"\t\t10.Yamaha FZS  v2"<<endl;
        cout<<"\t\t\n...............................................................";
        cout<<"\t\t\n\nEnter your choice from(1-10):";
        cin>>ch1;
        system("cls");
        switch(ch1)
        {
            case 1:   
            
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Yamaha XTZ 150";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 3";
					cout<<"\n\t\tWell conditioned with insurance.";
					cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 2:
            	
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Honda XR150L";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 4";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 3:
            		
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Hero Xpulse";
                    cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 5";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 4:
            	
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Tracker 250";
                    cout<<"\n\t\tYear : 2021";
                    cout<<"\n\t\tBike no = 6";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                   
                break;
             case 5:
             	
             		time1();
             		gotoxy(40,10);
        	        cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Royal Enfield Classic 350";
					cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 5";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 300";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
				break ; 
            case 6:
            	
            		time1();
					gotoxy(40,10);
					cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Jawa Classic";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 6";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 7:  
            		time1();
					gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Pulsar NS 200";
					cout<<"\n\t\tYear : 2020";
                    cout<<"\n\t\tBike no = 7";
					cout<<"\n\t\tWell conditioned with insurance.";
					cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 110";
					cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
					cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
					calcuRent1();
                    warning1();
                    
                break;
            case 8:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Honda Hornet";
                    cout<<"\n\t\tYear : 2017";
                    cout<<"\n\t\tBike no = 8";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 9:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Apache RTR 200";
                    cout<<"\n\t\tYear : 2022";
                    cout<<"\n\t\tBike no = 9";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;
            case 10:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Yamaha FZS V2";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tBike no = 10";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 30,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 110";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<110*24;
                    cout<<"\n\n\t\tTotal rent is :"<<110*rentHr;
                    calcuRent1();
                    warning1();
                    
                break;    
            default :
            	gotoxy(40,10);
                cout<<"\n\t\tYou have entered Invalid choice !!!";
                cout<<"\n\t\t!!!Try again!!!";
                goto label1;
            break;
        }        
    }
    void warning1()
    {
    	system("cls");
    	gotoxy(40,10);
        cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        time1();
        gotoxy(40,10);
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
        cout << "\t\t	| MINIMUM RENT TIME IS 3 HRS                              |"<<endl;
        cout << "\t\t	| INCASE ACCIDENT , ALL COSTING IS PAID BY DRIVER         |"<<endl;
        cout << "\t\t	| PREPARE HARDCOPY DOCUMENT OF THE ITEM AS BELOW          |"<<endl;
        cout << "\t\t	| DOCUMENT IS NECESSARY WHILE TAKING CHARGE OF BIKE       |"<<endl;
        cout << "\t\t	| \t\tORIGINAL LICENCE                          |"<<endl;
        cout << "\t\t	| \t\tCOPY OF LICENCE                           |"<<endl;
        cout << "\t\t	| \t\tCOPY OF CITIZENSHIP                       |"<<endl;
        cout << "\t\t	| \t\tDEPOSIT BASED ON(BIKE TYPE)               |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| \t\t      !!!Safe drive!!!                    |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        sleep(12);
        display1();
    }
    void display1()
    {
		system("cls");
		gotoxy(40,10);
		cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        gotoxy(40,10);
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        time1();
		gotoxy(40,10);
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch1<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentHr<<" |"<<endl;
        cout << "\t\t	| Your Advance Amount is :"<<"-------|"<<setw(10)<<advanceAmt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total (Due) Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    }
};
class electric : public rent{
    public :    
    void get_bike2()
    {
    	system("cls");
    	time1();
    	gotoxy(40,10);
        cout<<"\t\tYou have chosen electric bike for the rental....";
        label2:
        sleep(2);
        cout<<"\n\t\tThe list of bike we have are :"<<endl;
        cout<<"\t\t1.Yatri bike "<<endl;
        cout<<"\t\t2.Super Soco bike "<<endl;
        cout<<"\t\t3.NIU scooter"<<endl;
        cout<<"\t\t4.Bella scooter"<<endl;
        cout<<"\t\t5.Yadea G5 scooter"<<endl;
        cout<<"\t\t6.Doohan scooter"<<endl;
        cout<<"\n\t\t...............................................................";
        cout<<"\n\n\t\tEnter your choice from(1-6):";
        cin>>ch2;
        system("cls");
        switch(ch2)
        {
        case 1:
        	
        			time1();
        			gotoxy(40,10);
        	        cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Yatri p1";
					cout<<"\n\t\tYear : 2021";
					cout<<"\n\t\tMax range = 110km";
                    cout<<"\n\t\tBike no = 1";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
				break ; 
            case 2:
            	
            		time1();
            		gotoxy(40,10);
					cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : Super soco TSX";
					cout<<"\n\t\tYear : 2020";
					cout<<"\n\t\tMax range = 80 km";
                    cout<<"\n\t\tBike no = 2";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
                break;
            case 3: 
			 
            		time1();
					gotoxy(40,10);
                    cout<<"\n\t\tYou have sucessfully chosen a bike :";
					cout<<"\n\t\tBike name : NIU scooter";
					cout<<"\n\t\tYear : 2020";
					cout<<"\n\t\tMax range = 90-130km";
                    cout<<"\n\t\tBike no = 3";
					cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
					cout<<"\n\n\t\tPer hour rent is :Rs 100";
					cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
					cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
					calcuRent2();
                    warning2();
                    
                break;
            case 4:
            	    
					time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name :Bella scooter";
                    cout<<"\n\t\tYear : 2018";
                    cout<<"\n\t\tMax range = 75 km";
                    cout<<"\n\t\tBike no = 4";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;
            case 5:
            		
					time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Yadea G5 Scooter ";
                    cout<<"\n\t\tYear : 2021";
                    cout<<"\n\t\tMax range = 80 km";
                    cout<<"\n\t\tBike no = 5";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;
            case 6:
            		time1();
            		gotoxy(40,10);
                    cout<<"\n\t\tYou have successfully chosen a bike :";
                    cout<<"\n\t\tBike name : Doohan Scooter";
                    cout<<"\n\t\tYear : 2022";
                    cout<<"\n\t\tMax range = 50 km";
                    cout<<"\n\t\tBike no = 6";
                    cout<<"\n\t\tWell conditioned with insurance.";
                    cout<<"\n\n\t\t|**************************|";
                    cout<<"\n\t\t|Deposit amount = Rs 20,000|";
                    cout<<"\n\t\t|**************************|";
                    cout<<"\n\n\t\tPer hour rent is :Rs 100";
                    cout<<"\n\n\t\tPer day rent is :Rs"<<100*24;
                    cout<<"\n\n\t\tTotal rent is :"<<100*rentHr;
                    calcuRent2();
                    warning2();
                    
                break;    
            default :
            	time1();
            	gotoxy(40,10);
                cout<<"\n\t\tYou have entered Invalid choice !!!";
                cout<<"\n\t\t!!!Try again!!!";
                goto label2;
            break; 
        }
    }
    void warning2()
    {	
    	system("cls");
		gotoxy(50,10);
    	cout<<"Providing WARNING............";
        sleep(1);
        system("cls");
        time1();
        gotoxy(50,10);
        cout<<"******RULES AND REGULATIONS******";
        sleep(2);
        cout << "\n\n\t\t                    BIKE RENTAL  - Rules and Regulation                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| \t\t    !!!RISK BY YOUR OWN!!!                |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout << "\n";
        cout << "\t\t	| MINIMUM RENT TIME IS 3 HRS                              |"<<endl;
        cout << "\t\t	| INCASE ACCIDENT , ALL COSTING IS PAID BY DRIVER         |"<<endl;
        cout << "\t\t	| PREPARE HARDCOPY DOCUMENT OF THE ITEM AS BELOW          |"<<endl;
        cout << "\t\t	| DOCUMENT IS NECESSARY WHILE TAKING CHARGE OF BIKE       |"<<endl;
        cout << "\t\t	| \t\tORIGINAL LICENCE                          |"<<endl;
        cout << "\t\t	| \t\tCOPY OF LICENCE                           |"<<endl;
        cout << "\t\t	| \t\tCOPY OF CITIZENSHIP                       |"<<endl;
        cout << "\t\t	| \t\tDEPOSIT BASED ON(BIKE TYPE)               |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| \t\t      !!!Safe drive!!!                    |"<<endl;
        cout << "\t\t	 _________________________________________________________"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        sleep(12);
        display2();
    }
    void display2()
    {
        system("cls");
        gotoxy(50,10);
        cout<<"Calculating rent.........................";
        sleep(2);
        system("cls");
        gotoxy(50,10);
        cout<<"Providing bill...........................";
        sleep(3);
        system("cls");
        time1();
        gotoxy(50,10);
        cout<<"******BILL_PROVIDED******";
        cout << "\n\t\t                       BIKE RENTAL  - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customer_name<<" |"<<endl;
        cout << "\t\t	| Customer Age:"<<"------------------|"<<setw(10)<<customer_age<<" |"<<endl;
        cout << "\t\t	| Bike No :"<<"----------------------|"<<setw(10)<<ch2<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<rentHr<<" |"<<endl;
        cout << "\t\t	| Your Advance Amount is :"<<"-------|"<<setw(10)<<advanceAmt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total (Due) Rental Amount is :"<<"-------|"<<setw(10)<<amt<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    }
};
/******************************************************MemberFunctionDefinition**************************************************/
void bbike::input()
{
	system("cls");
	cout<<"\n\n\t\t\t\tMENU";
	cout<<"\n 1. Add New Bikes";
	cout<<"\n 2. Display Bikes";
	cout<<"\n 3. Check Specific Bikes";
	cout<<"\n 4. Update Bikes";
	cout<<"\n 5. Delete Bikes";
	cout<<"\n 6. Exit";
}
void bbike::add_bikes()
{
	label0:
	system("cls");
	gotoxy(40,10);
	cout<<"\n\n******Adding new bike to the system****** "<<endl;
	cout<<"\n\t\tChoose which bike you would like to add below........";
	cout<<"\n\n\t\t1.Petrol Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		gotoxy(40,10);
		fstream file1;
		int year1,max_power1,max_torque1;
		string name1;
		cout<<"\n\t******Getting Details for new petrol medium bike******"<<endl;
		cout<<"\n\n\tEnter Bike name: ";
		cin>>name1;
		fflush(stdin);
		cout<<"\n\tEnter year: ";	
		cin>>year1;
		fflush(stdin);
		cout<<"\n\tEnter max_power: ";
		cin>>max_power1;
		cout<<"\n\tEnter max-torque: ";
		cin>>max_torque1;
		file1.open("petrolBike1.txt",ios::out|ios::app);
		file1<<" "<<name1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
		file1.close();
	}
	else if (ch==2)
	{
		system("cls");
		gotoxy(40,10);
		fstream file2;
		int year2,range2;
		string name2;
		cout<<"\n\t\t******Getting Details for new electric medium bike******"<<endl;
		cout<<"\n\n\t\tEnter Bike name: ";
		cin>>name2;
		fflush(stdin);
		cout<<"\n\t\tEnter year: ";	
		cin>>year2;
		fflush(stdin);
		cout<<"\n\t\tEnter range: ";
		cin>>range2;
		file2.open("electricBike1.txt",ios::out|ios::app);
		file2<<" "<<name2<<" "<<year2<<" "<<range2<<" "<<"\n";
		file2.close();	
	}
	else
	{
		cout<<"\n\t\t!!!Invalid Input!!!";
		cout<<"\n\t\t!!!Try Again!!!";
		sleep(3);
		goto label0;
	}
}	
void bbike::show_bikes()
{
	label1:
	system("cls");
	gotoxy(40,10);
	cout<<"\n******Displaying bike******"<<endl;
	cout<<"\n\t\tChoose which bike list would you like to display........";
	cout<<"\n\n\t\t1.Petrol Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice :";
	cin>>ch;
	if(ch == 1)
	{	
		system("cls");

		gotoxy(40,10);
		fstream file1;
		int year1,max_power1,max_torque1;
		string name1;
		file1.open("NormalBike1.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name    Year    Max_power    Max_torque\n\n";
			file1>>name1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				cout<<"   "<<name1<<"     "<<year1<<"     "<<max_power1<<"\t\t"<<max_torque1<<"\n\n";
				file1>>name1>>year1>>max_power1>>max_torque1;
			}
				file1.close();
		}
	}
	else if (ch==2)
	{		
		system("cls");

		gotoxy(40,10);
		fstream file2;
		int year2,range2;
		string name2;
		file2.open("electricBike1.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name    Year    Range\n\n";
			file2>>name2>>year2>>range2;
			while(!file2.eof())
			{
				cout<<"   "<<name2<<"     "<<year2<<"     "<<range2<<"\t\t"<<"\n\n";
				file2>>name2>>year2>>range2;
			}
			file2.close();
		}
	}
	else
	{
	
		cout<<"\n!!!Invalid Choice!!!";
		sleep(3);
		goto label1;
	}	
}
void bbike::check_bikes()
{
	label2:
	system("cls");
	gotoxy(40,10);
	cout<<"\n******Checking Bike******";
	cout<<"\n\t\tChoose which bike would you like to check........";
	cout<<"\n\n\t\t1.Petrol/Normal Bike"<<endl;
	cout<<"\n\t\t2.Electric Bike"<<endl;
	cout<<"\n\t\tEnter your choice : ";
	cin>>ch;
	if(ch == 1 )
	{
		system("cls");
		gotoxy(40,10);
		fstream file1;
		int year1,max_power1,max_torque1,count1=0;
		string name1,namee1;
		file1.open("NormalBike1.txt",ios::in);
		if(!file1)
		cout<<"\n\n\t\tFile Openning Error...";
		else
		{
			system("cls");
			cout<<"\n\t\tThe list of petrol/normal bike we have are :"<<endl;
      		cout<<"\t\t1.YamahaXTZ150"<<endl;
       	 	cout<<"\t\t2.HondaXR150L"<<endl;
       	 	cout<<"\t\t3.HeroXpulse"<<endl;
        	cout<<"\t\t4.Tracker250"<<endl;
        	cout<<"\t\t5.RoyalEnfieldClassic350"<<endl;
        	cout<<"\t\t6.JawaClassic"<<endl;
        	cout<<"\t\t7.PulsarNS100"<<endl;
        	cout<<"\t\t8.HondaHornet"<<endl;
        	cout<<"\t\t9.ApacheRTR200"<<endl;
        	cout<<"\t\t10.YamahaFZSv2"<<endl;
			cout<<"\n\n Bike Name You Want To Search From The Available Ones Above: ";
			cin>>namee1;
			file1>>name1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(namee1 == name1)
				{
					system("cls");
					cout<<"\n\n\t\t\tBike Name : "<<name1;
					cout<<"\n\n\t\t\tYear : "<<year1;
					cout<<"\n\n\t\t\tMax_power : "<<max_power1;
					cout<<"\n\n\t\t\tMax_torque : "<<max_torque1;
					count1++;
					break;	
				}
				file1>>name1>>year1>>max_power1>>max_torque1;
			}
			file1.close();
			if(count1 == 0)
			cout<<"\n\n Bike name Not Found...";
		}
	}
	else if(ch ==2)
	{ 
		system("cls");
		gotoxy(40,10);
		fstream file2;
		int year2,max_power2,range2,count2=0;
		string name2,namee2;
		file2.open("D:electricBike1.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\t\tThe list of electric bikes we have are :"<<endl;
        	cout<<"\t\t1.Yatri "<<endl;
        	cout<<"\t\t2.SuperSoco "<<endl;
        	cout<<"\t\t3.NIU "<<endl;
        	cout<<"\t\t4.Bella "<<endl;
        	cout<<"\t\t5.YadeaG5 "<<endl;
        	cout<<"\t\t6.Doohan "<<endl;
			cout<<"\n\n Bike Name You Want To Search From The Available Ones Above: ";
			cin>>namee2;
			file2>>name2>>year2>>range2;
			while(!file2.eof())
			{
				if(namee2 == name2)
				{
					system("cls");
					cout<<"\n\n\t\t\tBike Name : "<<name2;
					cout<<"\n\n\t\t\tYear : "<<year2;
					cout<<"\n\n\t\t\tRange Per Charge(Km) : "<<range2;
					count2++;
					break;	
				}
				file2>>name2>>year2>>range2;
			}
			file2.close();
			if(count2 == 0)
			cout<<"\n\n Bike name Not Found...";
		}
	}
	else 
	{
		cout<<"\n!!!Invalid Input!!!";
		sleep(2);
		goto label2;
	}
}	
void bbike::update_bikes()
{
	label3:
	system("cls");
	gotoxy(40,10);
	cout<<"\n******Updating Bike******"<<endl;
	cout<<"\nChoose which bike would you like to update........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		gotoxy(40,10);
		fstream file1,temp1;
		int year1,yr1,max_power1,mp1,max_torque1,mt1,count1=0;
		string name1,namee1;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		temp1.open("petrolBike1.txt",ios::app|ios::out);
		file1.open("petrolBike.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>name1;
			file1>>namee1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(name1 == namee1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
					cout<<"\n\n\t\t\tYear : ";
					cin>>yr1;
					cout<<"\n\n\t\t\tMax_power: ";
					cin>>mp1;
					cout<<"\n\n\t\t\tMax_torque: ";
					cin>>mt1;
					temp1<<" "<<name1<<" "<<yr1<<" "<<mp1<<" "<<mt1<<"\n";
					count1++;
				}
				else
				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
				file1>>namee1>>year1>>max_power1>>max_torque1;
			}
			if(count1 == 0)
			cout<<"\n\n Bike ID Not Found...";
		}
		file1.close();
		temp1.close();
		remove("petrolBike.txt");
		rename("petrolBike1.txt","book.txt");
	}
	else if ( ch == 2)
	{
		system("cls");
		gotoxy(40,10);
		fstream file2,temp2;
		int year2,yr2,range2,r2,count2=0;
		string name2,namee2;
		cout<<"\n\n\t\t\t\tUpdate Bike Record";
		temp2.open("electricBike1.txt",ios::app|ios::out);
		file2.open("electricBike.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>name2;
			file2>>namee2>>year2>>range2;
			while(!file2.eof())
			{
				if(name2 == namee2)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tUpdate Bikes Record";
					cout<<"\n\n\t\t\tYear : ";
					cin>>yr2;
					cout<<"\n\n\t\t\tRange: ";
					cin>>r2;
					temp2<<" "<<name2<<" "<<yr2<<" "<<r2<<"\n";
					count2++;
				}
				else
				temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
				file2>>namee2>>year2>>range2;
			}
			if(count2 == 0)
			cout<<"\n\n Bike ID Not Found...";
		}
		file2.close();
		temp2.close();
		remove("electricBike.txt");
		rename("electricBike1.txt","book.txt");
	}
	else 
	{
		cout<<"\n!!!Invalid Choice!!!";
		sleep(2);
		goto label3;
	}
}
	
void bbike::del_bikes()
{
	label4:
	system("cls");
	gotoxy(40,10);
	cout<<"******Delete Bike******"<<endl;
	cout<<"\nChoose which bike would you like to delete........";
	cout<<"\n\n1.Petrol Bike"<<endl;
	cout<<"\n2.Electric Bike"<<endl;
	cout<<"\nEnter your choice :";
	cin>>ch;
	if( ch==1)
	{
		system("cls");
		gotoxy(40,10);
		fstream file1,temp1;
		int year1,max_power1,max_torque1,count1=0;
		string name1,namee1;
		temp1.open("petrolBike1.txt",ios::app|ios::out);
		file1.open("petrolBike2.txt",ios::in);
		if(!file1)
		cout<<"\n\n File Openning Error...";
		else
		{
			cout<<"\n\n Bike Name : ";
			cin>>namee1;
			file1>>namee1>>year1>>max_power1>>max_torque1;
			while(!file1.eof())
			{
				if(name1 == namee1)
				{
					system("cls");
					cout<<"\n\n\t\t\t\tDelete Bike Record";
					cout<<"\n\n One Bike is Deleted Successfully...";
					count1++;
				}
				else
				temp1<<" "<<namee1<<" "<<year1<<" "<<max_power1<<" "<<max_torque1<<"\n";
				file1>>namee1>>year1>>max_power1>>max_torque1;
			}
			if(count1 == 0)
			cout<<"\n\n Bike Name Not Found...";
		}
		file1.close();
		temp1.close();
		remove("petrolBike.txt");
		rename("petrolBike1.txt","book.txt");
	}
	else if (ch == 2)
	{
		system("cls");
		gotoxy(40,10);
		fstream file2,temp2;
		int year2,range2,count2=0;
		string name2,namee2;
		temp2.open("electricBike1.txt",ios::app|ios::out);
		file2.open("electricBike2.txt",ios::in);
		if(!file2)
		cout<<"\n\n File Openning Error...";
		else
		{
		cout<<"\n\n Bike Name : ";
		cin>>namee2;
		file2>>namee2>>year2>>range2;
		while(!file2.eof())
		{
			if(name2 == namee2)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tDelete Bike Record";
				cout<<"\n\n One Bike is Deleted Successfully...";
				count2++;
			}
			else
			temp2<<" "<<namee2<<" "<<year2<<" "<<range2<<"\n";
			file2>>namee2>>year2>>range2;
		}
		if(count2 == 0)
		cout<<"\n\n Bike Name Not Found...";
	}
	file2.close();
	temp2.close();
	remove("petrolBike.txt");
	rename("petrolBike1.txt","book.txt");
	}
	else
	{
		cout<<"\n!!!Invalid Input!!!";
		sleep(2);
		goto label4;
	}
}
int main()
{
	fullscreen();
	int c;
	bike b1;
	b1.welcome();
	sleep(3);
	time_t timetoday;
	time (&timetoday);
	system("cls");
	cout<<asctime(localtime(&timetoday));
	cout<<"\n\t\t\t\t\t\t\t**************************************************************";
	cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb|      _________       ___________          ________       |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |    ___    |        /         \\     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |   ___   |     |   |   |   |       |    __    |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |   |   |       |   |  |___|     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |___|   |       |   |_____       |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  /  /      |    _______|       |         \\      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  \\  \\      |   | \\   \\          \\______   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |  \\   \\               |   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |___|  |     |   |   \\   \\        ______/   |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |   |    \\   \\      |          |     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\xdb|     |_________|     |___|     \\___\\     |_________/      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    PRESS ANY KEY TO CONTINUE\t\t  \xdb\xdb\xdb\xdb";
	cout<<"\n\t\t\t\t\t\t\t**************************************************************";
	sleep(6);
	system("cls"); 
    cout<<asctime(localtime(&timetoday));                                   
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 1 for ADMIN LOGIN     |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 2 for REGISTER        |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Press 3 for USER LOGIN      |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t\xdb|      Enter your choice :         |\xdb";
	cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------"<<endl;
	cin>>c;
	cout<<endl;
	
	switch(c)
	{
		case 1:
			adminlogin();
			break;
			
		case 2 :
			userregister();
			break;
			
		case 3 :
			userlogin();
			break;	
			
		default:
			system("cls");
			cout<<"\t\t\t\t\t\t\t\tPlease select from the options given above!!! \n"<<endl;
			system("cls");
			main();
	}
}
/******************************************************FunctionDefinition**************************************************/
/******************************************************AdminLogin**************************************************/
void adminlogin()
{
   system("cls");
   time_t timetoday;
   time (&timetoday);
   cout<<asctime(localtime(&timetoday));
   gotoxy(40,10);
   bbike b;
   int choice;
   char x;
   string pass ="";
   char ch;
   label1:
   cout<<"\n\t\t\t\t\t\t\t\t\xdb|     Admin Login     |\xdb";	
   cout<<"\n\n\t\t\t\t\t\t\tEnter the password:";
   ch = getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = getch();
   }
   if(pass == "pass")
   {
      cout << "\n\n\n\t\t\t\t\t\t\t\t\xdb|     Access Granted!     |\xdb\n";
      label:
      b.input();
      cout<<"\n\n\t\t\t\t\t\t\t\xdb|Your Choice :|\xdb";
	  cin>>choice;
	  switch(choice)
	{
		case 1:
			do
			{
			b.add_bikes();
			cout<<"\n\n\t\t\t\t\t\t\t\tDo You Want to Add another Bike (y,n) : ";
			cin>>x;
		    }while(x == 'y');
			break;
		case 2:
			b.show_bikes();
			break;
		case 3:
			b.check_bikes();
			break;
		case 4:
			b.update_bikes();
			break;
		case 5:
			b.del_bikes();
			break;
		case 6:
			load_EXIT();
		default:
			cout<<"\n\n\t\t\t\t\t\t\t\t\xdbInvalid Value...Please Try Again...\xdb";
	}
	getch();
	goto label;
   }
   else
   {
      cout <<"\n\n\t\t\t\t\t\t\t\xdb Access Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n\xdb";
      goto label1;
   }
   
   
}
/******************************************************UserRegister**************************************************/
void userregister()
{
	system("cls");

	gotoxy(40,10);
	string ruserID,rpassword,rid,rpass;
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the username : ";
	cin>>ruserID;
	cout<<"\n\t\t\t\t\t\t\t\t\xdb Enter the password : ";
	cin>>rpassword;
	
	
	ofstream f1("record1.txt",ios::app);
	f1<<ruserID<<' '<<rpassword<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\xdbRegistration is succesfull!\xdb";
	userlogin();
	
}
/******************************************************UserLogin**************************************************/
void userlogin()
{
	int count;
	char ch;
	int num;
    int choice;
    int option;
    int day;
    int d;
    time_t timetoday;
   	time (&timetoday);
    normal n1;
    electric e1;
	string userID,password,id,pass;
	system("cls");
	cout<<asctime(localtime(&timetoday));
	gotoxy(40,10);
	cout<<"\n\t\t\t\t\t\t\t\t\xdbPlease enter the username and password \xdb";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t USERNAME : ";
	cin>>userID;
	cout<<"\n\t\t\t\t\t\t\t\t\t PASSWORD : ";
	cin>>password;
	
	ifstream input("record1.txt");//to check whether username and pass already exist in our records
	while(input>>id>>pass)
	{
		if(id==userID && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	if(count==1)
	{
		
		cout<<"\n\t\xdb WELCOME USER = "<<userID<<" \xdb";
		cout<<"\n\t\t\t\t\t\t\xdbYour LOGIN is succesfull! \xdb\n";
		sleep(1);
		system("cls");
		cout<<asctime(localtime(&timetoday));
		cout<<"\n\t\t\t\t\t\t\t**************************************************************";
		cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    WELCOME TO THE SYSTEM\t\t  \xdb\xdb\xdb\xdb";
		cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\xdb|      _________       ___________          ________       |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |    ___    |        /         \\     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |   ___   |     |   |   |   |       |    __    |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |   |   |       |   |  |___|     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |___|   |       |   |_____       |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  /  /      |    _______|       |         \\      |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |  \\  \\      |   | \\   \\          \\______   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |   |  |     |   |  \\   \\               |   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |  |___|  |     |   |   \\   \\        ______/   |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |         |     |   |    \\   \\      |          |     |\xdb";
		cout<<"\n\t\t\t\t\t\t\t\xdb|     |_________|     |___|     \\___\\     |_________/      |\xdb";
		cout<<"\n\t\t\t\t\t\t\t--------------------------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\t\t    PRESS ANY KEY TO CONTINUE\t\t  \xdb\xdb\xdb\xdb";
		cout<<"\n\t\t\t\t\t\t\t**************************************************************";
		sleep(3);
		system("cls");
		cout<<asctime(localtime(&timetoday));
		gotoxy(40,10);
		up:
		cout<<"\n\nWe have two categories in Bike Rental System";
		cout<<"\n1.Normal Bike";
		cout<<"\n2.Electric Bike";
		cout<<"\nchoose a category (1 or 2) :";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			gotoxy(40,10);
			fstream normal;
			normal.open("normalBike.txt",ios::binary|ios::out|ios::app);
			op:
			system("cls");
			cout<<asctime(localtime(&timetoday));
			cout<<"\n\n**********BIKE RENTAL OPTION**********";
			cout<<"\nPlease select the option according to your choice";
			cout<<"\n[1].Days";
			cout<<"\n[2].Hour";
			cout<<"\n";
			cout<<"\nEnter your choice : ";
			cin>>option;
			switch(option)
			{
				case 1:
					cout<<"\nEnter for how many days you want to rent the bike :";
					cin>>day;
					n1.rentHr=day*24;
					break;
					
				case 2:
					cout<<"\nEnter for how many hours you want to rent the bike :";
					cin>>n1.rentHr;
					break;
				default :
					cout<<"\n!!!Invalid Choice!!!";
					goto op;
			}
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>n1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your gender (Male/Female/Others):";
			cin>>n1.customer_gender;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>n1.customer_age;
			fflush(stdin);
			if(n1.customer_age < 18)
			{
				cout<<"\n!!! You are not eligible for renting bike !!!";
				exit (0);
			}
			cout<<"\nEnter the contact no :";
			cin>>n1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
			cin>>n1.citizenship_no;
			fflush(stdin);
			normal.write((char*)&n1,sizeof(n1));
 			normal.close();
		    cout<<"\n\n\nLOADING................";
			sleep(3);
			fflush(stdin);
		    n1.get_bike1();
		    cout<<"\n Do you want to rent another Bike?(Y/N): ";
		  	cin>>ch;
		  	if(ch=='y' || ch=='Y')
			{
		  		goto op;
			}
			else
			{
				exitArt();
			}
		}	
		else if(choice==2)
		{
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			fstream electric;
			electric.open("ElectricBike.txt",ios::binary|ios::out|ios::app);
			op1:
			system("cls");
			cout<<asctime(localtime(&timetoday));
			cout<<"\n\n**********BIKE RENTAL OPTION**********";
			cout<<"\nPlease select the option according to your choice";
			cout<<"\n[1].Days";
			cout<<"\n[2].Hour";
			cout<<"\n";
			cout<<"\nEnter your choice :";
			cin>>option;
			switch(option)
			{
				case 1:
					cout<<"\nEnter for how many days you want to rent the bike :";
					cin>>day;
					e1.rentHr=day*24;
					break;
				case 2:
					cout<<"\nEnter for how many hours you want to rent the bike :";
					cin>>e1.rentHr;
					break;
				default :
					cout<<"\n!!!Invalid Choice!!!";
					goto op1;
			}
			cout<<"\nCollecting personal details...............";
			sleep(1);
			system("cls");
			cout<<asctime(localtime(&timetoday));
			gotoxy(40,10);
			cout<<"******PERSONAL DETAILS******";
			cout<<"\n\nEnter your name :";
			cin>>e1.customer_name;
			fflush(stdin);
			cout<<"\nEnter your gender (Male/Female/others) :";
			cin>>e1.customer_gender;
			fflush(stdin);
			cout<<"\nEnter your age :";
			cin>>e1.customer_age;
			if(e1.customer_age < 18)
			{
				cout<<"\n!!! You are  not eligible for renting bike !!!";
				exit (0);
			}
			fflush(stdin);
			cout<<"\nEnter the contact no :";
			cin>>e1.contact_no;
			fflush(stdin);
			cout<<"\nEnter the citizenship no :";
		 	cin>>e1.citizenship_no;
			fflush(stdin);
			electric.write((char*)&e1,sizeof(e1));
 			electric.close();
		    cout<<"\n\n\nLOADING................";
			sleep(3);
		    e1.get_bike2();
		    cout<<"\n Do you want to rent another Bike?(Y/N): ";
		  	cin>>ch;
		  	if(ch=='y' || ch=='Y')
			{
		  		goto op1;
			}
			else
			{
				exitArt();
			}
		}
		else
		{
			cout<<"!!!Invalid Choice!!!";
			goto up;
		}
	}
}
/******************************************************fullScreen************************************************/
void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
/******************************************************FunctionDefination************************************************/
void gotoxy(int x, int y)
{

 COORD coord;

 coord.X = x;

 coord.Y = y;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
/******************************************************LOAD_EXIT************************************************/
void load_EXIT()
{
	system("cls");
    int row,col,r,c,q;
    int timer = rand()%5+1;
    gotoxy(60,14);
    printf("LOGGING OFF...");
    gotoxy(60,16);
    for(r=1;r<=timer;r++)
	{
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",177);
	}
    exit(0);
}
/******************************************************exitArt************************************************/
void exitArt()
{
	system("cls");
	gotoxy(0, 10);
	ifstream ifs ("exit art.txt");    
	string Lines = " ";
    
    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";
	    
	    	Lines += TempLine;
		}
		
	cout << Lines;
	
	}
    cout<<"\n\t  |\t\t\t\t\t\t\t";
    ifs.close ();
    Sleep(3000);
    load_EXIT();
    exit(0);
}

/******************************************************End_Of_Code************************************************/
