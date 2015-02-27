/*
 * main.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "main.hpp"
#include "engine/Game.hpp"
#include <stdlib.h>
#include <GLFW/glfw3.h>
#include "util/render/Screen.hpp"

int main(int argv, char* const argc[])
{
	if(!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	GLFWwindow* window = Screen::initWindow();

	if(!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	Game* game = new Game(window);

	game->run();

	delete game;

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}


