#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

int main() {

    Mat image = imread("minions.jpg");   // Read the file
	if(image.empty()) {
		cout << "Open image failed." << endl;
		system("pause");
		return 0;
	}
	
	uchar *pixptr;
	for(int i = 0; i < image.rows; i++) {
		pixptr = image.ptr<uchar>(i);
		for(int j = 0; j < image.cols; j++) {
			pixptr[0] = pixptr[1] = pixptr[2] = (pixptr[0]*30 + pixptr[1]*59 + pixptr[2]*11)/100;
			pixptr += 3;
		}
	}
	imwrite("Result.png", image);
	namedWindow("Minion!", WINDOW_AUTOSIZE);
	imshow("Minion!", image);
	waitKey();
	return 0;
}

