#include "DealershipWebsite.h"
using namespace std;

void DealershipWebsite::setContactEmail(string email) {
    contact_email = email;
}

void DealershipWebsite::setContactPhoneNumber(string phone_number) {
    contact_phone_number = phone_number;
}

void DealershipWebsite::setRating(double rating) {
    this->rating = rating;
}

void DealershipWebsite::addReview(string& review) {
    reviews.push_back(review);
}

void DealershipWebsite::setWebsiteAddress(string address) {
    website_address = address;
}

void DealershipWebsite::setOnlineUsers() {
    online_users = generateRandomUsers();
}

string DealershipWebsite::getContactEmail() {
    return contact_email;
}

string DealershipWebsite::getContactPhoneNumber() {
    return contact_phone_number;
}

double DealershipWebsite::getRating() {
    return rating;
}

vector<string> DealershipWebsite::getReviews() {
    return reviews;
}

string DealershipWebsite::getWebsiteAddress() {
    return website_address;
}

int DealershipWebsite::getOnlineUsers() {
    return online_users;
}

//���������������� ����������� �������
void DealershipWebsite::displayInfo() {
    cout << "Displaying Dealership Website Info" << endl;
}

// ���������� ��������� ������������
DealershipWebsite& DealershipWebsite::operator=(const Dealership& other) {
    if (this != &other) {
        // �������� ����� �������� ������
        static_cast<Dealership&>(*this) = other;
    }
    return *this;
}

// ����� ��� ��������� ���������� ����� ������������� ������
int DealershipWebsite::generateRandomUsers() {
    // ���������� ����������� ������������� ��� ��������� ��������� �����
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(0, 1000);

    // ��������� ���������� ����� �� 0 �� 1000
    int randomNumber = distribution(gen);
    return randomNumber;
}

void DealershipWebsite::outAllInfoDealership() {
    cout << "����� ����� ����������: " << website_address << endl;
    setOnlineUsers();
    cout << "������: " << getOnlineUsers() << endl;
    cout << "    __-- ��������� " << dealership_name << " --__" << endl;
    cout << "�� ������: " << address << endl;
    cout << "���������� ����������� �����: " << contact_email << endl;
    cout << "���������� ����� ��������: " << contact_phone_number << endl;
    cout << "������� ����������: " << rating << endl;

    cout << "������ ��������:" << endl;
    for (const auto& review : reviews) {
        cout << " - " << review << endl;
    }
}

void DealershipWebsite::outAllInfoDealershipWithOutputOperator() {
    cout << *this; // ����� ���������� � ��������� ������ � ����� ���������� ������
}

ostream& operator<<(ostream& os, DealershipWebsite& dealershipWebsite) {
    dealershipWebsite.setOnlineUsers(); // ��������� ���������� ���������� �������������

    os << "����� ����� ����������: " << dealershipWebsite.getWebsiteAddress() << endl;
    os << "������: " << dealershipWebsite.getOnlineUsers() << endl;
    os << "    __-- ��������� " << dealershipWebsite.getDealership_name() << " --__" << endl;
    os << "�� ������: " << dealershipWebsite.getAddres() << endl;
    os << "���������� ����������� �����: " << dealershipWebsite.getContactEmail() << endl;
    os << "���������� ����� ��������: " << dealershipWebsite.getContactPhoneNumber() << endl;
    os << "������� ����������: " << dealershipWebsite.getRating() << endl;

    os << "������ ��������:" << endl;
    for (const auto& review : dealershipWebsite.getReviews()) {
        os << " - " << review << endl;
    }

    return os;
}