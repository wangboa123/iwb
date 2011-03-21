/* 
 * File:   touchable.hpp
 * Author: fishi, cers
 *
 * Created on Štvrtok, 2011, marec 17, 16:01
 */

#ifndef TOUCHABLE_HPP
#define	TOUCHABLE_HPP

#include "drawable.hpp"
#include <opencv/cv.h>

// These values need tweaking
#define STD_THRESHOLD 200
#define INTERACTION_TRIGGER CLOCKS_PER_SEC

namespace iwb {
    /**
     * Base method for everything that can be touched on the whiteboard.
     */
    class Touchable : public Drawable {
    protected:
        CvPoint cameraUL;
        CvPoint cameraBR;
        int getCameraWidth();
        int getCameraHeight();
        void (*action)(void);
        int interaction;
        int threshold;
    public:
<<<<<<< HEAD
        Touchable(char* imagePath, CvPoint projectorUL, CvPoint projectorBR, 
                  CvPoint cameraUL, CvPoint cameraBR, void (*action)(void), 
                  int threshold);
=======
        Touchable(const char* imagePath, CvPoint projectorUL, CvPoint projectorBR, CvPoint cameraUL, CvPoint cameraBR);
>>>>>>> 0ad4087dab7e62ce8133a2a3dfc4996c93c9f676
        ~Touchable();
        void detectTouch(IplImage* mask);
    };
}

#endif	/* TOUCHABLE_HPP */
