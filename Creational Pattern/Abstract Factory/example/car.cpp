#include "car.h"

Car* CarWorkShop::CreateCar(CarFactory &factory) {
    Engine* engine = factory.CreateEngine();
    Door* door = factory.CreateDoor(1);
    Door* door2 = factory.CreateDoor(2);
    Seat* seat = factory.CreateSeat();
    Seat* seat2 = factory.CreateSeat();

    Car* car = factory.CreateCar(*engine, *door, *door2, *seat, *seat2);
}