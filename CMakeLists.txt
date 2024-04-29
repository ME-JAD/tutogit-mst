cmake_minimum_required(VERSION 3.27)
project(tutogit C)

set(CMAKE_C_STANDARD 11)

add_executable(tutogit main.c
        IHMHugeNumber/ScanHugeNumber.c
        IHMHugeNumber/ScanHugeNumber.h
        IHMHugeNumber/ShowHugeNumber.c
        IHMHugeNumber/ShowHugeNumber.h)
