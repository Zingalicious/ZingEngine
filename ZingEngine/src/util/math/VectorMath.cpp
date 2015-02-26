/*
 * VectorMath.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#include <cmath>
#include "VectorMath.hpp"

template<class T>
Vector3<T>::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

template<class T>
Vector3<T>::Vector3(T x, T y, T z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

template<class T>
double Vector3<T>::magnitude() const
{
	return sqrt(x*x+y*y+z*z);
}

template<class T>
void Vector3<T>::normalize()
{
	double mag = this->magnitude();
	x /= mag;
	y /= mag;
	z /= mag;
	return;
}

template<class T>
Vector3<T>& Vector3<T>::cross(const Vector3& cross)
{
	return new Vector3<T>(y*cross->z-z*cross->y, z*cross->x-x*cross->z, x*cross->y-y*cross->x);
}

template<class T>
double Vector3<T>::dot(const Vector3& dot)
{
	return x*dot->x+y*dot->y+z*dot->z;
}

template<class T>
Vector3<T>& Vector3<T>::operator=(const Vector3<T>& eq)
{
	if(this != &eq)
	{
		x = eq->x;
		y = eq->y;
		z = eq->z;
	}
	return *this;
}

template<class T>
Vector3<T>& Vector3<T>::operator+=(const Vector3<T>& add)
{
	x += add->x;
	y += add->y;
	z += add->z;
	return *this;
}

template<class T>
const Vector3<T>& Vector3<T>::operator+(const Vector3<T>& add)
{
	return Vector3<T>(*this) += add;
}

template<class T>
void Vector3<T>::multiply(const T amount)
{
	x *= amount;
	y *= amount;
	z *= amount;
	return;
}

template<class T>
void Vector3<T>::rotate(const float angle, const Vector3& direction)
{
	Vector3<T> a = Vector3<T>(*this)->
					multiply(cosf(angle));
	Vector3<T> b = direction->
					cross(this)->
					multiply(sinf(angle));
	Vector3<T> c = Vector3<T>(*direction)->
					multiply(direction->dot(this))->
					multiply(1-cosf(angle));
	this = a+b+c;
	delete a;
	delete b;
	delete c;
	return;
}
