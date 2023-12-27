#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>

using namespace std;

int T_I_Quantity[47];



																		//Class welcome
																		
class welcome{
	
	public:
		
		void show(){
			cout << "  ___________________________________________________________________________________________________________________\n";
			cout << " |                                                                                                                   |\n";
			cout << " |                              W E L C O M E  T O  T H E  I C E - C R E A M  A L L E Y                              |\n";
			cout << " |___________________________________________________________________________________________________________________|\n";
		}
		
		void show1(){
			
			Sleep(700);
			cout<<"\t\t ______________________________________________________________________________________\n";
			Sleep(700);
			cout<<"\t\t|     *    ,                                                                           |\n";
			Sleep(650);
			cout<<"\t\t|` *~.|,~* '                          ()                          MONEY                |\n";
			Sleep(600);
			cout<<"\t\t|'  ,~*~~* `     _                   (__)                       CAN'T BUY              |\n";
			Sleep(550);
			cout<<"\t\t| ,* / \\`* '    //                  (____)                         YOU                 |\n";
			Sleep(500);
			cout<<"\t\t|  ,* ; \\,O.   //                  (______)                     HAPPINESS              |\n";
			Sleep(450);
			cout<<"\t\t|      ,(:::)=//                  (________)	              BUT IT CAN BUY           |\n";
			Sleep(400);
			cout<<"\t\t|    (  `~(###)                  (__________)	                   YOU                 |\n";
			Sleep(350);
			cout<<"\t\t|     \\---'`\"/                    \\/\\/\\/\\/\\/                    ICE CREAM              |\n";
			Sleep(300);
			cout<<"\t\t|      \\    /                      \\/\\/\\/\\/                  WHICH IS PRETTY           |\n";
			Sleep(250);
			cout<<"\t\t|       \\  /                        \\/\\/\\/                 MUCH THE SAME THING         |\n";
			Sleep(200);
			cout<<"\t\t|      __)(__                        \\/\\/	                                       |\n";
			Sleep(150);
			cout<<"\t\t|     '------`                        \\/	                                       |\n";
			Sleep(100);
			cout<<"\t\t|______________________________________________________________________________________|\n";
			Sleep(50);
		}
};


																		//Class Customer
																		
class Customer{
	
	protected:
	
		int Item_no;
		int Quantity;
		int Price_1;
		int T_Bill;
	
	public:
		
	Customer(){
		Item_no = 0;
		Quantity = 0;
		Price_1 = 0;
		T_Bill = 0;
	}
	
};

class Menu: public Customer{
	
	protected:
	
	int bill_price[4800];									//Array of Items Price in bill
	int item_quantity[4800];								//Array of Items Quantity in bill
	string bill_items[4800];								//Array of Items Name in bill
	int Item_No[4800];										//Array of Items no. in bill
        		
	int ITem_no;
	int loop_iter;											//No of times user buy Items
	int inc;
	int inc_1;
	int inc_2;
	int inc_3;
	
	public:
		
		
		Menu(){
			
			loop_iter = 0;
			inc = 0; 		
			inc_1 = 0;
			inc_2 = 0;
			inc_3 = 0;
			
		}
		
																		//Menu Display
		
