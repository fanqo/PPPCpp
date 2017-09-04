#!/bin/bash
# used for the convenience for compling codes
# only can handle one cpp file, the code is dirty but usable 
# Example: cc.sh 01.cpp
script_path=$(dirname $0)
g++ -std=c++11 -lfltk -lfltk_images $1 ${script_path}/../Simple_window.o ${script_path}/../Graph.o ${script_path}/../GUI.o ${script_path}/../Window.o
