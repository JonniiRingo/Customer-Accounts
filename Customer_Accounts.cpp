#include <iostream>
#include <string>
#include <vector>
using namespace std;



// Struct 
struct customer 
{
    string customer_name, customer_address, city, state, zip_code, telephone, account_balance, payment_date;
};    // have to put a semicolon after the closing struct curly brace

// Function prototypes
void mainmenu();
void getdata(customer&);
void showdata(customer&);
void exitfunction();




int main()

{

    // Data type, and intance 

    const int SIZE = 5;
    customer cus[SIZE]; 
    int decision, choice, customer_number; 
    choice = decision;

    int k = 100;
    
    while (k >= 100)
    {
    mainmenu();
    cin >> choice; 

    if (choice == 1)
    {
        for (int i = 0; i < SIZE; i++)
        {
            getdata(cus[i]);
            cout << "You have entered information for customer " << i + 1 << endl;
        }
    }
    
    if (choice == 2)
    {
       // int customer_number, *ptr = nullptr;
       // &customer_number = ptr;
        int customer_number;
        cout << "Customer number: ";
        cin >> customer_number;
        getdata(cus[customer_number]);
        choice += 20;
        mainmenu();
    }

    
    
    if (choice == 3)
    {
        for (int k = 0; k < SIZE; k++)
        {
            showdata(cus[k]);
           // mainmenu();
        }
        
    }

    if (choice == 4 )
    {
    
        break;
    }
    k++;
    }
    return 0;
}

// Function Definitions

void mainmenu()
{
    cout << "Main menu \n";
    cout << "1. Enter new account information " << endl;
    cout << "2. Change account information " << endl;
    cout << "3. Display all account information " << endl;
    cout << "4. Exit the program " << endl;
}

void getdata(customer & s)
{
    cout << "Customer Name: ";
    cin.ignore();
    getline(cin, s.customer_name);
    cout << "Customer address: ";
    getline(cin, s.customer_address);

    cout << "City: ";
    cin >> s.city;
    cin.ignore();
    cout << "State: ";
    cin >> s.state;
    cin.ignore();
    cout << "Zip code: ";
    cin >> s.zip_code;
    cin.ignore();
    cout << "Telephone: ";
    cin >> s.telephone;
    cin.ignore();
    cout << "Account balance: ";
    cin >> s.account_balance;
    cout << "Date of last payment: ";
    cin >> s.payment_date; 
}



void showdata(customer & s)
{    
    cout << s.customer_name << endl;
    cout << s.customer_address << endl;
    cout << s.city << endl;
    cout << s.state << endl;
    cout << s.zip_code << endl;
    cout << s.telephone << endl;
    cout << s.account_balance << endl;
    cout << s.payment_date << endl;
}

void exitfunction()
{
    int k;
    k += -10;
    
}


