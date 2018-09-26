#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h):m_x(x),m_y(y),m_w(w),m_h(h)
{
	
}

Cercle::Cercle(Point p, int r):m_w(r),m_h(r)
{
	m_x = p.getX();
	m_y = p.getY();
}
