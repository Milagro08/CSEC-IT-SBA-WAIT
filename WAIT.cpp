//Author: Milagro Deluge
//Date: -
//Problem statement: The new airline Waitukubuli Air Transport is in need of a system that can allow travel agents to book plane tickets for clients, as well as store client information. To solve this problem, a software system is required.

#include <iostream> 
#include <string>  
#include <windows.h> 
#include <cstdlib> 
#include <unistd.h> 
#include "MMSystem.h"

using namespace std;

class login //login class
{
	public:
		
		string username, password, agentUser1;
    	
    	
    	void introduction()
    	{
    		
    	    cout<< "   Hello, Welcome to the WAIT travel agent interface."<<endl;
    		cout<< "   Please enter your username."<<endl;
    		cin>>username;
    	
	    }
		
		void passLogin()
		{
			
			cout<<"   Hello , "<<username<<"."<<endl;
			cout<<"   Please enter your password."<<endl;
			cin>>password;
			
		}
        
        void valid()
        {
        	
        	cout<<"   Login Succcessful!"<<endl;
        	
		}
		
		void invalid()
		{
			
			cout<< "Error,incorrect Password or Username"<<endl;
			cout<<"/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/"<<endl;
			system("pause");
			system("CLS");
			
		}
		
		void decor()
		{
		
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
		cout<<"\t\t\t\t\t   WAIT AGENT INTERFACE"<<endl;
        cout << "            -.                 `|.\n";
        cout << "            |:\\-,              .| \\.\n";
        cout << "            |: `.------------------------------------.\n";
        cout << "            / /   o o o o o o o o o o o o o.-.o o   (_`.\n";
        cout << "           /_ \\_              .     .=     |'|         `)\n";
        cout << "                ``\"\"\"\"\"\"\"\"\"\"//    /  \"\"\"\"\" `\"\"\"\"------\"'\n";


		cout<<"\n\t\t\t\t A World of Connections, One Flight Away.\n"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"<<endl;
        }
		
};

class airSystem // class containing system information
{
    public:
    	char flightType, clientType;
    	string destination, skymilesName, nextCustomerChoice, nextOrderChoice, regFirstName, regLastName ;
    	int depMonth, depDay, depYear, retMonth, retDay, retYear, memberID, discount;
    	
    	void chooseClient()
	    {
		cout<<"   Indicate the Client Type by entering 'A' or 'B'."<<endl;  
		cout<<"\n\t\t\t\t\t A. Skylines Member"<<endl;
		cout<<"\n\t\t\t\t\t B. Regular Client"<<endl;
		cin>>clientType;
	    }
	    
	    void destinations()
	    {
	     cout<<"\n\t\t Select the Destination by typing the IATA code which corresponds with each location, in capital letters."<<endl;
	     cout<<"\n\t\t\t\t\t - Anguilla: AXA"<<endl;
		 cout<<"\n\t\t\t\t\t - Aruba: AUA"<<endl;
		 cout<<"\n\t\t\t\t\t - Australia: SYD"<<endl;
		 cout<<"\n\t\t\t\t\t - Bahamas: NAS"<<endl;
		 cout<<"\n\t\t\t\t\t - Barbados: BGI"<<endl;
		 cout<<"\n\t\t\t\t\t - Brazil: GRU"<<endl;
		 cout<<"\n\t\t\t\t\t - Canada: YYZ"<<endl;
		 cout<<"\n\t\t\t\t\t - Cuba: HAV"<<endl;
		 cout<<"\n\t\t\t\t\t - England: LHR"<<endl;
		 cout<<"\n\t\t\t\t\t - France: CDG"<<endl;
		 cout<<"\n\t\t\t\t\t - Grenada: GND"<<endl;
		 cout<<"\n\t\t\t\t\t - Guadeloupe: PTP"<<endl;
		 cout<<"\n\t\t\t\t\t - Jamaica: MBJ"<<endl;
		 cout<<"\n\t\t\t\t\t - Martinique: FDF"<<endl;
		 cout<<"\n\t\t\t\t\t - Mexico: MEX"<<endl;
		 cout<<"\n\t\t\t\t\t - Panama: PTY"<<endl;
		 cout<<"\n\t\t\t\t\t - Spain: MAD"<<endl;
		 cout<<"\n\t\t\t\t\t - United States of America: MIA"<<endl;
 		 cin>>destination;
		
	  }
	  
	
	    
	   void flightTypes()
	   {
	   	cout<<"   Indicate the Flight Type by entering 'A' or 'B'."<<endl;  
		cout<<"\n\t\t\t\t\t A. One Way Trip"<<endl;
		cout<<"\n\t\t\t\t\t B. Round Trip"<<endl;
		cin>>flightType;
	   }
	   
