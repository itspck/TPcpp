#ifndef __POINT__
#define __POINT__

// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C
class Point {
   // par défaut, tout est privé dans une "class"

	int x;
	int y;
	
	public:
		Point();
		Point(int xAxis, int yAxis);
		int getX();
		void setX(int xAxis);
		int getY();
		void setY(int yAxis);
		void deplacerDe(int Xoffset = 0, int Yoffset = 0);
		void deplacerVers(int Xoffset, int Yoffset);
};

#endif
