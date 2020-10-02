// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Geom2d_Entity_HeaderFile
#define _Geom2d_Entity_HeaderFile
#define _USE_MATH_DEFINES // for C++

#define Precision 1.e-7
#define SquarePrecision 1.e-14

#include "Entity.hxx"
#include <string>

typedef std::string string;

class Geom2d_Entity : public Entity
{
public:

  Geom2d_Entity();

  void Init(const string& theName);

  void SetName(const string& theName);

  virtual size_t Area() const = 0;

  string Name() const;

private:

  string myName;

};

#endif // _Geom2d_Entity_HeaderFile