	   void departuredate()
	   {
	   	cout<<"   Enter the Departure Date (in format of DD MM YYYY)(Pressing enter after each date value)"<<endl;
	   	cin>>depDay>>depMonth>>depYear;	
	   	cout<<"   The Client's Departure Date is: "<<depDay<<" "<<depMonth<<" "<<depYear<<endl;
	   }
	   
	   void returndate()
	   {
	   	cout<<"   Enter the Return Date (in format of DD MM YYYY)(Pressing enter after each date value)"<<endl;
	   	cin>>retDay>>retMonth>>retYear;
		cout<<"   The Client's Return Date is: "<<retDay<<" "<<retMonth<<" "<<retYear<<endl;
	   }
	   
	   void memberlogin()
	   {
	   	cout<<"   Enter the client's registered Skymile Member Name (no space between first and last name)"<<endl;
	   	cin>>skymilesName;
	   	cout<<"   Enter the client's authorized skymiles membership ID"<<endl;
	   	cin>>memberID;
	   }
	   
	   void discount1()
	   {
	   	 cout<<"   Skymiles Membership Miles is over 40,000 points"<<endl;
	   	cout<<"   Discount: 10%"<<endl;
	   	discount = 10;
	   }
	   
	   void discount2()
	   {
	   	cout<<"   Skymiles Membership Miles is over 100,000 points"<<endl;
	   	cout<<"   Discount: 30%"<<endl;
	   	discount = 30;
	   }
	   
	   void loopagent()
	   {
	   	cout<<"   Next Customer? Type 'yes' or 'no'"<<endl;
	   	cin>>nextCustomerChoice;
	   }
	   
