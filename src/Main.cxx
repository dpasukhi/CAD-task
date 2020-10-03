// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include <Geom2d_Circle.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Collection_Geom2dEntityArray.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_Entity.hxx>

#include <ctime>
#include <iostream>
#include <memory>

int main()
{
  srand(time(0));

  int aCount = 0;
  while (aCount <= 0)
  {
    std::cout << "Input count of entity\n";
    std::cin >> aCount;
    if (aCount < 0.)
      std::cout << "\nIncorrect input. Repeat.\n";
  }
  Collection_Geom2dEntityArray aGeomVector;;
  for (int anInd = 0; anInd < aCount; ++anInd)
  {
    std::shared_ptr<Geom2d_Entity> anEntity;
    double aRand = (rand() % 100) / (rand() % 100 + 1.);
    Geom2d_Point aPoint;
    aPoint.Init("Point", aRand * (rand() % 5), aRand * (rand() % 5));
    try
    {
      if (aRand < 1.)
      {
        anEntity = std::make_shared< Geom2d_Circle>();
        std::shared_ptr<Geom2d_Circle> aCircle = std::dynamic_pointer_cast<Geom2d_Circle> (anEntity);
        aCircle->Init("Circle", aRand * (rand() % 100 + 1) + 1, aPoint);
      }
      else
      {
        anEntity = std::make_shared< Geom2d_Ellipse>();
        std::shared_ptr<Geom2d_Ellipse> aEllipse = std::dynamic_pointer_cast<Geom2d_Ellipse> (anEntity);
        aEllipse->Init("Ellipse", aRand * (rand() % 5 + 1), aRand * (rand() % 5 + 1), aPoint);
      }
    }
    catch (const char*)
    {
      continue;
    }
    std::cout << "\n" << anEntity->Name() << " was created." << "Area: " << anEntity->Area();
    aGeomVector.emplace_back(anEntity);
  }
  std::cout << "\n\nSum area is " << aGeomVector.Area() << std::endl << std::endl;
  aGeomVector.Sort();

  for (const auto& anItem : aGeomVector)
  {
    std::cout << anItem->Name() << " area: " << anItem->Area() << std::endl;
  }

  return 0;
}