// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Geom2d_Point_HeaderFile
#define _Geom2d_Point_HeaderFile

#include "Geom2d_Entity.hxx"

class Geom2d_Point : public Geom2d_Entity
{
public:

  Geom2d_Point();

  void Init(const string& theName, const double theX, const double theY);

  void SetX(const double theX);

  void SetY(const double theY);

  double CoordX() const;

  double CoordY() const;

  size_t Area() const override;

private:

  double myX;
  double myY;

};

#endif // _Geom2d_Point_HeaderFile