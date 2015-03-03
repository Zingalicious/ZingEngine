/*
 * main.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include <stdlib.h>

int main(int argv, char* const argc[])
{
	if(!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	Game* game = new Game();

	int exitType;

	if(!game->run())
	{
		exitType = EXIT_FAILURE;
	}
	else
	{

		exitType = EXIT_SUCCESS;
	}

	delete game;

	exit(exitType);
}


