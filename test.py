# import sys
# sys.path.append('build/lib.linux-x86_64-2.7')

import hs_fisheye
import cv2
img = cv2.imread("test_imgs/4.jpg")
print img.shape
cv2.imshow('img', img)
cv2.waitKey(0)
undist_type = 1
ii = hs_fisheye.image_undistortion(img, undist_type)
print ii.shape
cv2.imshow('img', ii)
cv2.waitKey(0)
(x,y,w,h) = hs_fisheye.point_projection(400,400,200,200, undist_type)
print x,y,w,h
(x,y,w,h) = hs_fisheye.point_projection(400,400,215,215, undist_type)
print x,y,w,h
(x,y,w,h) = hs_fisheye.point_projection(300,300,315,315, undist_type)
print x,y,w,h
# print rect
# lc_hello_world.example(1)
