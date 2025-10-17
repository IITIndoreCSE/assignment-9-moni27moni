#include<iostream>
#include<string>
using namespace std;

struct SalesRecord{
    string month;
    float amount;
};
int main()
{
    SalesRecord salesdata[12];
     string maxMonth, minMonth;
     float maxSales=-1.0f , minSales=9999999.0f;
        for(int i=0;i<12;i++)
        {
            cout<<"Enter month name: "<<endl;
            cin>>salesdata[i].month;
            cout<<"Enter sales amount in the month "<<salesdata[i].month<<endl;
            cin>>salesdata[i].amount;
    }
    for(int i = 0; i < 12; i++) {
        if (salesdata[i].amount > maxSales) {
            maxSales = salesdata[i].amount;
            maxMonth = salesdata[i].month;
        }
        if (salesdata[i].amount < minSales) {
            minSales = salesdata[i].amount;
            minMonth = salesdata[i].month;
        }
    }
    cout<<"Month with maximum sales:"<<maxMonth<<"with amount"<<maxSales<<endl;
    cout<<"Month with minimum sales:"<<minMonth<<"with amount"<<minSales<<endl;
}
