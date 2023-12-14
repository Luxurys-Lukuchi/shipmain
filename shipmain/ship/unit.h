#pragma once
#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

using namespace std;

// Базовый класс Ship
class Ship {
protected:
    string name;   // имя корабля
    double speed;   // скорость масимальная в узлах
    double capacity;   // грузоподъемность в тоннах
public:
    // Конструктор с параметрами
    Ship(string n, double s, double c);

    // Геттеры и сеттеры для полей
    string getName() const;
    void setName(string n);
    double getSpeed() const;
    void setSpeed(double s); // скорость максимальная  в узлах
    double getCapacity() const;
    void setCapacity(double c);

    // todo Добавить виртуальный метод для вывода информации о корабле
    virtual void printInfo() const;
};

// Производный класс CargoShip, наследует от класса Ship
class CargoShip : public Ship {
protected:
    double cargo;   // текущий груз в тоннах
public:
    // Конструктор с параметрами
    CargoShip(string n, double s, double c, double g);

    // Геттер и сеттер для поля cargo
    double getCargo() const;
    void setCargo(double g);

    // Переопределенный метод для вывода информации о грузовом корабле
    void printInfo() const override;
};

// Производный класс WarShip, наследует от класса Ship
class WarShip : public Ship {
protected:
    int weapons;   // количество оружия на борту
public:
    // Конструктор с параметрами
    WarShip(string n, double s, double c, int w);

    // Геттер и сеттер для поля weapons
    int getWeapons() const;
    void setWeapons(int w);

    // Переопределенный метод для вывода информации о военном корабле
    void printInfo() const override;
};

// Производный класс CruiseShip, наследует от класса Ship
class CruiseShip : public Ship {
protected:
    int passengers;   // количество пассажиров на борту
public:
    // Конструктор с параметрами
    CruiseShip(string n, double s, double c, int p);

    // Геттер и сеттер для поля passengers
    int getPassengers() const;
    void setPassengers(int p);

    //todo добавить Переопределенный метод для вывода информации о круизном корабле
    void printInfo() const override;
};

// Производный класс Corvette, наследует от класса WarShip
class Corvette : public WarShip {
protected:
    int torpedoes;   // количество торпед на борту
public:
    // Конструктор с параметрами
    Corvette(string n, double s, double c, int w, int t);

    // Геттер и сеттер для поля torpedoes
    int getTorpedoes() const;
    void setTorpedoes(int t);

    // Переопределенный метод для вывода информации о Corvette
    void printInfo() const override;
};

// Производный класс AircraftCarrier, наследует от класса WarShip
class AircraftCarrier : public WarShip {
protected:
    int planes;   // количество самолетов на борту
public:
    // Конструктор с параметрами
    AircraftCarrier(string n, double s, double c, int w, int p);

    // Геттер и сеттер для поля planes
    int getPlanes() const;
    void setPlanes(int p);

    // Переопределенный метод для вывода информации об авианосце
    void printInfo() const override;
};

// Производный класс Destroyer, наследует от класса WarShip
class Destroyer : public WarShip {
protected:
    int missiles;   // количество ракет на борту
public:
    // Конструктор с параметрами
    Destroyer(string n, double s, double c, int w, int m);

    // Геттер и сеттер для поля missiles
    int getMissiles() const;
    void setMissiles(int m);

    // Переопределенный метод для вывода информации о эсминце
    void printInfo() const override;
};

#endif // UNIT_H
