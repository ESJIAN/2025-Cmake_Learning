#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char **argv)
{
    Mat src = imread("C:/Users/1/Desktop/Dingtalk_20231106234753.jpg");
    if (src.empty())
    {
        printf("no image ");
        return -1;
    }
    else
    {
        namedWindow("input", WINDOW_AUTOSIZE);
        imshow("input", src);
        waitKey(0);
        destroyAllWindows();
        return 0;
    }
}