#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "stdio.h"

  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //toutes ces fonction retourne 1 si on clique � l'endroit ou le bouton est sur l'�cran sauf exitGame qui quitte completement le jeu//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int start(sfWindow* w, sfVector2i mousePos)
{
	// si la souris est bien dans les coordon�e du bouton et qui le boutton gauche est cliquer
	if ((mousePos.x > 675 && mousePos.x < 1271) && (mousePos.y > 254 && mousePos.y < 408) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 1;
	}
	return 0;
}
void exitGame(sfWindow* w, sfVector2i mousePos)
{
	if ((mousePos.x > 706 && mousePos.x < 1247) && (mousePos.y > 683 && mousePos.y < 856) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		sfRenderWindow_close(w);
	}
}

int restart(sfWindow* w, sfVector2i mousePos)
{
	if ((mousePos.x > 230 && mousePos.x < 772) && (mousePos.y > 672 && mousePos.y < 980) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 1;
	}
	return 0;
}

int retourMenu(sfWindow* w, sfVector2i mousePos, int menu)
{
	if (((mousePos.x > 1226 && mousePos.x < 1756) && (mousePos.y > 662 && mousePos.y < 963) && sfMouse_isButtonPressed(sfMouseLeft) && menu == 0) || ((mousePos.x > 730 && mousePos.x < 1140) && (mousePos.y > 900 && mousePos.y < 1050) && sfMouse_isButtonPressed(sfMouseLeft) && menu == 1))
	{
		return 1;
	}
	return 0;
}

int changeDiff(sfWindow* w, sfVector2i mousePos, int diff)
{
	if ((mousePos.x > 668 && mousePos.x < 1186) && (mousePos.y > 80 && mousePos.y < 300) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 1;
	}
	if ((mousePos.x > 748 && mousePos.x < 1262) && (mousePos.y > 342 && mousePos.y < 566) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 2;
	}
	if ((mousePos.x > 616 && mousePos.x < 1178) && (mousePos.y > 600 && mousePos.y < 710) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 3;
	}
	return diff;
}

int difficultee(sfWindow* w, sfVector2i mousePos)
{
	if ((mousePos.x > 695 && mousePos.x < 1240) && (mousePos.y > 471 && mousePos.y < 620) && sfMouse_isButtonPressed(sfMouseLeft))
	{
		return 1;
	}
	return 0;
}