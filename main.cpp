/* AirgeadBankingApp.cpp
 *
 *  Date: 09/30/2023
 *  Author: Jose Medina
 */

#include "investment_calculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int numberOfYears;

    initialInvestment = getInputValue("Initial Investment Amount: $");
    monthlyDeposit = getInputValue("Monthly Deposit: $");
    annualInterest = getInputValue("Annual Interest (%): ");
    numberOfYears = getInputValue("Number of Years: ");

    InvestmentCalculator calculator(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

    cout << "\nSample Display: Input Values\n";
    cout << "Initial Investment Amount: $" << fixed << setprecision(2) << initialInvestment << endl;
    cout << "Monthly Deposit: $" << fixed << setprecision(2) << monthlyDeposit << endl;
    cout << "Annual Interest: %" << fixed << setprecision(2) << annualInterest << endl;
    cout << "Number of Years: " << numberOfYears << endl;
    cout << "Press any key to continue..." << endl;

    cin.ignore();  // Wait for the user to press Enter to continue
    cin.get();

    try {
        calculator.displayFormattedTable("withoutMonthlyDeposit");
        calculator.displayFormattedTable("withMonthlyDeposit");
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
