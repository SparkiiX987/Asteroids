#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>

#ifndef MENU_H
#define MENU_H

// réferencie les fonction de boutons
int start(sfWindow* w, sfVector2i mousePos);
void exitGame(sfWindow* w, sfVector2i mousePos);
int restart(sfWindow* w, sfVector2i mousePos);
int retourMenu(sfWindow* w, sfVector2i mousePos, int menu);
int difficultee(sfWindow* w, sfVector2i mousePos);
int changeDiff(sfWindow* w, sfVector2i mousePos, int diff);

#endif
