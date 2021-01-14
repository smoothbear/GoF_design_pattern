#include "maze.h"

Maze* MazeGame::CreateMaze() {
    Maze* aMaze = new Maze;
    Room* r1 = new Room(1);
    Room* r2 = new Room(2);
    Door* theDoor = new Door(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(East, theDoor);
    r1->SetSide(West, theDoor);

    r2->SetSide(East, theDoor);
    r2->SetSide(West, theDoor);

    return aMaze;
}