		void Menu_display(){
			
				system("cls");
				system("Color F4");
				Sleep(1000);
					cout << " __________________________________________________________________________________________________________________\n";
					cout << "|                                                  MENU                                                            |\n";
					cout << "|                                                                                                                  |\n";
					cout << "|         ~CONE                                 ~SCOOPS                             ~TOPPINGS                      |\n";
					cout << "|         1.SINGLE CONE       Rs.15             16.KIDDIE           Rs.10           32.NUTS                RS.10   |\n";
					cout << "|         2.DOUBLE CONE       Rs.30             17.SINGLE           Rs.15           33.CANDIES             RS.05   |\n";
					cout << "|         3.KIDDIE CONE       Rs.10             18.DOUBLE           Rs.20           34.SAUCE               RS.08   |\n";
					cout << "|         4.WAFFLE CONE       Rs.25             19.MOLTED WAFLE     Rs.35           35.WHIPPED CREAM       RS.12   |\n";
					cout << "|                                               20.CHOCO DIPPED     Rs.30           36.CHOCO               RS.15   |\n";
					cout << "|                                                                                                                  |\n";
					cout << "|         ~SIPPERS                              ~POPSICLE STICKS                    ~ICE CREAM STICKS              |\n";
					cout << "|         5.ICE CREAM SODA    RS.40             21.CHOCOLATE        RS.20           37.MINI SUNDAE         RS.100  |\n";
					cout << "|         6.ROOT FIZZ FLOAT   RS.100            22.STRAWBERRY       RS.25           38.CHOCO SUNDAE        RS.170  |\n";
					cout << "|         7.SMOOTHIE          RS.50             23.MELON            RS.20           39.KIDDIE SUNDAE       RS.120  |\n";
					cout << "|         8.MILKSHAKE         RS.70             24.CARAMEL          RS.25           40.BANANA SPLIT        RS.150  |\n";
					cout << "|         9.CHOCO MALT        RS.80             25.VANILLA          RS.20           41.OREO SUNDAE         RS.250  |\n";
					cout << "|                                                                                                                  |\n";
					cout << "|         ~ICE CREAM POPS                       ~SOFT DRINKS                        ~OTHER                         |\n";
					cout << "|         10.MINI POPS        RS.10             26.SPRITE           RS.40           42.NOODLES             RS.50   |\n";
					cout << "|         11.CHOCO POPS       RS.09             27.COKE             RS.40           43.BURGER              RS.40   |\n";
					cout << "|         12.KIDDIE POPS      RS.08             28.PEPSI            RS.40           44.SANDWICH            RS.35   |\n";
					cout << "|         13.BANANA POPS      RS.10             29.MAAZA            RS.40           45.ICE CREAM ROLL      RS.60   |\n";
					cout << "|         14.OREO POPS        RS.12             30.SLICE            RS.40           46.ICE CUBES           RS.05   |\n";
					cout << "|         15.KIDDIE POPS      RS.05             31.7-UP             RS.40           47.PASTRY              RS.35   |\n";
					cout << "|                                                                                                                  |\n";
					cout << "|                                          MORE THINGS TO BE ADDED SOON                                            |\n";
					cout << "|__________________________________________________________________________________________________________________|\n";
					
		}
		
																		//Bill calculation
	
		void Bill(int i, int q){
		
			loop_iter = loop_iter+1;
			Item_no = i;
			Quantity = q;
			int Price[47]={
	 						15,30,10,25,
	 						40,100,50,70,80,
							10,9,8,10,12,5, 
							10,15,20,35,30,
							20,25,20,25,20,	
							40,40,40,40,40,40,
							10,5,8,12,15,
							100,170,120,150,250,
							50,40,35,60,5,35		
			};
	 	
	 		Price_1 = Price[Item_no-1]*Quantity;
	 		T_Bill = T_Bill+Price_1;
		}
		
																		//Sold Items Quantity save in Array to show in customer invoice
		
		void Item_Quantity(int q1){
			
			item_quantity[inc_2] = q1;
			++inc_2;
		}
		
																		//Sold Items Price save in Array to show in customer invoice
		
		void item_price(int i_p){
		
			Item_no = i_p;
			int Price[47]={
	 						15,30,10,25,
	 						40,100,50,70,80,
							10,9,8,10,12,5, 
							10,15,20,35,30,
							20,25,20,25,20,	
							40,40,40,40,40,40,
							10,5,8,12,15,
							100,170,120,150,250,
							50,40,35,60,5,35		
			};
		
			bill_price[inc_1] = Price[Item_no-1];
			++inc_1;
		}
		
																		//Sold Items Names save in Array to show in customer invoice
																		// Also saves Item Numbers in Array
	
