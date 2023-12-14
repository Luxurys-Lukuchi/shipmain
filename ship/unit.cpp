#include "unit.h"

// ������� ����� Ship
Ship::Ship(string n, double s, double c) : name(n), speed(s), capacity(c) {}

string Ship::getName() const { //����� �����
    return name;
}

void Ship::setName(string n) { // ����� �����
    name = n;
}

double Ship::getSpeed() const { //����� ������������ ��������
    return speed;
}

void Ship::setSpeed(double s) { //����� ������������ ��������
    speed = s;
}

double Ship::getCapacity() const { // ����� ����������������
    return capacity;
}

void Ship::setCapacity(double c) { //����� ����������������
    capacity = c;
}
//����� ����������
void Ship::printInfo() const {
    cout << "Name: " << name << endl;
    cout << "Speed: " << speed << " knots" << endl;
    cout << "Capacity: " << capacity << " tons" << endl;
}

// ����������� ����� CargoShip, ��������� �� ������ Ship
CargoShip::CargoShip(string n, double s, double c, double g) : Ship(n, s, c), cargo(g) {}

double CargoShip::getCargo() const {// ����� ����������
    return cargo;
}

void CargoShip::setCargo(double g) {// ����� ����������
    cargo = g;
}
//����� ����������
void CargoShip::printInfo() const {
    Ship::printInfo();   // ����� ������ �������� ������
    cout << "Cargo: " << cargo << " tons" << endl;
}

// ����������� ����� WarShip, ��������� �� ������ Ship
WarShip::WarShip(string n, double s, double c, int w) : Ship(n, s, c), weapons(w) {}

int WarShip::getWeapons() const {//����� ������
    return weapons;
}

void WarShip::setWeapons(int w) {//����� ������
    weapons = w;
}
//����� ����������
void WarShip::printInfo() const {
    Ship::printInfo();   // ����� ������ �������� ������
    cout << "Weapons: " << weapons << endl;
}

// ����������� ����� CruiseShip, ��������� �� ������ Ship
CruiseShip::CruiseShip(string n, double s, double c, int p) : Ship(n, s, c), passengers(p) {}

int CruiseShip::getPassengers() const {
    return passengers;// ����� ���������
}

void CruiseShip::setPassengers(int p) {// ����� ���������
    passengers = p;
}

void CruiseShip::printInfo() const {
    Ship::printInfo();   // ����� ������ �������� ������
    cout << "Passengers: " << passengers << endl;
}

// ����������� ����� Corvette, ��������� �� ������ WarShip
Corvette::Corvette(string n, double s, double c, int w, int t) : WarShip(n, s, c, w), torpedoes(t) {}

int Corvette::getTorpedoes() const {//����� ��������
    return torpedoes;
}

void Corvette::setTorpedoes(int t) {//����� ��������
    torpedoes = t;
}
//����� ����������
void Corvette::printInfo() const {
    WarShip::printInfo();   // ����� ������ �������� ������
    cout << "Torpedoes: " << torpedoes << endl;
}

// ����������� ����� AircraftCarrier, ��������� �� ������ WarShip
AircraftCarrier::AircraftCarrier(string n, double s, double c, int w, int p) : WarShip(n, s, c, w), planes(p) {}

int AircraftCarrier::getPlanes() const {// ����� ���������
    return planes;
}

void AircraftCarrier::setPlanes(int p) {// ����� ���������
    planes = p;
}
//����� ����������
void AircraftCarrier::printInfo() const {
    WarShip::printInfo();   // ����� ������ �������� ������
    cout << "Planes: " << planes << endl;
}

// ����������� ����� Destroyer, ��������� �� ������ WarShip
Destroyer::Destroyer(string n, double s, double c, int w, int m) : WarShip(n, s, c, w), missiles(m) {}

int Destroyer::getMissiles() const {//����� �����
    return missiles;
}

void Destroyer::setMissiles(int m) {// ����� �����
    missiles = m;
}
//����� ����������
void Destroyer::printInfo() const {
    WarShip::printInfo();   // ����� ������ �������� ������
    cout << "Missiles: " << missiles << endl;
}


