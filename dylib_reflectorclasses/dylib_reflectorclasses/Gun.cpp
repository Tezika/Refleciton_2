//
//  Gun.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "Gun.h"

Gun::Gun(){};
Gun::~Gun(){};

void Gun::shoot(){
    cout<<"Gun shoot!"<<endl;
}

IMPLEMENT_CLASS(Gun);