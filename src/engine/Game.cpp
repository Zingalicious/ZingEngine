/*
 * Game.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include "util/logging/Logger.hpp"
#include "util/render/Screen.hpp"
#include <stdlib.h>
#include <map>
#include <sstream>

Game* Game::instance_;

Game::Game()
{
    //Initialize window.
	GLFWwindow* window = Screen::initWindow(NORMAL);

	if(!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	//Initialize services.
	instance_ = this;
	this->window = window;
	console_ = new Console();
	state = NONE;
	inputManager_ = new InputManager(window);
}

Game::~Game() {
    //Delete services.
	delete console_;
	delete inputManager_;

	//Delete GLFW.
	glfwDestroyWindow(window);
	glfwTerminate();
}

Game& Game::instance()
{
	return *instance_;
}

Console& Game::console()
{
    return *console_;
}

bool Game::run()
{
	shouldClose_ = false;

	while(!glfwWindowShouldClose(window) && !shouldClose_)
	{
	    glfwPollEvents();
	}
	return true;
}

void Game::shouldClose()
{
    shouldClose_ = true;
}
