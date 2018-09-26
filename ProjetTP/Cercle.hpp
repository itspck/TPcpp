#ifndef __CERCLE__
#define __CERCLE__

#include <iostream>
#include "Point.hpp"

class Cercle{
	int m_x,m_y,m_w,m_h;
	
	public:
		Cercle(int x, int y, int w, int h);
		Cercle(Point p, int r);
};

#endif
