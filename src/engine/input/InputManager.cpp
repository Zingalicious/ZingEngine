/*
 * InputManager.cpp
 *
 *  Created on: Mar 1, 2015
 *      Author: Zingten
 */

#include "engine/Game.hpp"
#include "util/logging/Console.hpp"
#include "engine/input/InputManager.hpp"
#include <string>
#include <sstream>

InputManager::InputManager(GLFWwindow* window)
{
    InputCallbacks::inputWindows.insert(std::pair<GLFWwindow*, InputManager*>(window, this));
    glfwSetMouseButtonCallback(window, InputCallbacks::mouse_button_callback);
    glfwSetCursorPosCallback(window, InputCallbacks::mouse_pos_callback);
    glfwSetScrollCallback(window, InputCallbacks::mouse_scroll_callback);
    glfwSetKeyCallback(window, InputCallbacks::key_callback);
}

InputManager::~InputManager()
{

}

void InputManager::mouse_button_callback(GLFWwindow*, int button, int action, int mods)
{
    std::ostringstream ss;
    ss << button << " " << action << " " << mods << " CLICK" << std::endl;
    Game::instance().console().log(DEBUG, ss.str());
}

void InputManager::mouse_pos_callback(GLFWwindow*, double xpos, double ypos)
{
    return;
    std::ostringstream ss;
    ss << xpos << " " << ypos << " POSITION" << std::endl;
    Game::instance().console().log(DEBUG, ss.str());
}

void InputManager::mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    std::ostringstream ss;
    ss << xoffset << " " << yoffset << " SCROLL" << std::endl;
    Game::instance().console().log(DEBUG, ss.str());
}

void InputManager::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if(action ==  GLFW_REPEAT)
        return;
    std::ostringstream ss;
    ss << key << " " << action << " " << scancode << " " << mods << " KEY" << std::endl;
    Game::instance().console().log(DEBUG, ss.str());
    if(key == GLFW_KEY_ESCAPE)
    {
        Game::instance().shouldClose();
    }
}

void InputCallbacks::mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    for(std::map<GLFWwindow*,InputManager*>::iterator i = inputWindows.begin();
        i != inputWindows.end();
        ++i)
    {
        if(i->first == window)
        {
            i->second->mouse_button_callback(window, button, action, mods);
            return;
        }
    }
}

void InputCallbacks::mouse_pos_callback(GLFWwindow* window, double xpos, double ypos)
{
    for(std::map<GLFWwindow*,InputManager*>::iterator i = inputWindows.begin();
        i != inputWindows.end();
        ++i)
    {
        if(i->first == window)
        {
            i->second->mouse_pos_callback(window, xpos, ypos);
            return;
        }
    }
}

void InputCallbacks::mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    for(std::map<GLFWwindow*,InputManager*>::iterator i = inputWindows.begin();
        i != inputWindows.end();
        ++i)
    {
        if(i->first == window)
        {
            i->second->mouse_scroll_callback(window, xoffset, yoffset);
            return;
        }
    }
}

void InputCallbacks::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    for(std::map<GLFWwindow*,InputManager*>::iterator i = inputWindows.begin();
        i != inputWindows.end();
        ++i)
    {
        if(i->first == window)
        {
            i->second->key_callback(window, key, scancode, action, mods);
            return;
        }
    }
}
