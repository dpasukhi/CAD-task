// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#ifndef _Entity_HeaderFile
#define _Entity_HeaderFile

class Entity {
public:

  //! Empty constructor -- does nothing
  Entity() {};

  //! Copy constructor -- does nothing
  Entity(const Entity&) {}

  //! Virtual destructor -- does nothing
  virtual ~Entity() {}

};

#endif // _Entity_HeaderFile