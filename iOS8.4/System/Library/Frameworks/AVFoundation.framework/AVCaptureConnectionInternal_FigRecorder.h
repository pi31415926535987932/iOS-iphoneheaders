/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableArray, AVCaptureOutput_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, AVCaptureInputPort_FigRecorder, NSArray;

@interface AVCaptureConnectionInternal_FigRecorder : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureOutput_FigRecorder* output;
	AVCaptureVideoPreviewLayer_FigRecorder* videoPreviewLayer;
	BOOL active;
	BOOL enabled;
	int outputChangeSeedOnDisable;
	AVCaptureInputPort_FigRecorder* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort_FigRecorder* videoInputPort;
	BOOL videoMirroringSupported;
	BOOL automaticallyAdjustsVideoMirroring;
	BOOL videoMirrored;
	BOOL videoOrientationSupported;
	long long videoOrientation;
	SCD_Struct_CM4 videoMinFrameDuration;
	SCD_Struct_CM4 videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	BOOL enablesVideoStabilizationWhenAvailable;
	BOOL videoStabilizationEnabled;
	BOOL preferredVideoStabilizationMode;

}
@end
