//Football Ticketing Program
#include<iostream>
#include<iomanip>
//list of user-defined function prototypes
void list();
void SeatClass();
void listcategory1();
void listcategory2();
void listcategory3();
void listcategory4();
void display();
void ItemList();
void FoodMenu();
double calculateItemPrice(double);
double calculateFoodPrice(double);
double calculateExactAmount(double,double,double,double,double);

using namespace std;

//main program for user to buy tickets
int main(){
  
  //variables declaration
  char footballcode=' ',ticketcode=' ',setfood=' ',answer1=' ',answer2=' ',answer3=' ',membership=' ';
  string name=" ",phonenumber=" ",category=" ",identitycard=" ",footballtype=" ",tickettype=" ",itemcode=" ",foodtype=" ",paymethod=" ";
  int customer=0,quantity=0,seatcode=0,paymethodcode=0,child=0,adult=0,senior=0,disabilities=0,paymentmethod=0;
  double cash=0.0,balance=0.0,totalprice=0.0,itemprice=0.0,classprice=0.0,foodprice=0.0,exactAmount=0.0,totalincome=0.0,cashlessDiscount=0.0;
  double totalticketprice=0.0,totprice=0.0,memberdiscount=0.0,amountdue=0.0,amountToPay=0.0;
  
  //Array variables declaration
  string classtype[4]={"Single","Couple","VIP","Deluxe"};
  string footballMatch[4]={"AFC Champions League","Malaysian Super League","Premier League","M3 League"};
  string seattype[4]={"Section A","Section B","Section C","Section D"};
  string ticketType[4]={"Child","Adult","Senior Citizen","Disabilities"};
  string item[4]={"Wissle","Scarf","Mask","T-Shirt"};
  
  
  //system heading
  display(); //line 367
  //input outside the loop
  cout<<"\n\t\t\t\tPlease enter your name: \n\t\t\t\t-> ";
  getline(cin,name);
  cout<<"\n\t\t\t\tPlease enter your phone number: \n\t\t\t\t-> ";
  cin>>phonenumber;
  cout<<"\n\t\t\t\tPlease enter your IC number: \n\t\t\t\t-> ";
  cin>>identitycard;
  cout<<endl;
  
  //outer loop to get the details of the ticket
  do{
    customer++;
    //Display the type football matches (line 385)
     list(); //function call for list of football matches 
    cout<<"\nPlease enter the code of your chosen match from above: ";
    cin>>footballcode;
    cout<<endl;
    
    //identified the code input by the user 
    switch(footballcode){
      case'W':
      case'w':footballtype="AFC Champions League";
          listcategory1(); //function call for category list (line 426)
          
          cout<<"Please enter the code for the chosen category from above: ";
          cin>>ticketcode;
          switch(ticketcode){
            case'C':
            case'c':category="Child";
                cout<<"Please enter the quantity of the tickets for Children: ";
                cin>>child;
                quantity += child;
                totalticketprice = 15.69 * child;
                break;
                
            case'A':
            case'a':category="Adult";
                cout<<"Please enter the quantity of the tickets for Adult: ";
                cin>>adult;
                quantity += adult;
                totalticketprice = 35.90 * adult;
                break;
                
            case'S':
            case's':category="Senior Citizen";
                cout<<"Please enter the quantity of the tickets for Senior Citizen: ";
                cin>>senior;
                quantity += senior;
                totalticketprice = 25.15 * senior;
                break;
                
            case'D':
            case'd':category="Disabilities";
                cout<<"Please enter the quantity of the tickets for disabilities: ";
                cin>>disabilities;
                quantity += disabilities;
                totalticketprice = 20.80 * disabilities;
                break;  
                
            default:cout<<"Invalid Code for Category,Please Try Again."<<endl;
          }
          break;
      
        
      case'X':
      case'x':footballtype="Malaysian Super League";
          listcategory2(); //function call for category list (line 438)
          
          cout<<"Please enter the code for the chosen category from above: "; 

cin>>ticketcode;
          switch(ticketcode){
            case'C':
            case'c':category="Child";
                cout<<"Please enter the quantity of the tickets for Children: ";
                cin>>child;
                quantity += child;
                totalticketprice = 13.45 * child;
                break;
                
            case'A':
            case'a':category="Adult";
                cout<<"Please enter the quantity of the tickets for Adult: ";
                cin>>adult;
                quantity += adult;
                totalticketprice = 30.70 * adult;
                break;
                
            case'S':
            case's':category="Senior Citizen";
                cout<<"Please enter the quantity of the tickets for Senior Citizen: ";
                cin>>senior;
                quantity += senior;
                totalticketprice = 22.65 * senior;
                break;
                
            case'D':
            case'd':category="Disabilities";
                cout<<"Please enter the quantity of the tickets for disabilities: ";
                cin>>disabilities;
                quantity += disabilities;
                totalticketprice = 17.80 * disabilities;
                break;
                
            default:cout<<"Invalid Code for Category,Please Try Again."<<endl;
          }
          break;
        
        
      case'Y':
      case'y':footballtype="Premier League";
          listcategory3(); //function call for category list (line 450)
          
          cout<<"Please enter the code for the chosen category from above: ";
          cin>>ticketcode;
          switch(ticketcode){
            case'C':
            case'c':category="Child";
                cout<<"Please enter the quantity of the tickets for Children: ";
                cin>>child;
                quantity += child;
                totalticketprice = 10.20 * child;
                break;
                
            case'A':
            case'a':category="Adult";
                cout<<"Please enter the quantity of the tickets for Adult: ";
                cin>>adult;
                quantity += adult;
                totalticketprice = 27.60 * adult;
                break;
                
            case'S':
            case's':category="Senior Citizen";
                cout<<"Please enter the quantity of the tickets for Senior Citizen: ";
                cin>>senior;
                quantity += senior;
                totalticketprice = 20.75 * senior;
                break;
                
            case'D':
            case'd':category="Disabilities";
                cout<<"Please enter the quantity of the tickets for disabilities: ";
                cin>>disabilities;
                quantity += disabilities;
                totalticketprice = 18.50 * disabilities;
                break;
                
            default:cout<<"Invalid Code for Category,Please Try Again."<<endl;
          }
          break;
        
          
      case'Z':
      case'z':footballtype="M3 League";
          listcategory4(); //function call for category list (line 462)
          
          
          cout<<"Please enter the code for the chosen category from above: ";
          cin>>ticketcode;
          switch(ticketcode){
            case'C':
            case'c':category="Child";
                cout<<"Please enter the quantity of the tickets for Children: ";
                cin>>child;
                quantity += child;
                totalticketprice = 9.45 * child;
                break;
                
            case'A':
            case'a':category="Adult";
                cout<<"Please enter the quantity of the tickets for Adult: ";
                cin>>adult;
                quantity += adult;
                totalticketprice = 17.50 * adult;
                break;
                
            case'S':
            case's':category="Senior Citizen";
                cout<<"Please enter the quantity of the tickets for Senior Citizen: ";
                cin>>senior; 

quantity += senior;
                totalticketprice = 12.35 * senior;
                break;
                
            case'D':
            case'd':category="Disabilities";
                cout<<"Please enter the quantity of the tickets for disabilities: ";
                cin>>disabilities;
                quantity += disabilities;
                totalticketprice = 10.00 * disabilities;
                break;
                
            default:cout<<"Invalid Code for Category, Please Try Again."<<endl;
          }
          break;
          
          
      default:cout<<"Invalid Code for the choosen Football Match,Please try again."<<endl;  
          break;
    }
    
    //ask user if they want to upgrade their seat
    cout<<endl;
    cout<<"please choose your seat class from below "<<endl;
    SeatClass(); // line 474
    cout<<"Enter the code of the seat class you choose :";
    cin>>seatcode;
    
    if(seatcode==1)
      totalticketprice+=0;
    else if(seatcode==2)
      totalticketprice+=20;
    else if(seatcode==3)
      totalticketprice+=70;
    else if(seatcode==4)
      totalticketprice+=100;
    else
      cout<<"Invalid seat class code, Please try again."<<endl;
    
    //ask user if they want to buy items
    cout<<endl;
    cout<<"Do you want to buy some item?<y/n>: ";
    cin>>answer3;
    while(answer3=='y'||answer3=='Y'){
      cout<<endl;
      ItemList(); //line 532
      itemprice= calculateItemPrice(itemprice); //line 546
      cout<<endl;
      cout<<"Do you want to add more item?<y/n>: ";
      cin>>answer3;  
    }
    
    //ask user if they want to buy food
    cout<<endl;
    cout<<"Do you want to buy some food?<y/n>: ";
    cin>>answer2;
    while(answer2=='y'||answer2=='Y'){
      cout<<endl;
      FoodMenu(); //line 485
      foodprice= calculateFoodPrice(foodprice); //line 511
      cout<<endl;
      cout<<"Do you want to add more food?<y/n>: ";
      cin>>answer2;  
    }
      
    //total price before discount (line 567)
    exactAmount = calculateExactAmount(totalticketprice,itemprice,foodprice,totalprice,classprice); //line 567
    
    //ask user if they have membership card or not
    cout<<endl;
    cout<<"Do you have a membership card? <y/n>: ";
    cin>> membership;
    
    if(membership=='y'||membership=='Y'){
      memberdiscount = exactAmount * 0.1;
      amountdue = exactAmount - memberdiscount;
    }
    else{
      memberdiscount =0;
      amountdue = totalticketprice;  
    }
    
    
    //payment method for user to pay the tickets 
    cout<<endl;
    cout<<"Do you want to pay by card or cash? <1 for credit card/ 2 for cash> : ";
    cin>>paymentmethod;
    
    if(paymentmethod==1){
      cashlessDiscount = amountdue * 0.045;
      amountToPay = amountdue - cashlessDiscount;
    }
    else if(paymentmethod==2){
      cout <<endl;
      cout <<"Exact Amount\t\t: RM "<< exactAmount <<endl; //give balance to receipient
      cout <<"Enter the amount of cash you receive from receipient : ";
      cin>>cash;
      amountToPay = amountdue;
      balance = cash - amountToPay;
      
    }
    
    //calculate the total income of the day
    totalincome += amountToPay;
    //display actual receipt to the user
    cout <<fixed<<setprecision(2)<<showpoint<<endl;
    cout <<"\t\tReceipt"<<endl;
    cout <<"______________________________________"<<endl;
    cout <<"Recipient's Name\t: "<< name <<endl;
    cout <<"IC Number\t\t: "<< identitycard <<endl;
    cout <<"Phone Number\t\t: "<< phonenumber <<endl;
    cout <<"Quantity Of Tickets\t: "<< quantity <<" ("<< category <<")"<<endl;
    cout <<"Total Tickets price\t: RM "<< totalticketprice <<endl;
    cout <<"Total Item price\t: RM "<< itemprice <<endl;
    cout <<"Total Food price\t: RM "<< foodprice <<endl;
    cout <<"Exact Amount\t\t: RM "<< exactAmount <<endl;
    cout <<"______________________________________"<<endl;  
    cout <<"Membership Discount\t: RM "<< memberdiscount <<endl;
    cout <<"Price After Discount\t: RM "<< amountdue <<endl;
    cout <<"Cashless Discount\t: RM "<< cashlessDiscount <<endl; 

cout <<"______________________________________"<<endl;  
    cout <<"Amount To Pay\t\t: RM "<< amountToPay <<endl;
    cout <<endl;
    cout <<"Cash\t: RM "<< cash <<endl;
    cout <<"Balance\t: RM "<< balance <<endl;
    cout <<"______________________________________"<<endl;
    cout <<"THANK YOU FOR USING OUR FOOTBALL TICKETING SYSTEM "<<endl;  
    cout <<endl;
    cout <<"!!! ENJOY YOUR "<< footballtype <<"FOOTBALL MATCH !!!"<<endl;
    cout <<endl;
    cout <<"______________________________________"<<endl;
    cout <<"Total Customer That Used The System\t: "<< customer <<endl;
    cout <<"Total Customer Of The Day\t\t: "<< quantity <<endl;
    cout <<"Total Income Of The Day\t\t:  "<< totalincome <<endl;
    cout <<"______________________________________"<<endl;
    
    //to get a new receipt for other customer  
    cout<<endl;
    cout<<"Do you want to add more tickets <Y/N>: ";
    cin>>answer1;
    cout<<endl;
    
    }while(answer1=='Y'||answer1=='y'); //closing of the outer loop
    
    
  return 0;
}
//list of user-defined function definition
void display(){
cout << "|-----------------------------------------------------------------------------------|" << endl;
    cout << "|            _____                                                                  |" << endl;
    cout << "|           |     |                                                                 |" << endl;
    cout << "|           |_____|                                                                 |" << endl;
    cout << "|           _ | |                   WELCOME                                       |" << endl;
    cout << "|          /      \\                                                                 |" << endl;
    cout << "|         / /|  |\\ \\                         TO                                     |" << endl;
    cout << "|        /_/ |  | \\ \\                              FOOTBALL                         |" << endl;
    cout << "|            |  |  \\_\\                                                              |" << endl;
    cout << "|          |  |       ______                               TICKETING              |" << endl;
    cout << "|      \\ \\  /  \\     /      \\                                         SYSTEM      |" << endl;
    cout << "|       \\ \\/ /  \\ \\    |      |                                                     |" << endl;
    cout << "|        \\/    \\ \\   \\______/                                                     |" << endl;
    cout << "|                 \\_\\                                                               |" << endl;
    cout << "|-----------------------------------------------------------------------------------|" << endl;
}
void list(){
  cout << "\t\t\t\tWELCOME TO STADIUM BUKIT BULAN                          "<<endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|     CODE     |     MATCH     |      CATEGORY      |       PRICE      |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               |       Child        |     RM 15.69     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |      AFC      |       Adult        |     RM 35.90     |" << endl;
  cout << "\t|       W      |   Champions   |--------------------|------------------|" << endl;
  cout << "\t|              |    League     |   Senior Citizen   |     RM 25.15     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |               |    Disabilities    |     RM 20.80     |" << endl;    
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               |       Child        |     RM 13.45     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;  

cout << "\t|              |   Malaysian   |       Adult        |     RM 30.70     |" << endl;
  cout << "\t|       X      |     Super     |--------------------|------------------|" << endl;
  cout << "\t|              |     League    |   Senior Citizen   |     RM 22.65     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |               |    Disabilities    |     RM 17.80     |" << endl;    
    cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               |       Child        |     RM 10.20     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |    Premier    |       Adult        |     RM 27.60     |" << endl;
  cout << "\t|       Y      |    League     |--------------------|------------------|" << endl;
  cout << "\t|              |               |   Senior Citizen   |     RM 20.75     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |               |    Disabilities    |     RM 18.50     |" << endl;    
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               |       Child        |     RM  9.45     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |       M3      |       Adult        |     RM 17.50     |" << endl;
  cout << "\t|       Z      |     League    |--------------------|------------------|" << endl;
  cout << "\t|              |               |   Senior Citizen   |     RM 12.35     |" << endl;
  cout << "\t|              |               |--------------------|------------------|" << endl;
  cout << "\t|              |               |    Disabilities    |     RM 10.00     |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;        
}
void listcategory1(){
  cout<<"***************************************"<<endl;
  cout<<"\tTicket for AFC Champions League"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tCategory"<<"\t\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"C"<<"\tChild"<<"\t\t\t15.69"<<endl;
  cout<<"A"<<"\tAdult"<<"\t\t\t35.90"<<endl;
  cout<<"S"<<"\tSenior Citizen"<<"\t\t25.15"<<endl;
  cout<<"D"<<"\tDisabilities"<<"\t\t20.80"<<endl;
  cout<<"______________________________________"<<endl;
}
void listcategory2(){
  cout<<"***************************************"<<endl;
  cout<<"\tTicket for Liga Super League"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tCategory"<<"\t\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"C"<<"\tChild"<<"\t\t\t13.45"<<endl;
  cout<<"A"<<"\tAdult"<<"\t\t\t30.70"<<endl;
  cout<<"S"<<"\tSenior Citizen"<<"\t\t22.65"<<endl;
  cout<<"D"<<"\tDisabilities"<<"\t\t17.80"<<endl;
  cout<<"______________________________________"<<endl;
}
void listcategory3(){
  cout<<"***************************************"<<endl;
  cout<<"\tTicket for Prime League"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tCategory"<<"\t\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"C"<<"\tChild"<<"\t\t\t10.20"<<endl;
  cout<<"A"<<"\tAdult"<<"\t\t\t27.60"<<endl;
  cout<<"S"<<"\tSenior Citizen"<<"\t\t20.75"<<endl;
  cout<<"D"<<"\tDisabilities"<<"\t\t18.50"<<endl;
  cout<<"______________________________________"<<endl;
}
void listcategory4(){
  cout<<"***************************************"<<endl;
  cout<<"\tTicket for M3 League"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tCategory"<<"\t\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"C"<<"\tChild"<<"\t\t\t9.45"<<endl;  

cout<<"A"<<"\tAdult"<<"\t\t\t17.50"<<endl;
  cout<<"S"<<"\tSenior Citizen"<<"\t\t12.35"<<endl;
  cout<<"D"<<"\tDisabilities"<<"\t\t10.00"<<endl;
  cout<<"______________________________________"<<endl;  
}
void SeatClass(){
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tClass Type"<<"\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"1"<<"\tSingle"<<"\t\t+0"<<endl;
  cout<<"2"<<"\tCouple"<<"\t\t+20"<<endl;
  cout<<"3"<<"\tVIP"<<"\t\t+70"<<endl;
  cout<<"4"<<"\tDeluxe"<<"\t\t+100"<<endl;
  cout<<"______________________________________"<<endl;
}

