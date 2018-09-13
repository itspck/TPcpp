// Fichier Point.cpp

#include <iostream>
#include "Point.hpp"

Point::Point(){
	std::cout << "sans arguments" << std::endl;
}

Point::Point(int xAxis, int yAxis){
	x = xAxis;
	y = yAxis;
	std::cout << "avec arguments" << std::endl;
}

int Point::getX() {
	return x;
}

void Point::setX(int xAxis){
	x = xAxis;
}

int Point::getY() {
	return y;
}

void Point::setY(int yAxis){
	y = yAxis;
}

void Point::deplacerDe(int Xoffset, int Yoffset){
	x += Xoffset;
	y += Yoffset;
}

void Point::deplacerVers(int xAxis, int yAxis){
	x = xAxis;
	y = yAxis;
}

int main(int, char**) {
	Point p, p2(3,3);
	p.setX(10);
	p.setY(10);
	std::cout << p.getX() << " " << p.getY() << std::endl;
	p.deplacerDe(1,2);
	std::cout << p.getX() << " " << p.getY() << std::endl;
	p.deplacerVers(12,15);
	std::cout << p.getX() << " " << p.getY() << std::endl;
	
	return 0;
}
