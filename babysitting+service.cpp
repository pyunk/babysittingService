#include <iostream>
using namespace std;

int main() {
  
  char status, packageCode;
  int numHours;
  double total_price;

  cout << "Press Welcome to Bloom & Care Babysitting Service " << endl;
  cout << "Press M/N (M for member, N for non-member) " << endl;
  cin >> status;
  cout << endl;
 
  if (status == 'M' || status == 'm'){ 
    cout << " CODE |   TYPE   | PRICE/HOUR " << endl;
    cout << " G    |  Galaxy  | RM 70.00      " << endl;
    cout << " S    |   Star   | RM 45.00      " << endl;
    cout << " N    |  Normal  | RM 30.00      " << endl;
    cout << endl;
    cout << "Enter the Package Code (G/S/N): ";
    cin >> packageCode;
    cout << "How many Hours: ";
    cin >> numHours;
    cout << endl;

    switch (packageCode)
    {
    case 'G':
      total_price = numHours * 70.00 * 0.82;
      cout << "Total Price: RM " << total_price << endl;
      break;
    case 'S':
      total_price = numHours * 45.00 * 0.85;
      cout << "Total Price: RM " << total_price << endl;
      break;
    case 'N':
      total_price = numHours * 30.00 * 0.90;
      cout << "Total Price: RM " << total_price << endl;
      break;
    default:
      cout << "Invalid type of package or package code" << endl;
      break;
    }

  }else if (status == 'N' || status == 'n'){
    cout << " CODE |   TYPE   | PRICE/HOUR " << endl;
    cout << " G    |  Galaxy  | RM 78.00      " << endl;
    cout << " S    |   Star   | RM 55.00      " << endl;
    cout << " N    |  Normal  | RM 35.00      " << endl;
    cout << endl;
    cout << "Enter the Package Code (G/S/N): ";
    cin >> packageCode;
    cout << "How many Hours: ";
    cin >> numHours;
    cout << endl;

    switch (packageCode)
    {
    case 'G':
      total_price = numHours * 78.00 * 0.82;
      cout << "Total Price: RM " << total_price << endl;
      break;
    case 'S':
      total_price = numHours * 55.00 * 0.85;
      cout << "Total Price: RM " << total_price << endl;
      break;
    case 'N':
      total_price = numHours * 35.00 * 0.90;
      cout << "Total Price: RM " << total_price << endl;
      break;
    default:
      cout << "Invalid type of package or package code" << endl;
      break;
    }

  }
  else {
    cout << "Invalid status" << endl;
  }
  return 0;
}