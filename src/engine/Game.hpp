/*
 * Game.hpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_GAME_HPP_
#define ENGINE_GAME_HPP_

#include <GLFW/glfw3.h>
#include "util/logging/Console.hpp"
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
	Console* console_;
	InputManager* inputManager_;
	bool shouldClose_;
public:
	/*! Create a game instance in a GLFWwindow.
	 * @param window The window to display the game in.
	 */
	Game();
	~Game();

	/*! Get the Game instance.
	 * @return Game instance singular.
	 */
	static Game& instance();

	/*! Main loop of Game- where the magic happens.
	 */
	bool run();

	/*! Returns the console.
	 * @return Console The console.
	 */
	Console& console();

	void shouldClose();
};

#endif /* ENGINE_GAME_HPP_ */
