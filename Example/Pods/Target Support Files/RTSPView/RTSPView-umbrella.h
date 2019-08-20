#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NRTSPView.h"
#import "RTSPView.h"
#import "EzloRTSPView.h"
#import "KxAudioManager.h"
#import "KxLogger.h"
#import "KxMovieDecoder.h"
#import "KxMovieGLView.h"
#import "KxMovieViewController.h"

FOUNDATION_EXPORT double RTSPViewVersionNumber;
FOUNDATION_EXPORT const unsigned char RTSPViewVersionString[];

