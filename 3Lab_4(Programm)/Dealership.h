#pragma once

#include <string>
#include <iostream>
#include "Employee.h"
#include "Car.h"

#define MAX_EMPLOYEES 100
#define MAX_CARS 100

extern int numEmployees, numCars, numDeals;


// ����� ����������
class Dealership {
    Employee employees[MAX_EMPLOYEES]; // ������ �����������
    Car cars[MAX_CARS];               // ������ ��������� �����������

protected:
    string dealership_name;           // �������� ����������
    string address;                   // ����� ����������

public:
    Dealership() : dealership_name(""), address("") {}

    // ���������� � �����������
    Dealership(string name, string address, Car* carArray, Employee* employeeArray)
        : dealership_name(name), address(address) {
        // ������������� �������� � ������������
        for (int i = 0; i < numCars; ++i) {
            cars[i] = carArray[i];
        }

        for (int i = 0; i < numEmployees; ++i) {
            employees[i] = employeeArray[i];
        }
    }

    ~Dealership() {}

    const string getDealership_name(); // ����� ��������� �������� ����������
    const string getAddres();
    Employee* getEmployees();
    Car* getCars();

    void setDealership_name(string dealership_name);
    void setAddres(string addres);
    void setEmployees(Employee* employees);
    void setCars(Car* cars);
    
    virtual void displayInfo(); //���������������� ����������� �������

    virtual void outAllInfoDealership();
    void outEmployeeDealership();
    void outCarDealership();
    void outEmployeesChoice();
    void outCarsChoice();
};

