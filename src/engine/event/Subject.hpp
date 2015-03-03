/*
 * Subject.hpp
 *
 *  Created on: Feb 27, 2015
 *      Author: Zingten
 */

#ifndef ENGINE_EVENT_SUBJECT_HPP_
#define ENGINE_EVENT_SUBJECT_HPP_

#include "Observer.hpp"

class Subject
{
private:
    Observer* firstObserver_;
public:
    Subject();
    /*! Registers an observer to this Subject.
     * @param observer The observer.
     */
    void registerObserver(Observer* observer);

    /*! Removes an observer from this Subject.
     * @param observer The observer.
     */
    void removeObserver(Observer* observer);
};



#endif /* ENGINE_EVENT_SUBJECT_HPP_ */
