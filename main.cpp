/*
Name: RAMYA NAYAK
Date: December 25, 2021
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Performs calculations based on ongoing offers and prints total cost
void keys(int numKeys) {
    int freeKeys;
    int totalKeys;
    double costOneKey = 3.0;
    const double taxRateCA = 0.0725;
    double keyCostBeforeTax;
    double keyCostAfterTax;
    
    if (numKeys % 2 == 0) {
        freeKeys = (numKeys / 2);
        totalKeys = numKeys + freeKeys;
        cout << "Great! Due to our 'Buy 2, Get 1 Free' offer, you will be receiving " << freeKeys << " additional key(s), for free! You will be receiving a total of " << totalKeys << " keys." << endl;
    }
    else {
        if (numKeys == 1) {
            totalKeys = numKeys;
            cout << "You will be receiving a total of " << totalKeys << " key." << endl;
        }
        else {
            freeKeys = ((numKeys - 1) / 2);
            totalKeys = numKeys + freeKeys;
            cout << "Great! Due to our 'Buy 2, Get 1 Free' offer, you will be receiving " << freeKeys << " additional key(s), for free! You will be receiving a total of " << totalKeys << " keys." << endl;
        }
    }
    keyCostBeforeTax = costOneKey * numKeys;
    keyCostAfterTax = keyCostBeforeTax + (keyCostBeforeTax * taxRateCA);
    
    cout << endl << "The total cost for your purchase is $" << fixed << setprecision(2) << keyCostAfterTax;
}


// ----------- MAIN METHOD -----------
int main(int argc, const char * argv[]) {
    
    int numKeys;
    
    cout << "Welcome! How many keys would you like to make today?" << endl;
    cin >> numKeys;
    cout << endl;
    
    keys(numKeys);
    
    cout << endl << endl << "--------------------" << endl << endl;
    
    return 0;
}
