#!/usr/bin/env python
#-*- coding:utf-8 -*-

import sys
from setuptools import setup, Extension

import pkgconfig
import numpy as np

opencv_pkg = pkgconfig.parse('opencv')

# module1 = Extension('demo',
# define_macros=[('MAJOR_VERSION', '1'),
# ('MINOR_VERSION', '0')],
# include_dirs=['/usr/local/include'] + x['include_dirs'],
# libraries=['tcl83'] + x['libraries'],
# library_dirs=['/usr/local/lib'],
# sources=['demo.c'])

# if sys.version_info.major == 3:
# hello_world = Extension('lc_hello_world', sources=["lc_hello3.c"])
# else:
# hello_world = Extension('lc_hello_world', sources=["lc_hello2.cpp"])
hs_fisheye = Extension('hs_fisheye',
                       define_macros=[('MAJOR_VERSION', '0'),
                                      ('MINOR_VERSION', '1')],
                       sources=["hs_fisheye.cpp"],
                       include_dirs=[np.get_include(), 'hs_sdk'] +
                       opencv_pkg['include_dirs'],
                       libraries=opencv_pkg['libraries'] + ['HYFisheyeExpand'],
                       library_dirs=['hs_sdk'])
setup(ext_modules=[hs_fisheye])
