/*
 * Game.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include "util/render/Screen.hpp"

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

static Game& Game::instance()
{
	if(instance_ == nullptr)
	{
		instance_ = new Game();
	}
	return instance_;
}
