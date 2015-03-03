/*
 * Observer.hpp
 *
 *  Created on: Feb 27, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_EVENT_OBSERVER_HPP_
#define ENGINE_EVENT_OBSERVER_HPP_

class Subject;

class Observer
{
private:
    Subject* subject_;
    Observer* next_;
public:
    Observer();
    void addObserver(Observer* observer);
};



#endif /* ENGINE_EVENT_OBSERVER_HPP_ */
