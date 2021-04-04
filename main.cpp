//
//  main.cpp
//  real_estate_challenge
//
//  Created by Mathew Rasband on 4/4/21.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    
    string lName                 = " ";
    double listingPrice          = 0;
    double sellersCost           = 0;
    double agentsComission       = 0;
    const double commission      = 0.06;
    const double listingAgent    = 0.015;
    
    cout << "Enter homeowner's last name: " << endl;
    cin >> lName;
    cout << "Enter the sales price for the house: (no commas or decimal points) " << endl;
    cin >> listingPrice;
    
    sellersCost = listingPrice * commission;
    agentsComission = listingPrice * listingAgent;
    
    cout << left << setw(15) << "Home Owner" << left << setw(15) <<"Price of Home" << left << setw(15) <<"Seller's Cost" << left << setw(15) <<"Agent's Comission" << endl;
    cout << setw(15) << lName <<  setw(15) << listingPrice << setw(15) << sellersCost << setw(15) << agentsComission << endl;
    
    return 0;
}
