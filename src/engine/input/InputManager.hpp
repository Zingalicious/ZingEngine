/*
 * InputManager.hpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_INPUT_INPUTMANAGER_HPP_
#define ENGINE_INPUT_INPUTMANAGER_HPP_

#include <GLFW/glfw3.h>

class InputManager
{
public:

	InputManager();
	~InputManager();
	/*! GLFW callback for mouse click input, to be binded at input initialization.
	 * @param window GLFW window to get input for.
	 * @param button Mouse button clicked.
	 * @param action Either press or release.
	 * @param mods Bitfield of modifier keys.
	 */
	void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) const;

	/*! GLFW callback for mouse position input, to be binded at input initialization.
	 * @param window GLFW window to get input for.
	 * @param xpos Current cursor x position.
	 * @param ypos Current cursor y position.
	 */
	void mouse_pos_callback(GLFWwindow* window, double xpos, double ypos) const;

	/*! GLFW callback for scroll input, to be binded at input initialization.
	 * @param window GLFW window to get input for.
	 * @param xoffset Scroll input in x direction.
	 * @param yoffset Scroll input in y direction.
	 */
	void mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset) const;

	/*! GLFW callback for keyboard input, to be binded at input initialization.
	 * @param window GLFW window to get input for.
	 * @param key Keyboard key acted upon.
	 * @param scancode Key scancode (system dependent).
	 * @param action Key press, release, or repeat (hold).
	 * @param mods Bitfield of modifier keys.
	 */
	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) const;
};


#endif /* ENGINE_INPUT_INPUTMANAGER_HPP_ */
