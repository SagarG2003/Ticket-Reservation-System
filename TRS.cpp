#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class trs
{
private:
  string passengername, stn1, stn2;
  long int passengerno;
  int distance, age;

public:
  void getdata()
  {
    cout << "Enter the source station:" << endl;
    getline(cin, stn1);
    cout << "Enter the destination station:" << endl;
    getline(cin, stn2);
    cout << "Enter the distance in km of your journey:" << endl;
    cin >> distance;
  }

  void displaydata()
  {
    cout << "YOUR JOURNEY DETAILS ARE:" << endl;
    cout << "FROM: " << stn1 << endl;
    cout << "TO: " << stn2 << endl;
    cout << "DISTANCE: " << distance << " km" << endl;
    cout << endl;
    cout << "YOUR PASSENGER DETAILS ARE: " << endl;
    cout << "NAME:" << passengername << endl;
    cout << "AGE:" << age << endl;
    cout << "MOBILE NUMBER:" << passengerno << endl;
    cout << endl;
  }

  void getdetails()
  {
    cout << "ENTER THE PASSENGER DETAILS:" << endl;
    cout << "Name: ";
    cin >> passengername;
    cout << "Age: ";
    cin >> age;
    cout << "Mobile Number: ";
    cin >> passengerno;
  }

  void showdata()
  {
    cout << "THE FARE OF YOUR TICKET IS:" << endl;
    if ((distance > 0) && (distance <= 10))
    {
      cout << 2 * distance;
    }
    else if ((distance > 10) && (distance <= 50))
    {
      cout << 3 * distance;
    }
    else if ((distance > 50) && (distance <= 100))
    {
      cout << 5 * distance;
    }
    else
    {
      cout << "NA";
    }
    cout << endl;
    cout << "!!!!!PLEASE VERIFY YOUR TICKET BEFORE LEAVING THE PORTAL!!!!!";
    cout << endl;
  }
};
int main()
{
  trs t;
  int choice, otp, mobno, amt;
  long int cardno;
  system("cls");

  cout << "*************WELCOME TO DELHI METRO RAIL CORPORATION**************" << endl;
  cout << "----------------------------------------------------------------" << endl;

  cout << endl;
  t.getdata();
  cout << endl;
  t.getdetails();
  cout << endl;
  // t.displaydata(1300);
  t.showdata();
  system("cls");
  cout << endl;
  do
  {
    system("cls");
    cout << "**********DMRC PAYMENT PORTAL**********";
    cout << endl;
    cout << "SELECT THE PAYMENT MODE: " << endl;
    cout << "1. CREDIT/DEBIT CARD: " << endl;
    cout << "2. NET BANKING: " << endl;
    cout << "3. UPI/GPAY/PAYTM/PHONEPE: " << endl;
    cout << "4. CASH: " << endl;
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
      cout << "ENTER THE CARD DETAILS" << endl;
      cout << "CARD NUMBER:"
           << " ";
      cin >> cardno;
      cout << "ENTER THE OTP SENT TO REGISTERED MOBILE NUMBER:"
           << " ";
      cin >> otp;
      cout << endl;
      system("cls");
      cout << "-------YOUR PAYMENT IS SUCCESSFULL-------";
      cout << endl;
      t.displaydata();
      cout << endl;
      t.showdata();
      getch();
      break;

    case 2:
      cout << "SORRY NET BANKING IS NOT AVAILABLE!" << endl;
      getch();
      break;

    case 3:
      cout << "ENTER THE MOBILE NUMBER LINKED WITH THE WALLET:"
           << " ";
      cin >> mobno;
      cout << "ENTER THE OTP:"
           << " ";
      cin >> otp;
      cout << endl;
      system("cls");
      cout << "-------YOUR PAYMENT IS SUCCESSFULL-------";
      cout << endl;
      t.displaydata();
      cout << endl;
      t.showdata();
      getch();
      break;

    case 4:
      cout << "ENTER THE FARE IN CASH:";
      cin >> amt;
      t.displaydata();
      cout << endl;
      t.showdata();
      getch();
      break;

    default:
      break;
    }
  } while (1);
  
  return 0;
} 
