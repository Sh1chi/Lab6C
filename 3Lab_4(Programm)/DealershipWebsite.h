#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Dealership.h"
#include <random> // ��� ������������� ����� ����������� ������� ��������� ��������� �����


class DealershipWebsite : public Dealership {
    string contact_email;         // ���������� ����������� �����
    string contact_phone_number;  // ���������� ����� ��������
    double rating;                     // ������� ����������
    vector<string> reviews;  // ������ ��� �������� ������� ��������
    string website_address;       // ����� ����� ����������
    int online_users;                  // ���������� ������������� ������

public:
    DealershipWebsite()
        : contact_email(""), contact_phone_number(""), rating(0.0), website_address(""), online_users(0) {}

    // ����������� � �����������
    DealershipWebsite(string name, string address, Car* carArray, Employee* employeeArray,
        string email, string phone_number,string website_address)
        : Dealership(name, address, carArray,  employeeArray),
        contact_email(email), contact_phone_number(phone_number), website_address(website_address) {}

    // ����������
    ~DealershipWebsite() {}

    // �������
    void setContactEmail(string email);
    void setContactPhoneNumber(string phone_number);
    void setRating(double rating);
    void addReview(string& review);
    //void addReview(string review);
    void setWebsiteAddress(string address);
    void setOnlineUsers();

    // �������
    string getContactEmail();
    string getContactPhoneNumber();
    double getRating();
    vector<string> getReviews();
    string getWebsiteAddress();
    int getOnlineUsers();

    //���������������� ����������� �������
    void displayInfo() override;

    DealershipWebsite& operator=(const Dealership& other);

    int generateRandomUsers();
    // ����� ��� ������ �������������� ����������
    void outAllInfoDealership() override;

    void outAllInfoDealershipWithOutputOperator();

    friend ostream& operator<<(ostream& os, DealershipWebsite& dealershipWebsite);
};
