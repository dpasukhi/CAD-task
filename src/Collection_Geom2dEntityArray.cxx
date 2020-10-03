// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include "Collection_Geom2dEntityArray.hxx"
#include <algorithm>

void Collection_Geom2dEntityArray::Sort()
{
  std::sort(begin(),end(),
    [](const std::shared_ptr<Geom2d_Entity>& theFirstEntity, const std::shared_ptr<Geom2d_Entity>& theSecondEntity) {return theFirstEntity->Area() < theSecondEntity->Area(); });
}

double Collection_Geom2dEntityArray::Area()
{
  double anArea = 0;
  for (const auto& anItem : *this)
  {
    anArea += anItem->Area();
  }
  return anArea;
}
