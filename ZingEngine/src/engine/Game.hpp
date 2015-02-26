/*
 * Game.hpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_GAME_HPP_
#define ENGINE_GAME_HPP_

class Game {
private:
	Game instance_;
public:
	Game();
	~Game();
	static Game& instance();
};

#endif /* ENGINE_GAME_HPP_ */
