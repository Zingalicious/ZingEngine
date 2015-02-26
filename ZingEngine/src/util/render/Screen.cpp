/*
 * Screen.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#include "screen.hpp"

void Screen::getResolution(int* w, int* h, GLFWmonitor* monitor)
{
	int count;
	const GLFWvidmode* modes = glfwGetVideoModes(monitor, &count);

	int maxWidth = 0;
	int maxHeight = 0;
	for (int i = 00; i < count; i++)
	{
		if (modes[i].width > maxWidth)
		{
			maxWidth = modes[i].width;
		}
		if (modes[i].height > maxHeight)
		{
			maxHeight = modes[i].height;
		}
	}

	*w = maxWidth;
	*h = maxHeight;
}

GLFWwindow* Screen::initWindow()
{
	GLFWwindow* window;
	GLFWmonitor* monitor = glfwGetPrimaryMonitor();
	int rw;
	int rh;
	getResolution(&rw, &rh, monitor);
	const GLFWvidmode* mode = glfwGetVideoMode(monitor);
	glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
	window = glfwCreateWindow(rw, rh, "ZingEngine", monitor, NULL);
	return window;
}
