#include "ui/main_menu.h"

#include <raylib.h>

void MainMenu::update() {
}

void MainMenu::render() {
    DrawText("PALAVRIA", 500, 300, 50, BLACK);

    DrawText(
        "Linguagem, territorio e poder.",
        445,
        370,
        20,
        DARKGRAY
    );

    DrawText(
        "PRESSIONE ENTER PARA COMECAR",
        440,
        450,
        20,
        DARKGRAY
    );
}