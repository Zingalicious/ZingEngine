/*
 * VectorMath.hpp
 *
 *  Created on: Feb 25, 2015
 *      Author: Zingten
 */

#ifndef UTIL_MATH_VECTORMATH_HPP_
#define UTIL_MATH_VECTORMATH_HPP_

template <class T>
class Vector3
{
public:
	T x;
	T y;
	T z;

	/*! Initializes a 0 Vector3.
	 */
	Vector3();

	/*! Deletes a Vector3.
	 */
	~Vector3();

	/*! Initializes a Vector3 with values.
	 * @param x Initial x value.
	 * @param y Initial y value.
	 * @param z Initial z value.
	 */
	Vector3(T x, T y, T z);

	/*! Returns the magnitude of the Vector3.
	 *
	 * @return The magnitude of the Vector3.
	 */
	double magnitude() const;

	/*! Normalizes the Vector3 to a unit vector.
	 */
	void normalize();

	/*! Calculates cross product with another Vector3.
	 * @param cross Vector3 to calculate cross product with.
	 * @return Cross product. MAKE SURE TO DELETE WHEN DONE.
	 */
	Vector3<T>& cross(const Vector3& cross);

	/*! Calculates dot product with another Vector3.
	 * @param dot Vector3 to calculate dot product with.
	 * @return Dot product.
	 */
	double dot(const Vector3& dot);

	/*! Sets vector to another.
	 * @param eq Vector3 to set equal to.
	 * @return Changed Vector3.
	 */
	Vector3<T>& operator=(const Vector3& eq);

	/*! Translates Vector3 by another vector.
	 *  @param add Vector3 to translate by.
	 *  @return Translated Vector3.
	 */
	Vector3<T>& operator+=(const Vector3& add);

	/*! Adds 2 Vector3s together.
	 *  @param add Vector3 to add.
	 *  @return New Vector3.
	 */
	const Vector3<T>& operator+(const Vector3& add);

	/*! Multiplies the Vector3 by an amount.
	 *  @param amount The amount.
	 */
	void multiply(const T amount);

	/*! Rotates the Vector3 around a unit vector.
	 *  @param angle The angle.
	 *  @param axis The axis.  MUST BE A UNIT VECTOR!
	 */
	void rotate(const float angle, const Vector3& axis);
};



#endif /* UTIL_MATH_VECTORMATH_HPP_ */