		void item_name(int i_n){
		
			Item_no = i_n;
			string Items[47]={
							"SINGLE CONE    ", "DOUBLE CONE    ", "KIDDIE CONE    ", "WAFFLE CONE    ", 
							"ICE CREAM SODA ", "ROOT FIZZ FLOAT", "SMOOTHIE       ", "MILKSHAKE      ", "CHOCO MALT     ",
							"MINI POPS      ", "CHOCO POPS     ", "KIDDIE POPS    ", "BANANA POPS    ", "OREO POPS      ", "KIDDIE POPS    ", 
							"KIDDIE         ", "SINGLE         ", "DOUBLE         ", "MOLTED WAFLE   ", "CHOCO DIPPED   ", 
							"CHOCOLATE      ", "STRAWBERRY     ", "MELON          ", "CARAMEL        ", "VANILLA        ", 
							"SPRITE         ", "COKE           ", "PEPSI          ", "MAAZA          ", "SLICE          ", "7-UP           ",
							"NUTS           ", "CANDIES        ", "SAUCE          ", "WHIPPED CREAM  ", "CHOCO          ",
					     	"MINI SUNDAE    ", "CHOCO SUNDAE   ", "KIDDIE SUNDAE  ", "BANANA SPLIT   ", "OREO SUNDAE    ", 
							"NOODLES        ", "BURGER         ", "SANDWICH       ", "ICE CREAM ROLL ", "ICE CUBES      ", "PASTRY         "};
		
			bill_items[inc] = Items[Item_no-1];
			++inc;
			Item_No[inc_3] = Item_no;
			++inc_3;
		}
		
																		//Customer invoice
		
		void show_bill(){
			
			system("cls");
			system("Color F4");
			cout <<   " _______________________________________________________________________________________________";
			cout << "\n|\t\t\t\t\t\t\t\t\t\t\t\t|";
			cout << "\n|\t\tCustomer Invoice: \t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
			cout << "|\t\tItems:\t\t\tItem's Quantity: \t\tItem's Price:\t\t|" << endl;
			for(int j=0; j<loop_iter; j++){
				cout << "|\t\t" << bill_items[j] << "\t\t" << item_quantity[j] << "\t\t\t\tRs. " << bill_price[j] << "\t\t\t|" << endl;
			}
			cout << "|\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\tTotal Bill: " << T_Bill << "\\- Rs\t\t\t\t\t\t\t\t|";
			cout << "\n|_______________________________________________________________________________________________|";
			cout << endl;	
			
		}
		
																		//Decrement of Items Quantity from the Stock
		
		void Dec_Quantity(){
			
			
			int i;
			ifstream read;
			read.open("stock.txt",ios::in);								//Read from file
			while(!read.eof()){
				read >> T_I_Quantity[i];
				i++;
			}
			
			for(int i=0; i<loop_iter; i++){								//Decrement in Quantity
				ITem_no= Item_No[i]- 1;
				T_I_Quantity[ITem_no]= T_I_Quantity[ITem_no]- item_quantity[i];
			}
			
			
			fstream write;
			write.open("stock.txt",ios::out);
			for(int i=0; i<47; i++){									//Write update Quantity in file
				write << T_I_Quantity[i];
				write << " ";
			}
			write.close();
	
		}
	
};

																		//Class FeedBack

class FeedBack: public Customer{
	
	public:
		
		void feedback(){
			system("cls");
			system("Color F4");
			
			string feed;
			ofstream fback;												//OPen file in append mode
			fback.open("FEED_BACK.txt",ios::app);
			
			cout << "\t\t\t\t\t _____________________________________\n";
			cout << "\t\t\t\t\t|                                     |\n";
			cout << "\t\t\t\t\t| Please Enter Your FeedBack :) :) :) | \n";
			cout << "\t\t\t\t\t|_____________________________________|" << endl;
			cout << " ____________________________________________________________________________________________________________________\n";
			cout << "|                                                                                                                    |\n";
			cout << "|\t\t";
			
			cin.ignore();												//Entering FeedBack
			getline(cin,feed);
			
			cout << "|                                                                                                                    |\n";
			cout << "|____________________________________________________________________________________________________________________|\n";
			
			fback<<feed<<"\n";											//Storing in file
			
			cout << " ____________________________________________________________________________________________________________________"<<endl;
			cout << "|                                                                                                                    |"<<endl;
			cout << "|                                T H A N K  Y O U  F O R  T H E  F E E D B A C K                                     |"<<endl;
			cout << "|                                    D O   V I S I T  A G A I N ! ! ! ! !                                            |"<<endl;
			cout << "|____________________________________________________________________________________________________________________|"<<endl;
			
		}
		
};


																	//Class Contact

class Contact_Us: public Customer{
	
	public:
		
																	//Showing Contact
		
