#include <iostream>

using namespace std;

int main() {
    double income, tax = 0;
    char category;
    int age;

    cout << "Enter your income: ";
    cin >> income;

  while (income < 0) {
        cout << "Invalid income. Please enter a non-negative value: ";
        cin >> income;
    }

    cout << "Enter your category ( type (M) for Male, type (F) for Female, type (65) for age 65 or above, type (PC) for Physically Challenged, type (3G) for 3rd Gender, type (FF) for Freedom Fighter): ";
    cin >> category;


    while (category != 'M' && category != 'F' && category != '65' && category != 'PC' && category != '3G' && category != 'FF') {
        cout << "Invalid category. Please enter a valid category: ";
        cin >> category;
    }

    if (category == 'F' || category == '65') {
        cout << "Enter your age: ";
        cin >> age;
    }

    switch (category) {
        case 'M':
       if (income <= 350000) {
       tax = 0;
   } else if (income <= 450000) {
       tax = 0.05 * (income - 350000);
   } else if (income <= 750000) {
       tax = 5000 + 0.1 * (income - 450000);
   } else if (income <= 1150000) {
       tax = 20000 + 0.15 * (income - 750000);
   } else if (income <= 1650000) {
       tax = 47500 + 0.2 * (income - 1150000);
   } else {
       tax = 97500 + 0.25 * (income - 1650000);
   }

        break;
    case 'F':
   if (income <= 400000) {
    tax = 0;
    } else if (income <= 500000) {
     tax = 0.05 * (income - 400000);
     } else if (income <= 800000) {
  tax = 5000 + 0.1 * (income - 500000);
    } else if (income <= 1200000) {
  tax = 20000 + 0.15 * (income - 800000);
   } else if (income <= 1700000) {
  tax = 47500 + 0.2 * (income - 1200000);
    } else {
  tax = 97500 + 0.25 * (income - 1700000);
     }

        break;
    case '65':
         if (income <= 400000) {
  tax = 0;
   } else if (income <= 500000) {
  tax = 0.05 * (income - 400000);
   } else if (income <= 800000) {
  tax = 5000 + 0.1 * (income - 500000);
  } else if (income <= 1200000) {
  tax = 20000 + 0.15 * (income - 800000);
   } else if (income <= 1700000) {
  tax = 47500 + 0.2 * (income - 1200000);
   } else {
  tax = 97500 + 0.25 * (income - 1700000);
     }


        break;
    case 'PC':
      if (income <= 475000) {
       tax = 0;
    } else if (income <= 575000) {
  tax = 0.05 * (income - 475000);
   } else if (income <= 875000) {
  tax = 5000 + 0.1 * (income - 575000);
    } else if (income <= 1275000) {
  tax = 20000 + 0.15 * (income - 875000);
    } else if (income <= 1775000) {
  tax = 47500 + 0.2 * (income - 1275000);
    } else {
  tax = 97500 + 0.25 * (income - 1775000);
   }


        break;
    case '3G':
       if (income <= 475000) {
       tax = 0;
    } else if (income <= 575000) {
  tax = 0.05 * (income - 475000);
   } else if (income <= 875000) {
  tax = 5000 + 0.1 * (income - 575000);
    } else if (income <= 1275000) {
  tax = 20000 + 0.15 * (income - 875000);
    } else if (income <= 1775000) {
  tax = 47500 + 0.2 * (income - 1275000);
    } else {
  tax = 97500 + 0.25 * (income - 1775000);
   }

        break;
    case 'FF':
      if (income <= 500000) {
  tax = 0;
   } else if (income <= 600000) {
  tax = 0.05 * (income - 500000);
    } else if (income <= 900000) {
  tax = 5000 + 0.1 * (income - 600000);
   } else if (income <= 1300000) {
  tax = 20000 + 0.15 * (income - 900000);
    } else if (income <= 1800000) {
  tax = 47500 + 0.2 * (income - 1300000);
    } else {
  tax = 97500 + 0.25 * (income - 1800000);
    }
    break;
    default:
        cout << "Invalid category. Please try again." << endl;

    }

    cout << "Your income tax is: " << tax << endl;

    return 0;
}

