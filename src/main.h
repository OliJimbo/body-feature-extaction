#ifndef __MAIN_H__
#define __MAIN_H__

#include "/usr/local/include/opencv2/opencv.hpp"
#include "/usr/local/include/opencv2/highgui/highgui.hpp"
#include "/usr/local/include/opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <vector>
#include <fstream>

/*
 * converttobinary.h    转原图为黑白二值图
 * shoulderwidth.h      求肩宽
 * side_height.h        从侧面图，求人体身高
 * armpoint.h           求胳膊分叉点的坐标 [ 左胳膊 + 右胳膊 ]
 * bodypostion.h        将人体结构分区 [ head、neck、armpit、hand、legpoint、foot ]
 * waist.h              测量人体腰围
 */

#include "converttobinary.h"
#include "shoulderwidth.h"
#include "side_height.h"
#include "bodyposition.h"
#include "point_gradient.h"
#include "waist.h"

using namespace std;

cv::Mat show(cv::Mat edge, int x, int y);

#endif // #define __MAIN_H__
