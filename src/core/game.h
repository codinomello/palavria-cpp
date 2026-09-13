#ifndef PALAVRIA_CORE_GAME_H
#define PALAVRIA_CORE_GAME_H

#include "core/game_state.h"
#include "map/world_map.h"
#include "ui/main_menu.h"

class Game {
public:
    void run();

private:
    void initialize();
    void update();
    void render();
    void shutdown();

    GameState game_state;
    MainMenu main_menu;
    WorldMap world_map;
};

#endif // PALAVRIA_CORE_GAME_H