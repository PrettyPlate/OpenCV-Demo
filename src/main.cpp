#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main()
{
    Mat in_image;
    // Usage： <cmd> <file_in> <file_out>
    //读取原始图像
    in_image = imread("../Lena.jpg");
    if (in_image.empty())
    {
        //检查是否读取图像
        cout << "Error! Input image cannot be read...\n";
        return -1;
    }
    //创建具有图像名称的窗口
    namedWindow("Lena", WINDOW_AUTOSIZE);
    //在之前创建的窗口中显示图片
    imshow("Lena", in_image);
    waitKey(0);
    return 0;
}


