#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iomanip> 
#include <conio.h>
#include <iostream>
using namespace std;
#include "String.hpp"
class Train {
	/*static int counter;*/
	int train_num;
	String name;
	int *vagon;
	int num_vagons;
public: Train(String _name = String(""), int _trainNum = 0, int _vagon = 0, int _numVagons)
	:name(_name), train_num(_trainNum), vagon(&_vagon), num_vagons(_numVagons)





};