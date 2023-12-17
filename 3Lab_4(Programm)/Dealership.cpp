#include "Dealership.h"
using namespace std;


// ���������� ������� ������ Dealership

const string Dealership::getDealership_name() {
    return dealership_name;
}

const string Dealership::getAddres(){
    return address;
}

Employee* Dealership::getEmployees() {
    return employees;
}

Car* Dealership::getCars() {
    return cars;
}

void Dealership::setDealership_name(string dealership_name){
    this->dealership_name = dealership_name;
}

void Dealership::setAddres(string addres){
    this->address = address;
}

void Dealership::setEmployees(Employee* employees) {
    for (int i = 0; i < numEmployees; ++i) {
        this->employees[i] = employees[i];
    }
}

void Dealership::setCars(Car* cars) {
    for (int i = 0; i < numCars; ++i) {
        this->cars[i] = cars[i];
    }
}

//���������������� ����������� �������
void Dealership::displayInfo() {
    cout << "Displaying Dealership Info" << endl;
}

void Dealership::outAllInfoDealership() {
    cout << endl;

    if (dealership_name.empty() || address.empty()) {
        throw exception("���������� �� ���������� ����������, ��� ��� ����������� �������� ��� �����");
    }

    system("cls");
    cout << "    __-- ��������� " << dealership_name << " --__" << endl;
    cout << "�� ������: " << address << endl;
    outEmployeeDealership();
    outCarDealership();
}

void Dealership::outEmployeeDealership() {
    if (numEmployees == 0) {
        cout << "    __-- ���������� ���������� --__" << endl;
        throw exception("� ��������� ������ ����������� ����������.");
    }
    cout << "    __-- ���������� ���������� " << dealership_name << " --__" << endl;
    for(int i = 0; i < numEmployees; ++i) {
        cout << endl;
        cout << "��������� #" << i + 1 << ":" << endl;
        employees[i].outputEmployee();
    }
    cout << endl;
}

void Dealership::outCarDealership() {
    if (numCars == 0) {
        cout << "    __-- ���������� ���������� --__" << endl;
        throw exception("� ��������� ������ ����������� ����������.");
    }

    cout << "    __-- ���������� ���������� " << dealership_name << " --__" << endl;
    for (int i = 0; i < numCars; ++i) {
        cout << endl;
        cout << "���������� #" << i + 1 << ":" << endl;
        cars[i].outputCar();
    }
    cout << endl;
}

void Dealership::outEmployeesChoice() {
    if (numEmployees == 0) {
        throw exception("������ ��������� ����");
    }
    std::cout << "������ ���������:" << std::endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << (i + 1) << ") " << employees[i].getFirstName() << " " << employees[i].getLastName() << std::endl;
    }
}

void Dealership::outCarsChoice() {
    if (numEmployees == 0) {
        throw exception("������ ����������� ����");
    }
    std::cout << "���������� � �������:" << std::endl;
    for (int i = 0; i < numCars; i++) {
        cout << (i + 1) << ") " << cars[i].getBrand_model() << std::endl;
    }
}