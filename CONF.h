#ifndef CONF_H
#define CONF_H

#include "types.h"

#define MAP_ROW 20
#define MAP_COLUMN 20

//robot configurations in metres
#define ROBOT_WHEEL_SIZE 5//in cm
#define ROBOT_SIZE 20 //in cm

/*directions of the vacuum (heading)*/
typedef enum
{
NORTH = 1,
WEST,
SOUTH,
EAST
}Heading;

/*values of directions*/
#define NORTH_VALUE 102
#define WEST_VALUE 219
#define SOUTH_VALUE 281
#define EAST_VALUE 333
#define ALLOWED_ANGLE_ERROR 5 

/*Cell values*/
enum CELL_STATE
{
	UNCOVERED = 0,
	BUSY,
	CLEANED,
	EMPTY
};

/*-----------Robot conf--------------*/
#define ROBOT_INIT_X		(MAP_ROW/2)
#define ROBOT_INIT_Y		(MAP_COLUMN/2)
#define ROBOT_INIT_THETA	0

/*----------Scan conf-------------*/
#define SCAN_ANGLE 30
#define FULL_SCAN_NUM (360/(SCAN_ANGLE*2))
#define SCAN_0_ANGLE 0
#define SCAN_30_ANGLE 1
#define SCAN_60_ANGLE 2
#define SCAN_90_ANGLE 3
#define SCAN_120_ANGLE 4
#define SCAN_150_ANGLE 5

/*--------------------CONTROLS-------------------------*/
#define ENABLE_SIMULATION
#undef DEBUG
#undef RECTANGLE
#undef USING_MAP_LIBRARY

/*----------------return types-------------------------*/
#define RET_NOT_OK 0
#define RET_OK 1

#endif

