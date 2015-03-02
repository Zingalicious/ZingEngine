/*
 * Game.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include "util/logging/Logger.hpp"
#include "util/render/Screen.hpp"

Game* Game::instance_;

Game::Game(GLFWwindow* window)
{
	instance_ = this;
	this->window = window;
	logger_ = new Logger();
	state = NONE;
	inputManager_ = new InputManager();
}

Game::~Game() {
	delete logger_;
	delete inputManager_;
}

Game& Game::instance()
{
	return *instance_;
}

bool Game::run()
{
	bool gameShouldClose = false;

	logger_->log(DEBUG, "no");
	while(!glfwWindowShouldClose(window) && !gameShouldClose)
	{
		//EVERYTHANG
		gameShouldClose = true;
	}
	logger_->log(DEBUG, "test");
	return true;
}
