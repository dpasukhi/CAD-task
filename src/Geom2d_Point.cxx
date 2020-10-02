// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include "Geom2d_Point.hxx"

Geom2d_Point::Geom2d_Point() : myX(0.), myY(0.) {}

void Geom2d_Point::Init(const string& theName, const double theX, const double theY)
{
  Geom2d_Entity::Init(theName);
  myX = theX;
  myY = theY;
}

void Geom2d_Point::SetX(const double theX)
{
  myX = theX;
}

void Geom2d_Point::SetY(const double theY)
{
  myY = theY;
}

double Geom2d_Point::CoordX() const
{
  return myX;
}

double Geom2d_Point::CoordY() const
{
  return myY;
}

double Geom2d_Point::Area() const
{
  return 0.;
}
