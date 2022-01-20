## BmpToRaw

The BmpToRaw library is used to convert .bmp format to .raw format. The .raw format is a format used to provide previews in the osf format. There are a few things to be aware of:

- Currently only 24bit bmp images are supported as input
- osf format relies on vlare core. Currently, the preview resolutions supported by the hardware are as follows:
	- 148x80
	- 300x140
	- 208x116
	- 404x240

Include the bitmap.h header file in your project, and use the code method to generate the corresponding format.

```c++
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
        bmp_img.save("result.raw");
    }
    return 0;
}


```