/*
 * main.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include <stdlib.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include "util/render/Screen.hpp"

int main(int argv, char* const argc[])
{
	std::cout << "test";

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

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(exitType);
}


