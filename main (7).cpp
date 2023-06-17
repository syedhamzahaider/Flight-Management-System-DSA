
#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <cstdio>
#include <windows.h>
#include <cstdlib>

using namespace std;
int glob=0; //global variables
int global=10;
void developers()
{
        // 0 - black background,
    // A - Green Foreground
    //system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    cout<<"\n\n\n\n";
    cout<<"\n\n\n\n\t\t\t\t\tLoading...\n\n";
    cout<<"\t\t\t\t\t";

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    cout<<("\r");
    cout<<"\t\t\t\t\t";

    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(100);
    }
    system("cls");
}

class passenger{
    private:
struct node
{
   string name1, name2, number, idno, address,flight,time,artime;
   int pnr;
   long int date;
   node *next;
};
node *head = NULL , *newnode , *temp;
int len = 0 ;
public:
    int pnr;
    char f_d[10],toja[7],tojd[7]; //protected members
    long int doj;
    int choice,src,dest;

    void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
    void j_detail() // function declaration and definition for domestic journey
    {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin>> doj;
        cout << "\1.Lahore(1) \t\2.Islamabad(2) \t\3.Karachi(3)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\t\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.AirBlue(2)\t\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Shaheen Airline(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\t\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.AirBlue(2)\t\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Shaheen Airline(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\t\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "\2.AirBlue(2)\t\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "\3.Shaheen Airline(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        }

        else if(src==dest)//condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }
    void  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "PIA"<<endl;
                strcpy(f_d,"PIA");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00"); //copy to string
                strcpy(toja,"11:05");// copy to string
                break;
          case 2://condition
                cout << "\nFlight selected:"<<endl;
                cout << "AirBlue"<<endl;
                strcpy(f_d,"AirBlue");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");//copy to string
                strcpy(toja,"17:05");//copy to string
                break;
          case 3://condition
                cout << "\nFlight selected:" << endl;
                cout << "Shaheen Airline" << endl;
                strcpy(f_d,"Shaheen Airline");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");//copy to string
                strcpy(toja,"22:05");//copy to string
                break;
          default://condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
void C_node ()
{
    newnode = new node;
    cout<<"Enter first name: ";
    cin>>newnode->name1;
    cout<<"Enter last name: ";
    cin>>newnode->name2;
    cout<<"Enter number: ";
    cin>>newnode->number;
    newnode->pnr=pnr;
    newnode->flight=f_d;
    newnode->date=doj;
    newnode->time=tojd;
    newnode->artime=toja;
    cout<<"Enter id card number without dashes :";
    cin>>newnode->idno;
    cout<<"Enter email address:";
    cin>>newnode->address;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next= newnode;
        temp = newnode;
    }
}
void saverecord()
{
    if(head == NULL)
    {
        cout<<"List is Empty "<<endl;
    }
    else
    {
        ofstream MyFile("domestic.txt");
        node *trav = head ;
        while (trav != NULL)
        {


            MyFile<<"\n\t\tFull Name : "<<trav->name1<<" "<<trav->name2<<endl;
            MyFile<<"\t\tPhone Number : "<<trav->number<<endl;
            MyFile<<"\t\tID Number : "<<trav->idno<<endl;
            MyFile<<"\t\tE Address : "<<trav->address<<endl;
            MyFile<<"\t\tPNR : "<<trav->pnr<<endl;
            MyFile<<"\t\tFlight : "<<trav->flight<<endl;
            MyFile<<"\t\tDate : "<<trav->date<<endl;
            MyFile<<"\t\tDeparture : "<<trav->time<<endl;
            MyFile<<"\t\tArrival   : "<<trav->artime<<endl;
            MyFile<<"\t\t\t\tFlight Confirmed "<<endl;
            MyFile<<"\t\t\t\t================="<<endl;
            trav= trav->next;
            len++;
        }
        MyFile.close();

    }
}

void display ()
{
    if(head == NULL)
    {
        cout<<"NO RECORD FOUND! "<<endl;
    }
    else
    {
        node *trav = head ;
        while (trav != NULL)
        {
            cout<<"\tFlight Details"<<endl;
            cout<<"PNR:" << trav->pnr << endl;
            cout<<"Flight:" << trav->flight << endl;
            cout<<"Full Name : "<<trav->name1<<""<<trav->name2<<endl;
            cout<<"Date Of Journey:" << trav->date << endl;
            cout<<"Departure Time:" << trav->time << endl;
            cout<<"Arrival Time:" << trav->artime<<endl;
            trav= trav->next;
    }
}}
    void cancelticket(int n)
    {
        node* temp = head;
        node* ptr ;
        if(head==NULL)
        {
            cout<<"!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!!!";
        }
else if(head->next==NULL)
        {

            temp = head;
            head = NULL;
            free(temp);
        }
        else
        {int count=1;
        while(count<n)
        {
            ptr = temp;
            temp = temp->next;
            count++;
        }
        ptr->next = temp->next;
        free(temp);}

    }

};
class international{
    private:
struct node
{
   string name1, name2, number, idno, address,flight,time,artime;
   int pnr;
   long int date;
   node *next;
};
node *head = NULL , *newnode , *temp;
int len = 0 ;
public:
int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
void i_pnr()
    {
        global++;//increment variable
        pnri=global;
    }

void j_detaili()// function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "\1.London(1) \2.Dubai(2) \3.Abu Dhabi(3) \4.Singapore(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination"<<endl ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "\2.AirBLUE(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs.24000\t\tRefundable\n";
        }
        else if((srci==1 && desti==2) || (srci==2 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:10\t\tRs.25500\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:05\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:10\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs.64892\t\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs.18700\t\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs41259\t\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.AirBLue(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs81478\t\tRefundable\n";

        }
        else if(srci==3 && desti==5 || (srci==5 && desti==3))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.PIA(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.AirBLue(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.AirFalcon(3)\t18:00\t\t22:05\t\tRs81478\t\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }
     void select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "PIA" << endl;
            strcpy(f_i,"PIA");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");//copy to string
            strcpy(tojai,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nFlight selected:" << endl;
               cout << "AirBlue" << endl;
               strcpy(f_i,"AirBlue");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");//copy to string
                strcpy(tojai,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nFlight selected:" << endl;
            cout << "AirFalcon" << endl;
            strcpy(f_i,"AirFalcon");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
    void Ci_node ()
{
    newnode = new node;
    cout<<"Enter first name: ";
    cin>>newnode->name1;
    cout<<"Enter last name: ";
    cin>>newnode->name2;
    cout<<"Enter number: ";
    cin>>newnode->number;
    newnode->pnr=pnri;
    newnode->flight=f_i;
    newnode->date=doji;
    newnode->time=tojdi;
    newnode->artime=tojai;
    cout<<"Enter id card number without dashes :";
    cin>>newnode->idno;
    cout<<"Enter email address:";
    cin>>newnode->address;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next= newnode;
        temp = newnode;
    }
}
void saverecordi()
{
    if(head == NULL)
    {
        cout<<"Contact list is Empty "<<endl;
    }
    else
    {
        ofstream MyFile("International.txt");
        node *trav = head ;
        while (trav != NULL)
        {


            MyFile<<"\n\t\tFull Name : "<<trav->name1<<" "<<trav->name2<<endl;
            MyFile<<"\t\tPhone Number : "<<trav->number<<endl;
            MyFile<<"\t\tID Number : "<<trav->idno<<endl;
            MyFile<<"\t\tE Address : "<<trav->address<<endl;
            MyFile<<"\t\tPNR : "<<trav->pnr<<endl;
            MyFile<<"\t\tFlight : "<<trav->flight<<endl;
            MyFile<<"\t\tDate : "<<trav->date<<endl;
            MyFile<<"\t\tDeparture : "<<trav->time<<endl;
            MyFile<<"\t\tArrival   : "<<trav->artime<<endl;
            MyFile<<"\t\t\t\tFlight Confirmed "<<endl;
            MyFile<<"\t\t\t\t================="<<endl;
            trav= trav->next;
            len++;
        }
        MyFile.close();

    }
}

void displayi ()
{
    if(head == NULL)
    {
        cout<<"NO RECORD FOUND! "<<endl;
    }
    else
    {
        node *trav = head ;
        while (trav != NULL)
        {
            cout<<"\n\t\tFull Name : "<<trav->name1<<" "<<trav->name2<<endl;
            cout<<"\t\tPhone Number : "<<trav->number<<endl;
            cout<<"\t\tID Number : "<<trav->idno<<endl;
            cout<<"\t\tE Address : "<<trav->address<<endl;
            cout<<"\t\tPNR : "<<trav->pnr<<endl;
            cout<<"\t\tFlight : "<<trav->flight<<endl;
            cout<<"\t\tDate : "<<trav->date<<endl;
            cout<<"\t\tDeparture : "<<trav->time<<endl;
            cout<<"\t\tArrival   : "<<trav->artime<<endl;
            trav= trav->next;
    }
}}
void cancelticket(int n)
    {
        node* temp = head;
        node* ptr ;
        if(head==NULL)
        {
            cout<<"!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!!!";
        }
else if(head->next==NULL)
        {

            temp = head;
            head = NULL;
            free(temp);
        }
        else
        {int count=1;
        while(count<n)
        {
            ptr = temp;
            temp = temp->next;
            count++;
        }
        ptr->next = temp->next;
        free(temp);}

    }



};

    void aboutus()
    {   cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
        cout<<"\t       The height of skies was first touched by our airline in 1990. At high fly\n";
        cout<<"\t       we have a team that is passionate to make your travelling more comfortable\n";
        cout<<"\t       standard and hassle free. Our customers are our first priority and we provide\n";
        cout<<"\t       high of air travel at best affordable price.Choose us and make your journey\n";
        cout<<"\t       memorable.                                                                  \n";
        cout <<"\t  <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
    }
int main ()
{
     system("Color 3F");

     class passenger p1;
     class international i1;
     int ch,ch1,ch2,len;
     char input;
    developers();
    do//do while loop
    {

    cout << "\n\n \t\tWelcome To Flight Management System" << endl << endl;
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Display Records(3) \n\t\t\t\4.About US(4)\n\t\t\t\5. Exit(5)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)//witch case
      {
          case 1://condition

             {

              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)//inner switch case
              {
        case 1:
                p1.d_pnr();
                p1.j_detail();
                p1.select_flight();
                p1.C_node();
                p1.saverecord();
                len = 0;
                p1.display();
                break;
        case 2:
                i1.i_pnr();
                i1.j_detaili();
                i1.select_flighti();
                i1.Ci_node();
                i1.saverecordi();
                len=0;
                i1.displayi();
                break;
                default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();

        }
        break;
    }
        case 2:
            {int a;
              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch2;
              switch(ch2)//inner switch case
              {
        case 1:

            {cout<<"Enter provided pnr : ";cin>>a;
            p1.cancelticket(a);
            cout<<"Flight canceled!\nData Saved.."<<endl;
            p1.saverecord();
                break;}
        case 2:

            {cout<<"Enter provided pnr : ";cin>>a;
            i1.cancelticket(a);
            cout<<"Flight canceled!\nData Saved.."<<endl;
            i1.saverecordi();
                break;}
                default://wrong input
                    {cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();}

        }
        break;}
        case 3:
            {
                cout<<"Domestics"<<endl;
                p1.display();
                cout<<"\nInternationals"<<endl;
                i1.displayi();
                break;
            }
        case 4:
            {
                aboutus();
                break;
            }
        case 5:
            {
                return 0;
                break;
            }

}
cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
}
    while(input=='Y' || input=='y');
}