void FoodMenu(){
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|     CODE     |    FOOD SET   |        MENU        |       PRICE      |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               | *Nasi Goreng       |                  |" << endl;
  cout << "\t|     F01      |       A       | *Sausages          |     RM 19.90     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;    
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               | *Chicken Burger    |                  |" << endl;
  cout << "\t|     F02      |       B       | *Nugget 4 pieces   |     RM 16.70     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;    
  cout << "\t|              |               | *Beef Burger       |                  |" << endl;
  cout << "\t|     F03      |       C       | *Maggie Goreng     |     RM 15.35     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;    
  cout << "\t|              |               | *Nasi Goreng       |                  |" << endl;
  cout << "\t|     F04      |       D       |  Kampung           |     RM 22.00     |" << endl;
  cout << "\t|              |               | *Coconut Shake     |                  |" << endl;
  cout << "\t|              |               | *Fries             |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;        
}

double calculateFoodPrice(double foodprice){
  
  string foodcode=" ";
  int foodquantity=0;
  
  cout<<"Enter the code of the choosen Item from above : ";
  cin>>foodcode;
  cout<<"Enter quantity : ";
  cin>>foodquantity;
  if(foodcode=="F01"||foodcode=="f01")
    foodprice += 5.00 * foodquantity;
  else if(foodcode=="F02"||foodcode=="f02")
    foodprice += 10.00 * foodquantity;
  else if(foodcode=="F03"||foodcode=="f03")
    foodprice += 12.00 * foodquantity;
  else if(foodcode=="F04"||foodcode=="f04")
    foodprice += 13.50 * foodquantity;
    
    return foodprice;
}

