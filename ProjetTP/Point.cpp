// Fichier Point.cpp

#include <iostream>
#include "Point.hpp"

int Point::compteur = 0;

Point::Point(){
	std::cout << "sans arguments" << std::endl;
	++compteur;
}

Point::Point(int xAxis, int yAxis){
	x = xAxis;
	y = yAxis;
	std::cout << "avec arguments" << std::endl;
	++compteur;
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

int Point::getCpt(){
	return Point::compteur;
}

void Point::deplacerDe(int Xoffset, int Yoffset){
	x += Xoffset;
	y += Yoffset;
}

void Point::deplacerVers(int xAxis, int yAxis){
	x = xAxis;
	y = yAxis;
}

