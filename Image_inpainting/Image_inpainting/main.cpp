#include<opencv2\opencv.hpp>
#include<iostream>
#include"Structure_propagation.h"
using namespace cv;
using namespace std;
void test(){
	//Mat a = imread("test1.jpg");
	Mat a = imread("2.png");
	Structure_propagation s(a);
	s.getMask();
	s.getCurves();
	s.getAnchors();
	s.drawAnchors();
	//s.testOneCurve();
	s.getNewStructure();
}
void test1() {
	Point2i p1(0, 0);
	Point2i p2(3, 3);
	Point2i p3(4, 0);
	Point2i p4(5, 6);
	Point2i p5(1, 1);
	Point2i p6(4, 2);

	Rect rec1(p1, p2);
	Rect rec2(p3, p4);
	Rect rec3(p5, p6);
	Rect inter = rec1 & rec2;
	Rect i = rec1 & rec3;
	cout << "";
}
int main() {
	test();
}
