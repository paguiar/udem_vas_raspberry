/*
	(Ab)using preprocessor conditionals wherever it is possible,
	produces faster code with less branches. Recompilation is the trade-off.
 */

#ifndef BUILDFLAGS_H_
#define BUILDFLAGS_H_

 #define IMG_W 		174
 #define IMG_H 		144
 #define IMG_BPP	2
 #define OUT_NC		0
 #define SLOPE_OUTPUT	0

 #define DEBUG		0
 #define PRINT_TIME	0

 #define TRIG_LOOKUP	1
 #define GRAY_GRN	0
 #define GRAY_AVG	1
 #define BRIGHTSIDE	1
 #define SANITY_CHECKS	0


 /* These are constants and should probably be defined as such instead */
 #define LINES_INITIAL	20
 #define LINES_FACTOR	5

 #define DRAW_INPUT     1
 #define DRAW_OUTPUT	0
 #define SDL_USED	DRAW_INPUT | DRAW_OUTPUT

 #define OV7670		1
 #define OV_EXTRA	64
 #define USBSTREAM	0
 #define LOCALSTREAM	0
 #define JPEGALLOC	131072
#endif
