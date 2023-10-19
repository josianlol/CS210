/* AirgeadBankingApp.cpp
 *
 *  Date: 09/30/2023
 *  Author: Jose Medina
 */

#ifndef INVESTMENT_CALCULATOR_H_
#define INVESTMENT_CALCULATOR_H_

#include <string>

class InvestmentCalculator {
public:
    InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterest, int numberOfYears);

    void displayReport();
    void calculateWithoutMonthlyDeposit();
    void calculateWithMonthlyDeposit();
    void displayFormattedTable(const std::string& method);

private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;
};

double getInputValue(const std::string& prompt);

#endif // INVESTMENT_CALCULATOR_H_