		void contact_us(){
			
			system("cls");
			system("Color F4");
			
			cout << " ___________________________________________________________________________________________________________________\n";
			cout << "|                                                                                                                   |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|        _______                                 ___________                        ____________                    |\n";
			cout << "|       |       |                               |           |                      |            |                   |\n";
			cout << "|       | NAME: |                               | PHONE_NO: |                      |  EMAIL_ID: |                   |\n";
			cout << "|       |_______|                               |___________|                      |____________|                   |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|       ALI AFFAN BAJWA                         0308-4251091                       bcsf20m508@pucit.edu.pk          |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|       MUHAMMAD AHMAD SIDDIQUI                 0306-3133023                       bcsf20m521@pucit.edu.pk          |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|       MUHAMMAD USMAN                          0309-2402944                       bcsf20m533@pucit.edu.pk          |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|       MUHAMMAD FAIZ RAHEEM                    0302-0707131                       bcsf20m534@pucit.edu.pk          |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|       MUHAMMAD ZEESHAN                        0330-2626435                       bcsf20m556@pucit.edu.pk          |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|        ___________                                                                                                |\n";
			cout << "|       |           |                                                                                               |\n";
			cout << "|       | ADDRESS:  |                    PUNJAB UNIVERSITY AND COLLEGE OF INFORMATION                               |\n";
			cout << "|       |___________|                                                                                               |\n";
			cout << "|                                                                                                                   |\n";
			cout << "|___________________________________________________________________________________________________________________|\n";
		}
};


																		//Class Fun_Facts

class Fun_Facts: public Customer{
	
	public:
		
																		//Showing Fun_Facts
		
		void fun_facts(){
			
			system("cls");
			system("Color F4");
			
			cout << endl<< endl;
			cout << " _____________________________________________________________________________________________________________________\n";
			cout << "\t\t\t\t\t\tFUN FACTS ABOUT ICE CREAM\n";
			cout << " _____________________________________________________________________________________________________________________\n";
			Sleep(1000);
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->BEFORE THE INVENTION OF FRIDGES ICE CREAM WAS CONSIDERED A LUXURY IN THE UNITED STATES.                           |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->FOOD VENDORS AT THE 1904 WORLD'S FAIR IN ST. LOUIS USED WAFFLES WHEN THEIR CUPS HAD RUN OUT!                      |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->FAMOUS ICE CREAM MAKERS BASKIN ROBBINS BOASTED 31 FLAVORS - ONE FOR EACH DAY OF THE MONTH.                        |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->SORBET IS LIKE ICE CREAM BUT CONTAINS NO MILK.                                                                    |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->GELATO ALSO HAS LESS CREAM OR MILK FAT THAN ICE CREAM.                                                            |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->BRITISH PRIME MINISTER MARGARET WAS OF THE TEAM THAT FIRST INVENTED THE METHOD OF MAKING SOFT SERVE ICE CREAM.    |"<<endl;
			cout << "|                                                                                                                     |"<<endl;
			Sleep(1000);
			cout << "| ->BUFFALO, TWO RIVERS, ITHACA AND EVANSTON ALL CLAIM TO BE THE BIRTHPLACE OF THE ICE CREAM SUNDAE.                  |"<<endl;
			Sleep(500);
			cout << "|                                                                                                                     |"<<endl;
			cout << "|_____________________________________________________________________________________________________________________|\n";
		}
};


																		//Class ShopKeeper
		
class ShopKeeper{
		
		int check;	
		
	public:
		
		ShopKeeper(){
			
			
			
			check= -46;
		}
		
																		//To UP-Date Stock
		
