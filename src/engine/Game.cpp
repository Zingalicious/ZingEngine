/*
 * Game.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include "util/render/Screen.hpp"

Game* Game::instance_;

Game::Game(GLFWwindow* window)
{
	instance_ = this;
	this->window = window;
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

Game& Game::instance()
{
	return *instance_;
}

void Game::run()
{

}
