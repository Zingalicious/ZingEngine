/*
 * Fonts.hpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#ifndef UTIL_RENDER_FONTS_HPP_
#define UTIL_RENDER_FONTS_HPP_

#include <ft2build.h>
#include FT_FREETYPE_H

class FontLibrary
{
private:
    FT_Library ft;

public:
    FontLibrary();


};



#endif /* UTIL_RENDER_FONTS_HPP_ */
