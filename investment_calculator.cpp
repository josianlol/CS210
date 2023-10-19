/* AirgeadBankingApp.cpp
 *
 *  Date: 09/30/2023
 *  Author: Jose Medina
 */

#include "investment_calculator.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <limits>

using namespace std;

InvestmentCalculator::InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterest, int numberOfYears)
    : initialInvestment(initialInvestment), monthlyDeposit(monthlyDeposit), annualInterest(annualInterest), numberOfYears(numberOfYears) {
}

void InvestmentCalculator::displayReport() {
    cout << setw(5) << "Year" << setw(20) << "Year End Balance" << endl;

    double balance = initialInvestment;

    for (int year = 1; year <= numberOfYears; ++year) {
        double monthlyInterestRate = annualInterest / 100 / 12;
        double interest = (balance + monthlyDeposit) * monthlyInterestRate;
        balance += monthlyDeposit + interest;
        cout << setw(5) << year << setw(20) << "$" << fixed << setprecision(2) << balance << endl;
    }
}

void InvestmentCalculator::calculateWithoutMonthlyDeposit() {
    cout << setw(5) << "Year" << setw(20) << "Year End Balance" << endl;

    double balance = initialInvestment;

    for (int year = 1; year <= numberOfYears; ++year) {
        double monthlyInterestRate = annualInterest / 100 / 12;
        double interest = balance * monthlyInterestRate;
        balance += interest;
        cout << setw(5) << year << setw(20) << "$" << fixed << setprecision(2) << balance << endl;
    }
}

void InvestmentCalculator::calculateWithMonthlyDeposit() {
    cout << setw(5) << "Year" << setw(20) << "Year End Balance" << endl;

    double balance = initialInvestment;

    for (int year = 1; year <= numberOfYears; ++year) {
        double monthlyInterestRate = annualInterest / 100 / 12;
        double interest = balance * monthlyInterestRate;
        balance += monthlyDeposit + interest;
        cout << setw(5) << year << setw(20) << "$" << fixed << setprecision(2) << balance << endl;
    }
}

void InvestmentCalculator::displayFormattedTable(const std::string& method) {
    cout << "\nSample Output: Balance and Interest ";
    if (method == "withoutMonthlyDeposit") {
        cout << "Without Additional Monthly Deposits\n";
        calculateWithoutMonthlyDeposit();
    } else if (method == "withMonthlyDeposit") {
        cout << "With Additional Monthly Deposits\n";
        calculateWithMonthlyDeposit();
    } else {
        throw invalid_argument("Invalid calculation method.");
    }
}

double getInputValue(const std::string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cout << "Invalid input. Please enter a valid numeric value." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}
