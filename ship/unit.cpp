#include "unit.h"

// Ѕазовый класс Ship
Ship::Ship(string n, double s, double c) : name(n), speed(s), capacity(c) {}

string Ship::getName() const { //гетер имени
    return name;
}

void Ship::setName(string n) { // сетер имени
    name = n;
}

double Ship::getSpeed() const { //гетер максимальной скорости
    return speed;
}

void Ship::setSpeed(double s) { //сетер максимальной скорости
    speed = s;
}

double Ship::getCapacity() const { // гетер грузоподьемность
    return capacity;
}

void Ship::setCapacity(double c) { //сетер грузоподьемности
    capacity = c;
}
//вывод информацый
void Ship::printInfo() const {
    cout << "Name: " << name << endl;
    cout << "Speed: " << speed << " knots" << endl;
    cout << "Capacity: " << capacity << " tons" << endl;
}

// ѕроизводный класс CargoShip, наследует от класса Ship
CargoShip::CargoShip(string n, double s, double c, double g) : Ship(n, s, c), cargo(g) {}

double CargoShip::getCargo() const {// гетер контенеров
    return cargo;
}

void CargoShip::setCargo(double g) {// сетер контенеров
    cargo = g;
}
//вывод информацый
void CargoShip::printInfo() const {
    Ship::printInfo();   // вызов метода базового класса
    cout << "Cargo: " << cargo << " tons" << endl;
}

// ѕроизводный класс WarShip, наследует от класса Ship
WarShip::WarShip(string n, double s, double c, int w) : Ship(n, s, c), weapons(w) {}

int WarShip::getWeapons() const {//гетер оружи€
    return weapons;
}

void WarShip::setWeapons(int w) {//сетер оружи€
    weapons = w;
}
//вывод информацый
void WarShip::printInfo() const {
    Ship::printInfo();   // вызов метода базового класса
    cout << "Weapons: " << weapons << endl;
}

// ѕроизводный класс CruiseShip, наследует от класса Ship
CruiseShip::CruiseShip(string n, double s, double c, int p) : Ship(n, s, c), passengers(p) {}

int CruiseShip::getPassengers() const {
    return passengers;// гетер пасажиров
}

void CruiseShip::setPassengers(int p) {// сетер пасажиров
    passengers = p;
}

void CruiseShip::printInfo() const {
    Ship::printInfo();   // вызов метода базового класса
    cout << "Passengers: " << passengers << endl;
}

// ѕроизводный класс Corvette, наследует от класса WarShip
Corvette::Corvette(string n, double s, double c, int w, int t) : WarShip(n, s, c, w), torpedoes(t) {}

int Corvette::getTorpedoes() const {//гетер торпедов
    return torpedoes;
}

void Corvette::setTorpedoes(int t) {//сетер торпедов
    torpedoes = t;
}
//вывод информацый
void Corvette::printInfo() const {
    WarShip::printInfo();   // вызов метода базового класса
    cout << "Torpedoes: " << torpedoes << endl;
}

// ѕроизводный класс AircraftCarrier, наследует от класса WarShip
AircraftCarrier::AircraftCarrier(string n, double s, double c, int w, int p) : WarShip(n, s, c, w), planes(p) {}

int AircraftCarrier::getPlanes() const {// гетер самолетов
    return planes;
}

void AircraftCarrier::setPlanes(int p) {// сетер самолетов
    planes = p;
}
//вывод информацый
void AircraftCarrier::printInfo() const {
    WarShip::printInfo();   // вызов метода базового класса
    cout << "Planes: " << planes << endl;
}

// ѕроизводный класс Destroyer, наследует от класса WarShip
Destroyer::Destroyer(string n, double s, double c, int w, int m) : WarShip(n, s, c, w), missiles(m) {}

int Destroyer::getMissiles() const {//гетер ракет
    return missiles;
}

void Destroyer::setMissiles(int m) {// сетер ракет
    missiles = m;
}
//вывод информацый
void Destroyer::printInfo() const {
    WarShip::printInfo();   // вызов метода базового класса
    cout << "Missiles: " << missiles << endl;
}


