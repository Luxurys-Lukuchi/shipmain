#pragma once
#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

using namespace std;

// ������� ����� Ship
class Ship {
protected:
    string name;   // ��� �������
    double speed;   // �������� ����������� � �����
    double capacity;   // ���������������� � ������
public:
    // ����������� � �����������
    Ship(string n, double s, double c);

    // ������� � ������� ��� �����
    string getName() const;
    void setName(string n);
    double getSpeed() const;
    void setSpeed(double s); // �������� ������������  � �����
    double getCapacity() const;
    void setCapacity(double c);

    // todo �������� ����������� ����� ��� ������ ���������� � �������
    virtual void printInfo() const;
};

// ����������� ����� CargoShip, ��������� �� ������ Ship
class CargoShip : public Ship {
protected:
    double cargo;   // ������� ���� � ������
public:
    // ����������� � �����������
    CargoShip(string n, double s, double c, double g);

    // ������ � ������ ��� ���� cargo
    double getCargo() const;
    void setCargo(double g);

    // ���������������� ����� ��� ������ ���������� � �������� �������
    void printInfo() const override;
};

// ����������� ����� WarShip, ��������� �� ������ Ship
class WarShip : public Ship {
protected:
    int weapons;   // ���������� ������ �� �����
public:
    // ����������� � �����������
    WarShip(string n, double s, double c, int w);

    // ������ � ������ ��� ���� weapons
    int getWeapons() const;
    void setWeapons(int w);

    // ���������������� ����� ��� ������ ���������� � ������� �������
    void printInfo() const override;
};

// ����������� ����� CruiseShip, ��������� �� ������ Ship
class CruiseShip : public Ship {
protected:
    int passengers;   // ���������� ���������� �� �����
public:
    // ����������� � �����������
    CruiseShip(string n, double s, double c, int p);

    // ������ � ������ ��� ���� passengers
    int getPassengers() const;
    void setPassengers(int p);

    //todo �������� ���������������� ����� ��� ������ ���������� � �������� �������
    void printInfo() const override;
};

// ����������� ����� Corvette, ��������� �� ������ WarShip
class Corvette : public WarShip {
protected:
    int torpedoes;   // ���������� ������ �� �����
public:
    // ����������� � �����������
    Corvette(string n, double s, double c, int w, int t);

    // ������ � ������ ��� ���� torpedoes
    int getTorpedoes() const;
    void setTorpedoes(int t);

    // ���������������� ����� ��� ������ ���������� � Corvette
    void printInfo() const override;
};

// ����������� ����� AircraftCarrier, ��������� �� ������ WarShip
class AircraftCarrier : public WarShip {
protected:
    int planes;   // ���������� ��������� �� �����
public:
    // ����������� � �����������
    AircraftCarrier(string n, double s, double c, int w, int p);

    // ������ � ������ ��� ���� planes
    int getPlanes() const;
    void setPlanes(int p);

    // ���������������� ����� ��� ������ ���������� �� ���������
    void printInfo() const override;
};

// ����������� ����� Destroyer, ��������� �� ������ WarShip
class Destroyer : public WarShip {
protected:
    int missiles;   // ���������� ����� �� �����
public:
    // ����������� � �����������
    Destroyer(string n, double s, double c, int w, int m);

    // ������ � ������ ��� ���� missiles
    int getMissiles() const;
    void setMissiles(int m);

    // ���������������� ����� ��� ������ ���������� � �������
    void printInfo() const override;
};

#endif // UNIT_H
