// Created on: 2000-10-02
// Created by: Dmitry Pasukhin
// Copyright (c) 2020-2020 Dmitry Pasukhin
//
// This file is part of task CAD Exchanger

#include "Geom2d_Entity.hxx"

Geom2d_Entity::Geom2d_Entity() {}

void Geom2d_Entity::Init(const string& theName)
{
  myName = theName;
}

void Geom2d_Entity::SetName(const string& theName)
{
  myName = theName;
}

string Geom2d_Entity::Name() const
{
  return myName;
}
