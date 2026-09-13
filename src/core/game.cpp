#include "core/game.h"

#include <raylib.h>

void Game::run() {
    initialize();

    while (!WindowShouldClose()) {
        update();
        render();
    }

    shutdown();
}

void Game::initialize() {
    InitWindow(1280, 720, "PALAVRIA");
    SetTargetFPS(60);
}

void Game::update() {
    switch (game_state.get_type()) {
        case GameStateType::MAIN_MENU:
            main_menu.update();

            if (IsKeyPressed(KEY_ENTER)) {
                game_state.set_type(GameStateType::WORLD_MAP);
            }

            break;

        case GameStateType::WORLD_MAP:
            world_map.update();
            break;

        case GameStateType::ENCOUNTER:
            break;

        case GameStateType::PAUSE:
            break;

        case GameStateType::GAME_OVER:
            break;
    }
}

void Game::render() {
    BeginDrawing();

    switch (game_state.get_type()) {
        case GameStateType::MAIN_MENU:
            main_menu.render();
            break;

        case GameStateType::WORLD_MAP:
            world_map.render();
            break;

        case GameStateType::ENCOUNTER:
            ClearBackground(BLACK);
            DrawText("ENCOUNTER", 500, 300, 40, RAYWHITE);
            break;

        case GameStateType::PAUSE:
            ClearBackground(BLACK);
            DrawText("PAUSE", 550, 300, 40, RAYWHITE);
            break;

        case GameStateType::GAME_OVER:
            ClearBackground(BLACK);
            DrawText("GAME OVER", 500, 300, 40, RAYWHITE);
            break;
    }

    EndDrawing();
}

void Game::shutdown() {
    CloseWindow();
}