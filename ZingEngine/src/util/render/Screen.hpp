/*
 * Screen.hpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#ifndef UTIL_RENDER_SCREEN_HPP_
#define UTIL_RENDER_SCREEN_HPP_

#include <GLFW/glfw3.h>

namespace Screen
{
	/*! Gets the max resolution of a GLFWmonitor.
	 * @param w Pointer to width variable to change.
	 * @param h Pointer to height variable to change.
	 * @param monitor Monitor to get resolution for.
	 */
	void getResolution(int* w, int* h, GLFWmonitor* monitor);

	/*! Initializes a GLFWwindow.
	 * @return The window.
	 */
	GLFWwindow* initWindow();
}


#endif /* UTIL_RENDER_SCREEN_HPP_ */