		void stock(){
			
			string Items[47]={
							"SINGLE CONE      ", "DOUBLE CONE      ", "KIDDIE CONE      ", "WAFFLE CONE      ", 
							"ICE CREAM SODA   ", "ROOT FIZZ FLOAT  ", "SMOOTHIE         ", "MILKSHAKE        ", "CHOCO MALT       ",
							"MINI POPS        ", "CHOCO POPS       ", "KIDDIE POPS      ", "BANANA POPS      ", "OREO POPS        ", "KIDDIE POPS      ", 
							"KIDDIE           ", "SINGLE           ", "DOUBLE           ", "MOLTED WAFLE     ", "CHOCO DIPPED     ", 
							"CHOCOLATE        ", "STRAWBERRY       ", "MELON            ", "CARAMEL          ", "VANILLA          ", 
							"SPRITE           ", "COKE             ", "PEPSI            ", "MAAZA            ", "SLICE            ", "7-UP             ",
							"NUTS             ", "CANDIES          ", "SAUCE            ", "WHIPPED CREAM    ", "CHOCO            ",
					     	"MINI SUNDAE      ", "CHOCO SUNDAE     ", "KIDDIE SUNDAE    ", "BANANA SPLIT     ", "OREO SUNDAE      ", 
							"NOODLES          ", "BURGER           ", "SANDWICH         ", "ICE CREAM ROLL   ", "ICE CUBES        ", "PASTRY           "};
							
			
			int i;
			ifstream read;
			read.open("stock.txt");										//Read data from file
			while(!read.eof()){
				read >> T_I_Quantity[i];
				i++;
			}
			
			for(int i=0; i<47; i++){
				if(T_I_Quantity[i]<1000){
					cout << Items[i];									//Up-Date Stock
					cin >> T_I_Quantity[i];
					check--;
				}
				check++;
			}
			
			if(check == 1){
				cout << "   \t\t\t\tStock is Enough, No need to UP-DATE the Stock \n \t\t\t\t\t\t   THANKYOU";
				cout << endl << endl << endl;
			}
			
			fstream write;
			write.open("stock.txt",ios::out);							//Write Data in file
			for(int i=0; i<47; i++){
				write << T_I_Quantity[i];
				write << " ";
			}
			write.close();
			
		}
		
																		//Show Current Stock
		
		void show(){
			string Items[47]={
							"SINGLE CONE    ", "DOUBLE CONE    ", "KIDDIE CONE    ", "WAFFLE CONE    ", 
							"ICE CREAM SODA ", "ROOT FIZZ FLOAT", "SMOOTHIE       ", "MILKSHAKE      ", "CHOCO MALT     ",
							"MINI POPS      ", "CHOCO POPS     ", "KIDDIE POPS    ", "BANANA POPS    ", "OREO POPS      ", "KIDDIE POPS    ", 
							"KIDDIE         ", "SINGLE         ", "DOUBLE         ", "MOLTED WAFLE   ", "CHOCO DIPPED   ", 
							"CHOCOLATE      ", "STRAWBERRY     ", "MELON          ", "CARAMEL        ", "VANILLA        ", 
							"SPRITE         ", "COKE           ", "PEPSI          ", "MAAZA          ", "SLICE          ", "7-UP           ",
							"NUTS           ", "CANDIES        ", "SAUCE          ", "WHIPPED CREAM  ", "CHOCO          ",
					     	"MINI SUNDAE    ", "CHOCO SUNDAE   ", "KIDDIE SUNDAE  ", "BANANA SPLIT   ", "OREO SUNDAE    ", 
							"NOODLES        ", "BURGER         ", "SANDWICH       ", "ICE CREAM ROLL ", "ICE CUBES      ", "PASTRY         "};
							
				
			int i;
			ifstream read;
			read.open("stock.txt");										//Read data from file
			while(!read.eof()){
				read >> T_I_Quantity[i];
				i++;
			}
			
			int cut= 0;
			
			for(int i=0; i<47; i++){
				cout << Items[i] << ": " << T_I_Quantity[i] << "\t\t\t ";
				++cut;
				if(cut == 3){
					cout << endl;
					cut= 0;
				}
			}
		}
			
};
		
		

