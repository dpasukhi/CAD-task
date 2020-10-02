// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Geom2d_Ellipse_HeaderFile
#define _Geom2d_Ellipse_HeaderFile

#include "Geom2d_Entity.hxx"
#include "Geom2d_Point.hxx"

class Geom2d_Ellipse : public Geom2d_Entity
{
public:

  Geom2d_Ellipse();

  void Init(const string& theName, const double theMinorRadius, const double theMajorRadius, const Geom2d_Point theCoord);

  size_t Area() const override;

  void SetMinorRadius(const double theMinorRadius);

  void SetMajorRadius(const double theMajorRadius);

  double MinorRadius() const;

  double MajorRadius() const;

  void SetCoord(const Geom2d_Point& theCoord);

  Geom2d_Point Coord() const;

private:

  double myMinorRadius;

  double myMajorRadius;

  Geom2d_Point myCoord;
};

#endif // _Geom2d_Ellipse_HeaderFile