#include <vector>
#include <iostream>

#include "bitmap.h"

using namespace std;

int main()
{
    Bitmap bmp_img;
    vector<vector <Pixel> > bmp_data;
    Pixel rgb;
    bmp_img.open("test.bmp");
    bool valid_bmp = bmp_img.isImage();
    if(valid_bmp)
    {
        bmp_data = bmp_img.toPixelMatrix();

        rgb = bmp_data[0][0];
        rgb.red = 0;

        bmp_data[0][0] = rgb;
        bmp_img.fromPixelMatrix(bmp_data);
        bmp_img.save("result.raw");
    }
    return 0;
}
