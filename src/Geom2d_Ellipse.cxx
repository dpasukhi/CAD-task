// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include "Geom2d_Ellipse.hxx"
#include <cmath>

Geom2d_Ellipse::Geom2d_Ellipse() : myCoord(), myMajorRadius(0.), myMinorRadius(0.) {}

void Geom2d_Ellipse::Init(const string& theName, const double theMinorRadius, const double theMajorRadius, const Geom2d_Point theCoord)
{
  Geom2d_Entity::Init(theName);

  myCoord = theCoord;

  if (theMinorRadius < 0. || theMajorRadius < 0)
    throw "Bad radius";

  myMajorRadius = theMajorRadius;
  myMinorRadius = theMinorRadius;
}

double Geom2d_Ellipse::Area() const
{
  return M_PI * myMinorRadius * myMajorRadius;
}

void Geom2d_Ellipse::SetMinorRadius(const double theMinorRadius)
{
  if (theMinorRadius < 0.)
    throw "Bad radius";
  myMinorRadius = theMinorRadius;
}

void Geom2d_Ellipse::SetMajorRadius(const double theMajorRadius)
{
  if (myMajorRadius < 0.)
    throw "Bad radius";
  myMajorRadius = theMajorRadius;
}

double Geom2d_Ellipse::MinorRadius() const
{
  return myMinorRadius;
}

double Geom2d_Ellipse::MajorRadius() const
{
  return myMajorRadius;
}

void Geom2d_Ellipse::SetCoord(const Geom2d_Point& theCoord)
{
  myCoord = theCoord;
}

Geom2d_Point Geom2d_Ellipse::Coord() const
{
  return myCoord;
}
