#ifndef PALAVRIA_CORE_GAME_STATE_H
#define PALAVRIA_CORE_GAME_STATE_H

enum class GameStateType {
    MAIN_MENU,
    WORLD_MAP,
    ENCOUNTER,
    PAUSE,
    GAME_OVER
};

class GameState {
public:
    GameState();

    GameStateType get_type() const;
    void set_type(GameStateType type);

private:
    GameStateType type;
};

#endif // PALAVRIA_CORE_GAME_STATE_H