int main(){
		
	jump:
		
	system("Color B0");
	
	//Welcome objects
	welcome obj;
	obj.show();
	obj.show1();
	
	cout <<"\nI";	Sleep(250);	cout <<"N";	Sleep(250);	cout <<"I";	Sleep(250);	cout <<"T";	Sleep(250);	cout <<"I";	Sleep(250);	cout <<"A";	Sleep(250);	
	cout <<"L";		Sleep(250);	cout <<"I";	Sleep(250);	cout <<"Z";	Sleep(250);	cout <<"I";	Sleep(250);	cout <<"N";	Sleep(250);	cout <<"G";	Sleep(250);	
	cout <<".";		Sleep(250);	cout <<".";	Sleep(250);	cout <<".\n";
	
	Sleep(1500);
	
	cout<<"\t\t\t\t ________________________________________________________\n";
	cout<<"\t\t\t\t|                |                     |                 |\n";
	cout<<"\t\t\t\t|  1.CUSTOMER    |    2.SHOPKEEPER     |   3.EXIT        |\n";
    cout<<"\t\t\t\t|________________|_____________________|_________________|\n"<<endl;
    
    cout<<"\nENTER YOUR CHOICE\n";
    
	cout<<" _______\n";
	cout<<"|       |\n    ";
	int M_choice;
	cin>>M_choice;
	cout<<"|_______|\n";
    cout<<"\n";
    
    Sleep(1000);
    
    	if(M_choice == 1){
    	
    		char option;
    	
    		do{
    			system("Color F4");
    				
    			//Menu Objects
    			Menu menu;
				Menu bill;
			
    			system("cls");
    			
    			cout<<" ___________________________________________________________________________________________________________________\n";
				cout<<"|                                                                                                                   |\n";
				cout<<"|          1. MENU         2. FEEDBACK          3. CONTACT US         4. FUN FACTS         5. Main-Display          |\n";
				cout<<"|___________________________________________________________________________________________________________________|\n"<<endl;	
				cout<<"\n";
				cout<<"ENTER YOUR CHOICE : \n";	
				
				cout<<" _______\n";
				cout<<"|       |\n    ";
				int choice;
        		cin>>choice;
 	    		cout<<"|_______|\n";
        		cout<<"\n";

   	    	Sleep(1000);
        
       			if(choice == 1){
       				
       				jump_3:
       			
        			menu.Menu_display();
        			
        			char selection;
        			int quantity;
        			int item_no;
        			
        			char option;
        			cout << "\nTo buy an Item press Y/y or press M/m to go to Main-Display: ";
        			cin >> option;
        			
        			if(option== 'M' || option== 'm'){
        				system("cls");
        				goto jump;										//Go to Main-display
					}
        	
        			do{
        				cout << "\nEnter Item number : ";
       		 			cin >> item_no;
       		 			
        				cout << "Enter Quantity of Item you selected: ";
        				cin >> quantity;
        				
        				int i;
						ifstream read;
						read.open("stock.txt");							//Read data from file
						while(!read.eof()){
							read >> T_I_Quantity[i];
							i++;
						}
						
						if(quantity > T_I_Quantity[item_no]){
							
							char choose;
							cout << "\nOut of stock...\n";
							cout << "\nTo buy another Item press Y/y Otherwise pree M/m to go to Main-Display:";
							cin >> choose;
							
							if(choose== 'Y' || choose== 'y'){
								goto jump_3;
							}
							else if(choose== 'M' || choose== 'm'){
								system("cls");
								goto jump;
							}
							
						}
        					
    			    	bill.Bill(item_no,quantity);
    		    		bill.item_price(item_no);
    		    		bill.Item_Quantity(quantity);
  		  		    	bill.item_name(item_no);
  		  		    	
        				cout << "\nDo you want select another item? \nEnter (Y/N): ";
       				 	cin >> selection;
       				 	
        			}while (selection == 'Y' || selection == 'y');
        			
        			system("cls");
			
					Sleep(250);
					cout << endl << endl << endl << "\t\t";
					cout <<"G";		Sleep(250);	cout <<"E";	Sleep(250);	cout <<"N";	Sleep(250);	cout <<"E";	Sleep(250);	cout <<"R";	Sleep(250);	cout <<"A";	Sleep(250);	
					cout <<"T";		Sleep(250);	cout <<"I";	Sleep(250);	cout <<"N";	Sleep(250);	cout <<"G";	Sleep(250);	cout <<" ";	Sleep(250);	cout <<" ";	Sleep(250);	
					cout <<"C";		Sleep(250);	cout <<"U";	Sleep(250);	cout <<"S";	Sleep(250);	cout <<"T";	Sleep(250);	cout <<"O";	Sleep(250);	cout <<"M";	Sleep(250);
					cout <<"E";		Sleep(250);	cout <<"R";	Sleep(250);	cout <<" ";	Sleep(250);	cout <<" ";	Sleep(250);	cout <<"I";	Sleep(250);	cout <<"N";	Sleep(250);
					cout <<"V";		Sleep(250);	cout <<"O";	Sleep(250);	cout <<"I";	Sleep(250);	cout <<"C";	Sleep(250);	cout <<"E";	Sleep(250);	cout <<" ";	Sleep(250);
					cout <<".";		Sleep(500);	cout <<".";	Sleep(500);	cout <<".";	Sleep(500);	cout <<".";	Sleep(500);	cout <<".";	Sleep(500);	cout <<".";	Sleep(500);
        			
        			bill.show_bill();
        			bill.Dec_Quantity();
        			
        			cout << "\n\nDo You Want to Give FeedBack If Yes Press(Y/y) or Press (N/n) to continue : ";
        			char select;
        			cin >> select;
        		
        			if(select == 'y' || select == 'Y'){
        				FeedBack fb;
        				fb.feedback();
					}
    	    		else if(select == 'n' || select == 'N'){
        				goto jump_1; 									//To select Customer-display or Main-display
					}
        		}
        		
        		else if(choice == 2){
				        			
					//FeedBack objects
					FeedBack fb_1;
					fb_1.feedback();
				}
			
				else if(choice == 3){
					
					//Contact_Us objects
					Contact_Us CU;
					CU.contact_us();
				}
			
				else if(choice == 4){
				
					//Fun_Facts objecys
					Fun_Facts fun;
					fun.fun_facts();
				}
			
				else if(choice == 5){
					system("cls");
					goto jump;											//Go to Main-display
				}
			
				jump_1:
				
        		cout << "\n\nPress (C/c) to go to Customer-Display or Press (M/m) to Main-Display: ";
        		cin >> option;
        		
        		if(option == 'm' || option == 'M'){
        			system("cls");
        			goto jump;											//Go to Main-display
				}
				
			}while(option == 'c' || option == 'C');
			
		}
	
		else if(M_choice == 2){
			
			jump2:
				
			system("cls");
			system("Color 2F");
				
			//ShopKeeper objects
			ShopKeeper SK;
		
			int choice_s;
			
			cout<<"\t\t\t __________________________________________________________________________\n";
			cout<<"\t\t\t|                        |                         |                       |\n";
			cout<<"\t\t\t|    1. UP-DATE STOCK    |     2. CHECK STOCK      |     3. MAIN-DISPLAY   |\n";
			cout<<"\t\t\t|________________________|_________________________|_______________________|\n"<<endl;	
			cout<<"\n";
			
			cout<<"ENTER YOUR CHOICE : ";
			cin >> choice_s;
			
			cout << "\n";
			if(choice_s== 1){
			
				system("cls");
			
				cout<<"\t\t\t\t\t _______________________________\n";
				cout<<"\t\t\t\t\t|                               |\n";
				cout<<"\t\t\t\t\t|         UP-DATE STOCK         |\n";
				cout<<"\t\t\t\t\t|_______________________________|\n"<<endl;	
				cout<<"\n";
			
				SK.stock();
				
				cout << "\n\nTo go to ShopKeeper-Display press (S/s) or press M/m to Main-Display: ";
				char choice_s1;
				cin >> choice_s1;
				
				if(choice_s1== 's' || choice_s1== 'S'){
					goto jump2;
				}
				
				else if(choice_s1== 'm' || choice_s1== 'M'){
					system("cls");
					goto jump;
				}
			}
		
			else if(choice_s== 2){
			
				system("cls");
				
				cout<<"\t\t\t\t\t _______________________________\n";
				cout<<"\t\t\t\t\t|                               |\n";
				cout<<"\t\t\t\t\t|        CURRENT STOCK          |\n";
				cout<<"\t\t\t\t\t|_______________________________|\n"<<endl;	
				cout<<"\n";
			
				SK.show();
			
				char choice_s2;
				cout << "\n\n\n\n\n\nTo go to Main-Display press M/m or press S/s to ShopKeeper-Display: ";
				cin >> choice_s2;
			
				if(choice_s2== 'M'|| choice_s2== 'm'){
					system("cls");
					goto jump;
				}
			
				else if(choice_s2== 'S'|| choice_s2== 's'){
					goto jump2;
				}
			}
		
			else if(choice_s == 3){
				system("cls");
				goto jump;
			}
		
		}
	
		else if(M_choice == 3){
		
			return 0;
		}
	
		return 0;
}
