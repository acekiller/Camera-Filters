//
//  ImageFilter.h
//  Camera-Filters
//
//  Created by A1Brains Infotech on 11/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GPUImage.h"
#import "MGTileMenuController.h"
#import "AwesomeMenu.h"
#import "MapKit/MapKit.h"
typedef enum {
    GPUIMAGE_SATURATION,
    GPUIMAGE_CONTRAST,
    GPUIMAGE_BRIGHTNESS,
    GPUIMAGE_EXPOSURE,
    GPUIMAGE_RGB,
    GPUIMAGE_MONOCHROME,
    GPUIMAGE_SHARPEN,
    GPUIMAGE_UNSHARPMASK,
    GPUIMAGE_TRANSFORM,
    GPUIMAGE_TRANSFORM3D,
    GPUIMAGE_CROP,
	GPUIMAGE_MASK,
    GPUIMAGE_GAMMA,
    GPUIMAGE_TONECURVE,
    GPUIMAGE_HAZE,
    GPUIMAGE_SEPIA,
    GPUIMAGE_COLORINVERT,
    GPUIMAGE_GRAYSCALE,
    GPUIMAGE_HISTOGRAM,
    GPUIMAGE_THRESHOLD,
    GPUIMAGE_ADAPTIVETHRESHOLD,
    GPUIMAGE_PIXELLATE,
    GPUIMAGE_POLARPIXELLATE,
    GPUIMAGE_CROSSHATCH,
    GPUIMAGE_SOBELEDGEDETECTION,
    GPUIMAGE_PREWITTEDGEDETECTION,
    GPUIMAGE_CANNYEDGEDETECTION,
    GPUIMAGE_XYGRADIENT,
    GPUIMAGE_HARRISCORNERDETECTION,
    GPUIMAGE_NOBLECORNERDETECTION,
    GPUIMAGE_SHITOMASIFEATUREDETECTION,
    GPUIMAGE_BUFFER,
    GPUIMAGE_SKETCH,
    GPUIMAGE_TOON,
    GPUIMAGE_SMOOTHTOON,
    GPUIMAGE_TILTSHIFT,
    GPUIMAGE_CGA,
    GPUIMAGE_POSTERIZE,
    GPUIMAGE_CONVOLUTION,
    GPUIMAGE_EMBOSS,
    GPUIMAGE_KUWAHARA,
    GPUIMAGE_VIGNETTE,
    GPUIMAGE_GAUSSIAN,
    GPUIMAGE_GAUSSIAN_SELECTIVE,
    GPUIMAGE_FASTBLUR,
    GPUIMAGE_BOXBLUR,
    GPUIMAGE_MEDIAN,
    GPUIMAGE_BILATERAL,
    GPUIMAGE_SWIRL,
    GPUIMAGE_BULGE,
    GPUIMAGE_PINCH,
    GPUIMAGE_SPHEREREFRACTION,
    GPUIMAGE_STRETCH,
    GPUIMAGE_DILATION,
    GPUIMAGE_EROSION,
    GPUIMAGE_OPENING,
    GPUIMAGE_CLOSING,
    GPUIMAGE_PERLINNOISE,
    GPUIMAGE_VORONI,
    GPUIMAGE_MOSAIC,
    GPUIMAGE_DISSOLVE,
    GPUIMAGE_CHROMAKEY,
    GPUIMAGE_MULTIPLY,
    GPUIMAGE_OVERLAY,
    GPUIMAGE_LIGHTEN,
    GPUIMAGE_DARKEN,
    GPUIMAGE_COLORBURN,
    GPUIMAGE_COLORDODGE,
    GPUIMAGE_SCREENBLEND,
    GPUIMAGE_DIFFERENCEBLEND,
	GPUIMAGE_SUBTRACTBLEND,
    GPUIMAGE_EXCLUSIONBLEND,
    GPUIMAGE_HARDLIGHTBLEND,
    GPUIMAGE_SOFTLIGHTBLEND,
    GPUIMAGE_CUSTOM,
    GPUIMAGE_UIELEMENT,
    GPUIMAGE_FILECONFIG,
    GPUIMAGE_FILTERGROUP,
    GPUIMAGE_NUMFILTERS
} GPUImageShowcaseFilterType; 



@interface ImageFilter : UIViewController<UIGestureRecognizerDelegate,MGTileMenuDelegate,AwesomeMenuDelegate>{
    UIImage *imageView;
    GPUImageBrightnessFilter *brightness;
    GPUImageSharpenFilter *sharpen;
    GPUImageSepiaFilter *sepia;
    GPUImageSketchFilter *sketch;
    
    GPUImageUIElement *uiElementInput;
    
    GPUImageFilterPipeline *pipeline;
    IBOutlet GPUImageView *glImageView;
    GPUImageOutput<GPUImageInput> *filter;
    GPUImagePicture *sourcePicture;
    float gestureValue;
    float gestureIncrementValue;
    UIButton *sepiaButton;
    UIButton *brightnessButton;
    UIButton *sharpenButton;
    UIButton *sketchButton;
    UIButton *BludgeButton;
    UIButton *swirlButton;
    UIButton *stretchButton;
    UIButton *erosionButton;
    GPUImageShowcaseFilterType selectFilterValue;
    __unsafe_unretained UISlider *_filterSettingsSlider;
    UIGestureRecognizer *gesture_blur;
}
@property (nonatomic,strong)UIImage * imageView;
-(void)imageFilter:(UIImage*)image;
-(void)handlePinch:(UIPinchGestureRecognizer *)recognizer;
@property IBOutlet GPUImageView *glImageView;
-(void)addButtonsToView;
@property(readwrite, unsafe_unretained, nonatomic) IBOutlet UISlider *filterSettingsSlider;
@property (strong, nonatomic) MGTileMenuController *tileController;
@end
