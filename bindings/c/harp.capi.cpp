/*
* Chemharp, an efficient IO library for chemistry file formats
* Copyright (C) 2015 Guillaume Fraux
*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/
*/

// Public headers
#include "chemharp.h"
#include "Chemharp.hpp"

using namespace harp;

HARP_FRAME* harp_frame(const HARP_TRAJECTORY* file){
    return NULL;
}

int harp_frame_size(const HARP_FRAME* frame){
    return 0;
}

int harp_frame_positions(const HARP_FRAME* frame, float *positions[], const int size){
    return 0;
}

int harp_frame_velocities(const HARP_FRAME* frame, float *velocities[], const int size){
    return 0;
}

HARP_ATOM* harp_get_atom(const HARP_FRAME* frame, const int index){
    return NULL;
}

int harp_frame_delete(HARP_FRAME* frame){
    return 0;
}

/******************************************************************************/

float harp_get_mass(const HARP_ATOM* atom){
    return 0.0;
}

float harp_get_charge(const HARP_ATOM* atom){
    return 0.0;
}

float harp_get_radius(const HARP_ATOM* atom){
    return 0.0;
}

char* harp_get_name(const HARP_ATOM* atom, char* name, const int size){
    return NULL;
}

/******************************************************************************/

HARP_TRAJECTORY* harp_open(const char* filename){
    HARP_TRAJECTORY* file = NULL;
    try {
        file = new Trajectory(filename);
    }
    catch(harp::HarpError) {
        // TODO
    }
    return file;
}

int harp_read_step(const HARP_TRAJECTORY* file, const int step, HARP_FRAME* frame){
    return 0;
}

int harp_read_next_step(const HARP_TRAJECTORY* file, HARP_FRAME* frame){
    return 0;
}

int harp_close(HARP_TRAJECTORY* file){
    try {
        delete file;
    }
    catch(harp::HarpError) {
        // TODO
    }
    return 0;
}