	   void loopclient()
	   {
	   	cout<<"   Does the client want to order another ticket on the same bill? Type 'yes' or 'no'"<<endl;
	   	cin>>nextOrderChoice;
	   }
	   void regCuslogin()
	   {
	   	cout<<"   Enter Client's First Name"<<endl;
		cin>>regFirstName;
		cout<<"   Enter Client's Last Name"<<endl;
		cin>>regLastName;
	   }
	   
};

  
int main(void) 
{
  int skymilesId1 = 243535, skymilesId2 = 243538, skymilesId3 = 243571,skymilesId4 = 243550, skymilesId5 = 243583, skymilesId, count = 0 , counter = 0, OneticketPrice,RoundticketPrice, departureTax, daysDeparture, daysReturn, duration,
		memberMiles1= 6030, memberMiles2= 50865, memberMiles3= 644050, memberMiles4=40455, memberMiles5=13205;
    string agentUser1 ="AmandaWalsh", agentUser2 = "SarahPatel", agentUser3 = "BenjaminMartin", agentUser4 = "OliviaDavis",  agentUser5 = "DavidSmith", agentPass1 = "eife33", 
           agentPass2 = "wobr43", agentPass3 ="okef59", agentPass4 = "ignr76", agentPass5 = "mrjg80", username, skymilesname, 
		   password, skymilesName1 = "JacksonAvery",skymilesName2 = "JasonDerulo", skymilesName3 = "ScarletJames", 
           skymilesName4 = "KimberlyKardashian", skymilesName5 = "ZurieRoss", country, regFirstName, regLastName ;
    char clientType, orderMoreChoice;
    float subtotal, total, VAT= 0.15, returnTax, totalOrders = 0;
    bool orderMore = true;

    login logObj; // gives access to the login class
    airSystem sysObj; // class containing system information
    
    logObj.decor();
	 	
	logObj.introduction();
	if(logObj.username==agentUser1 || logObj.username== agentUser2 || logObj.username== agentUser3 || logObj.username== agentUser4 || logObj.username== agentUser5)
	
	system("CLS");
	logObj.decor();
	logObj.passLogin();
	
	if(logObj.username == agentUser1 && logObj.password == agentPass1 || logObj.username == agentUser2 && logObj.password == agentPass2 || logObj.username == agentUser3 && logObj.password == agentPass3 || 
	   logObj.username == agentUser4 && logObj.password == agentPass4 || logObj.username == agentUser5 && logObj.password == agentPass5) 
	{
	 logObj.valid();		
	 
  do
	{
	 
	system("CLS");
	logObj.decor();
	
	sysObj.chooseClient();
	if(sysObj.clientType =='A'|| sysObj.clientType =='a') //login for skyline members  			   
    {   
	  sysObj.memberlogin();
		if(sysObj.skymilesName == skymilesName1 && sysObj.memberID == skymilesId1 || sysObj.skymilesName == skymilesName2 && sysObj.memberID == skymilesId2 || sysObj.skymilesName == skymilesName3 && sysObj.memberID == skymilesId3 ||
		   sysObj.skymilesName == skymilesName4 && sysObj.memberID == skymilesId4 || sysObj.skymilesName == skymilesName5 && sysObj.memberID == skymilesId5)
		   {
		   	logObj.valid();
		   		if(sysObj.skymilesName==skymilesName1 && memberMiles1 >=40000 || sysObj.skymilesName==skymilesName2 && memberMiles2 >=40000 || sysObj.skymilesName==skymilesName3 && memberMiles3 >=40000 ||
				   sysObj.skymilesName==skymilesName4 && memberMiles4 >=40000 || sysObj.skymilesName==skymilesName5 && memberMiles5 >=40000)
				   {
				   	sysObj.discount1();
				   }
				if(sysObj.skymilesName==skymilesName1 && memberMiles1 >=100000 || sysObj.skymilesName==skymilesName2 && memberMiles2 >=100000 || sysObj.skymilesName==skymilesName3 && memberMiles3 >=100000 ||
					sysObj.skymilesName==skymilesName4 && memberMiles4 >=100000 || sysObj.skymilesName==skymilesName5 && memberMiles5 >=100000)
					{
				     sysObj.discount2();
					}	
		   }
    }
    if(sysObj.clientType=='B' ||sysObj.clientType=='b') //login for regular clients
    {
    	sysObj.regCuslogin();
	}
	
  do
  {
  
	
	system("CLS");
	logObj.decor();
	
	sysObj.destinations();
	 {
	  if(sysObj.destination == "AXA")
		{
		 OneticketPrice= 670;
		 RoundticketPrice= 1150;
		 departureTax= 7;
		 returnTax=15;
		 country="Anguilla";
		 }
	  if(sysObj.destination == "AUA")
		{
		 OneticketPrice=435;
		 RoundticketPrice= 1265;
		 departureTax= 7;
		 returnTax=4.5;
		 country="Aruba";
		 }
	  if(sysObj.destination == "BGI")
	    {
	    OneticketPrice=430;
		RoundticketPrice= 950;
		departureTax= 7;
		returnTax=20;
		country="Barbados";
		 }
	  if(sysObj.destination == "CDG")
		{
		 OneticketPrice=4320;
		 RoundticketPrice= 7730;
		 departureTax= 7;
		 returnTax=17.60;
		 country= "France";
		 }
	  if(sysObj.destination == "FCO")
	    {
		  OneticketPrice=1500;
		  RoundticketPrice= 3050;
		  departureTax= 7;
		  returnTax=15.99;
		  country="Italy";
		  }
	  if(sysObj.destination == "FDF")
		 {
	      OneticketPrice=325;
		  RoundticketPrice= 550;
		  departureTax= 7;
		  returnTax=12.15;
		  country="Martinique";
		  }
	  if(sysObj.destination == "GND")
	     {
	       OneticketPrice=230;
		   RoundticketPrice= 505;
		   departureTax= 7;
		   returnTax=6.50;
		   country="Grenada";
			}
	  if(sysObj.destination == "GRU")
		 {
		  OneticketPrice=420;
		  RoundticketPrice= 810;
		  departureTax= 7;
	      returnTax=14.75;
		  country="Brazil";
		    }
	  if(sysObj.destination == "HAV")
		{
		  OneticketPrice=620;
		  RoundticketPrice= 1350;
		  departureTax= 7;
		  returnTax=19;
		  country="Cuba";
			 }
	  if(sysObj.destination == "LHR")
	    {
	      OneticketPrice=1400;
		  RoundticketPrice= 3100;
		  departureTax= 7;
		  returnTax=13.12;
		  country="England";
		    }
	  if(sysObj.destination == "MAD")
		{
		  OneticketPrice=2000;
		  RoundticketPrice= 3500;
		  departureTax= 7;
		  returnTax=29.50;
		  country="Spain";
			 }
	  if(sysObj.destination == "MBJ")
		{
		  OneticketPrice=645;
		  RoundticketPrice= 1675;
		  departureTax= 7;
		  returnTax=14.90;
		  country="Jamaica";
			 }
	 if(sysObj.destination == "MEX")
		{
		  OneticketPrice=750;
		  RoundticketPrice= 1530;
		  departureTax= 7;
		  returnTax=31.75;
		  country="Mexico";
			 }
	 if(sysObj.destination == "MIA")
		{
		  OneticketPrice=495;
		  RoundticketPrice= 987;
		  departureTax= 7;
		  returnTax=20;
		  country="United States of America";
							 }	 
	 if(sysObj.destination == "NAS")
		{
		  OneticketPrice=775;
	      RoundticketPrice= 1840;
		  departureTax= 7;
		  returnTax=10.50;
		  country="Bahamas";
			 }	 	 
	 if(sysObj.destination == "PTP")
	    {
	      OneticketPrice=122;
		  RoundticketPrice= 319;
		  departureTax= 7;
		  returnTax=5;
		  country="Guadeloupe";
		 }	  
	 if(sysObj.destination == "PTY")
		{
		  OneticketPrice=530;
		  RoundticketPrice= 1300;
		  departureTax= 7;
		  returnTax=12.20;
		  country="Panama";
			 }
	 if(sysObj.destination == "SYD")
		{
		  OneticketPrice=5350;
		  RoundticketPrice= 13045;
		  departureTax= 7;
		  returnTax=19.75;
	      country="Australia";
			 }
	 if(sysObj.destination == "YYZ")
	   {
	   	  OneticketPrice=550;
		  RoundticketPrice= 1200;
		  departureTax= 7;
	      returnTax=21.50;
		  country="Canada";
			 }	
			 
}

    system("CLS");
	logObj.decor();

	sysObj.flightTypes();
	sysObj.departuredate();
	if (sysObj.flightType== 'B' || sysObj.flightType =='b') //round trip
	   {
	   	sysObj.returndate();
	   	daysDeparture=(sysObj.depYear*365)+(sysObj.depMonth*30)+sysObj.depDay;
		daysReturn=(sysObj.retYear*365)+(sysObj.retMonth*30)+sysObj.retDay;
		duration=daysReturn-daysDeparture;
	   }
	   
	   system("CLS");
	   logObj.decor();

	if(sysObj.clientType =='A'|| sysObj.clientType =='a')
		{
		  cout<<"   Client Name: "<<sysObj.skymilesName<<endl;
		  cout<<"   Client Type: Skymiles Member"<<endl;
		  cout<<"   Discount: "<<sysObj.discount<<"%"<<endl;
		  }
	if(sysObj.clientType =='B'|| sysObj.clientType =='b')
		{
		  cout<<"   Client Name: "<<sysObj.regFirstName<<" "<<sysObj.regLastName<<endl;
		}
		   
		   cout<<"   Destination: "<<country<<endl;
		   
		   if (sysObj.flightType=='B'|| sysObj.flightType=='b') //code for round trip 
		     {
		     	cout<<"   Duration: "<<duration<< "Days"<<endl;
		     	cout<<"   Ticket Price: $"<<RoundticketPrice<<endl;
		     	cout<<"   Return Tax: $"<<returnTax<<endl;
		     	if(sysObj.clientType =='A'|| sysObj.clientType =='a') // code for rountrip + skyline member
		     	{
		     	  subtotal = RoundticketPrice+departureTax+returnTax-(RoundticketPrice+departureTax+returnTax)*(sysObj.discount/100);
				}
				if(sysObj.clientType =='B'|| sysObj.clientType =='b') //code for rountrip + regular client
		     	{
		     	  subtotal = RoundticketPrice+departureTax+returnTax;
				 }
	    	 }
	       if(sysObj.flightType=='A' || sysObj.flightType== 'a') // code for oneway 
	          {
	          	cout<<"   Ticket Price: $"<<OneticketPrice<<endl;
	          	if(sysObj.clientType =='A'|| sysObj.clientType =='a') // code for oneway + skyline member
		     	{
		     	  subtotal = OneticketPrice+departureTax-(OneticketPrice+departureTax)*(sysObj.discount/100);
				}
				if(sysObj.clientType =='B'|| sysObj.clientType =='b') //code for oneway + regular client
		     	{
		     	  subtotal = OneticketPrice+departureTax;
				 }
			  }
		    cout<<"   Departure Tax: $"<<departureTax<<endl;
		    cout<<"   Subtotal: $"<<subtotal<<endl;
			total= subtotal+(VAT*subtotal);
			cout<<"   Vat: 15%"<<endl;
			cout<<"   Total: $"<<total<<endl;
	        sysObj.loopclient();
            totalOrders= totalOrders+ total;

} while (sysObj.nextOrderChoice == "yes" || sysObj.nextOrderChoice=="Yes");
			 {
				if (sysObj.nextOrderChoice =="no" || sysObj.nextOrderChoice=="No")
				{
				cout<<"   The total amount for all orders placed: $"<<totalOrders<<endl;
				totalOrders=0;
				 sysObj.loopagent();
			    }
			 }
    
 }while (sysObj.nextCustomerChoice == "yes" || sysObj.nextCustomerChoice =="Yes"); //loop for agent
         {
         	if (sysObj.nextCustomerChoice =="no" || sysObj.nextCustomerChoice=="No")
			{
         	cout<<"   Logging Out..."<<endl;
         	system("pause");
         	return 0;
            }
		 }

  } 
  
}


 