void ItemList(){
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     CODE     |     ITEM      |       PRICE      |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T01      |    Wissle     |     RM 5.00      |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T02      |    Scarf      |     RM 10.00     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T03      |    Mask       |     RM 12.00     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T04      |    T-Shirt    |     RM 13.50     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
} 

cout<<"A"<<"\tAdult"<<"\t\t\t17.50"<<endl;
  cout<<"S"<<"\tSenior Citizen"<<"\t\t12.35"<<endl;
  cout<<"D"<<"\tDisabilities"<<"\t\t10.00"<<endl;
  cout<<"______________________________________"<<endl;  
}
void SeatClass(){
  cout<<"______________________________________"<<endl;
  cout<<"Code"<<"\tClass Type"<<"\tPrice(RM)"<<endl;
  cout<<"______________________________________"<<endl;
  cout<<"1"<<"\tSingle"<<"\t\t+0"<<endl;
  cout<<"2"<<"\tCouple"<<"\t\t+20"<<endl;
  cout<<"3"<<"\tVIP"<<"\t\t+70"<<endl;
  cout<<"4"<<"\tDeluxe"<<"\t\t+100"<<endl;
  cout<<"______________________________________"<<endl;
}

void FoodMenu(){
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|     CODE     |    FOOD SET   |        MENU        |       PRICE      |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               | *Nasi Goreng       |                  |" << endl;
  cout << "\t|     F01      |       A       | *Sausages          |     RM 19.90     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;    
  cout << "\t|----------------------------------------------------------------------|" << endl;
  cout << "\t|              |               | *Chicken Burger    |                  |" << endl;
  cout << "\t|     F02      |       B       | *Nugget 4 pieces   |     RM 16.70     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;    
  cout << "\t|              |               | *Beef Burger       |                  |" << endl;
  cout << "\t|     F03      |       C       | *Maggie Goreng     |     RM 15.35     |" << endl;
  cout << "\t|              |               | *Mineral Water     |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;    
  cout << "\t|              |               | *Nasi Goreng       |                  |" << endl;
  cout << "\t|     F04      |       D       |  Kampung           |     RM 22.00     |" << endl;
  cout << "\t|              |               | *Coconut Shake     |                  |" << endl;
  cout << "\t|              |               | *Fries             |                  |" << endl;
  cout << "\t|----------------------------------------------------------------------|" << endl;        
}

