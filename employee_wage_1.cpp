#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main(){
    int dailyWage;
    int wageForMonth;
    int wagePerHour = 20;   // rupees 20
    int workingDays = 20;
    int fullDay = 8;    // fullday for 8 hours
    int partTime = 4;    // partTime for 4 hours

    int hoursFullTime = workingDays * fullDay;
    int hoursPartTime = workingDays * partTime;
    cout << "Welcome to employee_wage_computation" << endl;
    std::srand(std::time(0));
    int random_number = std::rand() % 2;
    cout << "Generated a random number 0 or 1: "<< random_number << endl;

    if(random_number == 0){
        cout << "Employee is absent" << endl;
    }
    else if(random_number == 1){
        cout << "Employee is present" << endl;
    }

// random_number : 0 (fullDay), 1(partTime) 
    switch(random_number){
    case 0:
        dailyWage = wagePerHour * fullDay;
        cout << "FullDay daily wage :" << dailyWage <<  endl;
        wageForMonth = dailyWage * wagePerHour;
        cout << "FullDay wage for month: " << wageForMonth << endl;
        break;
    
    case 1:
        dailyWage = wagePerHour * partTime;
        cout << "partTime daily wage :" << dailyWage << endl;
        wageForMonth = dailyWage * wagePerHour;
        cout << "partTime wage for month:" << wageForMonth << endl;
        break;
    default:
        cout << "Invalid Wage" << endl;
}

    return 0;
}