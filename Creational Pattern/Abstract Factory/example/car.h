class Car {
    public:
        virtual void run();
};

class Engine : public Car {
    public:
        virtual void energy();
};

class Door : public Car {
    public:
        Door(int number);

        virtual void open();
        virtual void close();
};

class Seat : public Car {
    public:
        virtual void up();
        virtual void down();
};

class CarWorkShop {
    public:
        Car* CreateCar(CarFactory& factory);
};

class CarFactory {
    public:
        virtual Car* CreateCar(Engine& engine, Door& door, Door& door2, Seat& seat, Seat& seat2) const;
        virtual Engine* CreateEngine() { return new Engine; };
        virtual Door* CreateDoor(int number) { return new Door(number); };
        virtual Seat* CreateSeat() { return new Seat; };
};