double calculateFoodPrice(double foodprice){
  
  string foodcode=" ";
  int foodquantity=0;
  
  cout<<"Enter the code of the choosen Item from above : ";
  cin>>foodcode;
  cout<<"Enter quantity : ";
  cin>>foodquantity;
  if(foodcode=="F01"||foodcode=="f01")
    foodprice += 5.00 * foodquantity;
  else if(foodcode=="F02"||foodcode=="f02")
    foodprice += 10.00 * foodquantity;
  else if(foodcode=="F03"||foodcode=="f03")
    foodprice += 12.00 * foodquantity;
  else if(foodcode=="F04"||foodcode=="f04")
    foodprice += 13.50 * foodquantity;
    
    return foodprice;
}

void ItemList(){
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     CODE     |     ITEM      |       PRICE      |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T01      |    Wissle     |     RM 5.00      |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T02      |    Scarf      |     RM 10.00     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T03      |    Mask       |     RM 12.00     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
  cout << "\t|     T04      |    T-Shirt    |     RM 13.50     |" << endl;
  cout << "\t|-------------------------------------------------|" << endl;
}  


double calculateItemPrice(double itemprice){
  
  string itemcode=" ";
  int itemquantity=0;
  
  cout<<"Enter the code of the choosen Item from above : ";
  cin>>itemcode;
  cout<<"Enter quantity : ";
  cin>>itemquantity;
  if(itemcode=="T01"||itemcode=="t01")
    itemprice += 5.00 * itemquantity;
  else if(itemcode=="T02"||itemcode=="t02")
    itemprice += 10.00 * itemquantity;
  else if(itemcode=="T03"||itemcode=="t03")
    itemprice += 12.00 * itemquantity;
  else if(itemcode=="T04"||itemcode=="t04")
    itemprice += 13.50 * itemquantity;
    
    return itemprice;
}

double calculateExactAmount(double totalticketprice,double itemprice,double foodprice,double totalprice,double classprice){
  
  totalprice = totalticketprice + itemprice + foodprice + classprice;
  
  return totalprice;
}  

