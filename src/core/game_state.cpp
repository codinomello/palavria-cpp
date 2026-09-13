#include "core/game_state.h"

GameState::GameState()
    : type(GameStateType::MAIN_MENU) {
}

GameStateType GameState::get_type() const {
    return type;
}

void GameState::set_type(GameStateType type) {
    this->type = type;
}