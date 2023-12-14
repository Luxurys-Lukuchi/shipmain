#include "unit.h"
#include <iostream>
#include <cassert>
int main() {
    setlocale(LC_ALL, "Russian");

        // Ввод данных для объекта Ship
        string shipName;
        double shipSpeed, shipCapacity;
        cout << "Enter Ship information:" << endl;
        cout << "Name: ";
        cin >> shipName;
        // todo добавить коментарий к скорости что это максимальная скорость
        cout << "Speed (knots): "; // просит ввести маскимальная скорость
        cin >> shipSpeed;// считывает маскимальная скорость
        cout << "Capacity (tons): ";
        cin >> shipCapacity;

        // Создание объекта Ship
        Ship ship(shipName, shipSpeed, shipCapacity);

        // Ввод данных для объекта CargoShip
        string cargoShipName;
        double cargoShipCargo;
        cout << "\nEnter Cargo Ship information:" << endl;
        cout << "Name: ";
        cin >> cargoShipName;
        cout << "Cargo (tons): ";
        cin >> cargoShipCargo;

        // Создание объекта CargoShip
        CargoShip cargoShip(cargoShipName, shipSpeed, shipCapacity, cargoShipCargo);

        // Ввод данных для объекта WarShip
        string warShipName;
        int warShipWeapons;
        cout << "\nEnter War Ship information:" << endl;
        cout << "Name: ";
        cin >> warShipName;
        cout << "Weapons: ";
        cin >> warShipWeapons;

        // Создание объекта WarShip
        WarShip warShip(warShipName, shipSpeed, shipCapacity, warShipWeapons);

        // Ввод данных для объекта CruiseShip
        string cruiseShipName;
        int cruiseShipPassengers;
        cout << "\nEnter Cruise Ship information:" << endl;
        cout << "Name: ";
        cin >> cruiseShipName;
        cout << "Passengers: ";
        cin >> cruiseShipPassengers;

        // Создание объекта CruiseShip
        CruiseShip cruiseShip(cruiseShipName, shipSpeed, shipCapacity, cruiseShipPassengers);

        // Ввод данных для объекта Corvette
        string corvetteName;
        int corvetteTorpedoes;
        cout << "\nEnter Corvette information:" << endl;
        cout << "Name: ";
        cin >> corvetteName;
        cout << "Torpedoes: ";
        cin >> corvetteTorpedoes;

        // Создание объекта Corvette
        Corvette corvette(corvetteName, shipSpeed, shipCapacity, warShipWeapons, corvetteTorpedoes);

        // Ввод данных для объекта AircraftCarrier
        string aircraftCarrierName;
        int aircraftCarrierPlanes;
        cout << "\nEnter Aircraft Carrier information:" << endl;
        cout << "Name: ";
        cin >> aircraftCarrierName;
        cout << "Planes: ";
        cin >> aircraftCarrierPlanes;

        // Создание объекта AircraftCarrier
        AircraftCarrier aircraftCarrier(aircraftCarrierName, shipSpeed, shipCapacity, warShipWeapons, aircraftCarrierPlanes);

        // Ввод данных для объекта Destroyer
        string destroyerName;
        int destroyerMissiles;
        cout << "\nEnter Destroyer information:" << endl;
        cout << "Name: ";
        cin >> destroyerName;
        cout << "Missiles: ";
        cin >> destroyerMissiles;

        // Создание объекта Destroyer
        Destroyer destroyer(destroyerName, shipSpeed, shipCapacity, warShipWeapons, destroyerMissiles);

        // todo(добавить какой-то массив) Добавление объектов в массив ships
        Ship* ships[] = { &ship, &cargoShip, &warShip, &cruiseShip, &corvette, &aircraftCarrier, &destroyer };
        //todo добавить определение полимрфизма
        // полиморфизм это принцип который позволяет объектам одного типа использоваться как объекты другого типа
        // Вывод информации о созданных объектах с использованием полиморфизма

        // Тестирование созданных объектов с использованием ассертов

    // Проверка данных объекта Ship
        assert(ship.getName() == shipName);
        assert(ship.getSpeed() == shipSpeed);
        assert(ship.getCapacity() == shipCapacity);

        // Проверка данных объекта CargoShip
        assert(cargoShip.getName() == cargoShipName);
        assert(cargoShip.getSpeed() == shipSpeed);
        assert(cargoShip.getCapacity() == shipCapacity);
        assert(cargoShip.getCargo() == cargoShipCargo);

        // Проверка данных объекта WarShip
        assert(warShip.getName() == warShipName);
        assert(warShip.getSpeed() == shipSpeed);
        assert(warShip.getCapacity() == shipCapacity);
        assert(warShip.getWeapons() == warShipWeapons);

        // Проверка данных объекта CruiseShip
        assert(cruiseShip.getName() == cruiseShipName);
        assert(cruiseShip.getSpeed() == shipSpeed);
        assert(cruiseShip.getCapacity() == shipCapacity);
        assert(cruiseShip.getPassengers() == cruiseShipPassengers);

        // Проверка данных объекта Corvette
        assert(corvette.getName() == corvetteName);
        assert(corvette.getSpeed() == shipSpeed);
        assert(corvette.getCapacity() == shipCapacity);
        assert(corvette.getWeapons() == warShipWeapons);
        assert(corvette.getTorpedoes() == corvetteTorpedoes);

        // Проверка данных объекта AircraftCarrier
        assert(aircraftCarrier.getName() == aircraftCarrierName);
        assert(aircraftCarrier.getSpeed() == shipSpeed);
        assert(aircraftCarrier.getCapacity() == shipCapacity);
        assert(aircraftCarrier.getWeapons() == warShipWeapons);
        assert(aircraftCarrier.getPlanes() == aircraftCarrierPlanes);

        // Проверка данных объекта Destroyer
        assert(destroyer.getName() == destroyerName);
        assert(destroyer.getSpeed() == shipSpeed);
        assert(destroyer.getCapacity() == shipCapacity);
        assert(destroyer.getWeapons() == warShipWeapons);
        assert(destroyer.getMissiles() == destroyerMissiles);

        for (int i = 0; i < sizeof(ships) / sizeof(ships[0]); ++i) {
            cout << "Ship Info:" << endl;
            ships[i]->printInfo();
            cout << endl;
        }

        return 0;
    }

