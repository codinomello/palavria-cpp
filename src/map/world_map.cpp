#include "map/world_map.h"

#include <raylib.h>

void WorldMap::update() {
}

void WorldMap::render() {
    ClearBackground(DARKGRAY);

    DrawText(
        "WORLD MAP",
        520,
        80,
        40,
        RAYWHITE
    );

    DrawText(
        "O mundo linguistico de PALAVRIA",
        430,
        140,
        20,
        LIGHTGRAY
    );

    DrawCircle(300, 350, 70, BLUE);
    DrawText("ESP", 280, 340, 20, RAYWHITE);

    DrawCircle(500, 250, 70, RED);
    DrawText("ENG", 480, 240, 20, RAYWHITE);

    DrawCircle(700, 350, 70, GREEN);
    DrawText("FRA", 680, 340, 20, RAYWHITE);

    DrawCircle(900, 250, 70, ORANGE);
    DrawText("JPN", 880, 240, 20, RAYWHITE);

    DrawCircle(700, 500, 70, PURPLE);
    DrawText("RUS", 680, 490, 20, RAYWHITE);
}