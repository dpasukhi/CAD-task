// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Geom2d_Circle_HeaderFile
#define _Geom2d_Circle_HeaderFile

#include "Geom2d_Entity.hxx"
#include "Geom2d_Point.hxx"

class Geom2d_Circle : public Geom2d_Entity
{
public:

  Geom2d_Circle();

  void Init(const string& theName, const double theRadius, const Geom2d_Point theCoord);

  double Area() const override;

  void SetRadius(const double theRadius);

  double Radius() const;

  void SetCoord(const Geom2d_Point& theCoord);

  Geom2d_Point Coord() const;

private:

  double myRadius;

  Geom2d_Point myCoord;
};

#endif // _Geom2d_Circle_HeaderFile