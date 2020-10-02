// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include "Geom2d_Circle.hxx"
#include <cmath>

Geom2d_Circle::Geom2d_Circle() : myCoord(), myRadius(0.) {}

void Geom2d_Circle::Init(const string& theName, const double theRadius, const Geom2d_Point theCoord)
{
  Geom2d_Entity::Init(theName);

  if (theRadius < 0.)
    throw "Bad radius";
  myRadius = theRadius;
  myCoord = theCoord;
}

size_t Geom2d_Circle::Area() const
{
  return 2 * M_PI * myRadius;
}

void Geom2d_Circle::SetRadius(const double theRadius)
{
  if (theRadius < 0.)
    throw "Bad radius";
  myRadius = theRadius;
}

double Geom2d_Circle::Radius() const
{
  return myRadius;
}

void Geom2d_Circle::SetCoord(const Geom2d_Point& theCoord)
{
  myCoord = theCoord;
}

Geom2d_Point Geom2d_Circle::Coord() const
{
  return myCoord;
}
