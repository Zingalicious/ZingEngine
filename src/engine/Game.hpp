/*
 * Game.hpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_GAME_HPP_
#define ENGINE_GAME_HPP_

#include <GLFW/glfw3.h>
#include "util/logging/Logger.hpp"
#include "engine/input/InputManager.hpp"

enum GameState
{
	NONE, LOAD, PAUSE, PLAY
};

class Game
{
private:
	static Game* instance_;
	GLFWwindow* window;
	GameState state;
	Logger* logger_;
	InputManager* inputManager_;
public:
	/*! Create a game instance in a GLFWwindow.
	 * @param window The window to display the game in.
	 */
	Game(GLFWwindow* window);
	~Game();

	/*! Get the Game instance.
	 * @return Game instance singular.
	 */
	static Game& instance();

	/*! Main loop of Game- where the magic happens.
	 */
	void run();

	/*! Change the window of the Game.
	 * @param window New window to display the game in.
	 */
	void setWindow(GLFWwindow* window);
};

#endif /* ENGINE_GAME_HPP_ */
