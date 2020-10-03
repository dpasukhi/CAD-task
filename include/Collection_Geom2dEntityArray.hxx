// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Collection_Geom2dEntityArray_HeaderFile
#define _Collection_Geom2dEntityArray_HeaderFile

#include "Geom2d_Entity.hxx"
#include <vector>
#include <memory>

class Collection_Geom2dEntityArray : public std::vector<std::shared_ptr<Geom2d_Entity>>
{
public:

  void Sort();

  double Area();

private:

};

#endif // _Collection_Geom2dEntityArray_HeaderFile
