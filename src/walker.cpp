/**
 *@file walker.cpp
 *@author Sri Manika Makam
 *@copyright MIT License
 *@brief Implements the Walker class fucntions
 */

/**
 *  MIT License
 *
 *  Copyright (c) 2019 Sri Manika Makam
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without
 *  limitation the rights to use, copy, modify, merge, publish, distribute,
 *  sublicense, and/or sell copies of the Software, and to permit persons to
 *  whom the Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be included
 *  in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

#include <iostream>
#include "roomba_robot/walker.h"

/**
 * @brief      Constructor of the Walker class
 */
Guidance::Guidance() {
  
}

/**
 * @brief      Destructor of the Walker class
 */
Guidance::~Guidance() {

}

/**
   * @brief      Callback function for LaserScan
   * @param      msg, constant pointer to store messages
   * @return     none
   */
void Walker::laserData(const sensor_msgs::LaserScan::ConstPtr& msg) {
}

/**
 * @brief      Function which returns the obstacle flag 
               The flag determines if the object is present or not
 * @param      none
 * @return     return of type bool. 
 *             1 if obstacle is detected, 0 otherwise
 */
bool Walker::ObstaclePresence() {
}

/**
 * @brief      Logic to run the robot after detecting an object
 * @param      none
 * @return     none
 */
void Walker::runRobot() {
	// Publish at a frequency of 10 Hz
     	ros::Rate loop(10);
     	// Run the loop until ros dies
    	while (ros::ok()) {
    	}
    	ros::spinOnce();
    	loop.sleep();
}
