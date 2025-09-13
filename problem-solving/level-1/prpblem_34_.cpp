#include <iostream>
using namespace std;

int ReadTotalSales() {
    int TotalSales;
    cout << "Enter your total sales: ";
    cin >> TotalSales;
    return TotalSales;
}

float GetCommissionPercentage(float TotalSales) {
    if (TotalSales >= 1000000) {
        return 1.0; // 1%
    } 
    else if (TotalSales >= 500000 && TotalSales < 1000000) {
        return 2.0; // 2%
    } 
    else if (TotalSales >= 100000 && TotalSales < 500000) {
        return 3.0; // 3%
    } 
    else if (TotalSales >= 50000 && TotalSales < 100000) {
        return 5.0; // 5%
    }
    else {
        return 0.0; // No commission
    }
}

float CalculateTotalCommission(float TotalSales) {
    
    return GetCommissionPercentage(TotalSales) * TotalSales / 100.0;
}

int main() {
    
    float TotalSales = ReadTotalSales();
    cout << "Commission percentage: " << GetCommissionPercentage(TotalSales) << "%" << endl;
    cout << "Total Commission: " << CalculateTotalCommission(TotalSales) << endl;

    return 0;
}