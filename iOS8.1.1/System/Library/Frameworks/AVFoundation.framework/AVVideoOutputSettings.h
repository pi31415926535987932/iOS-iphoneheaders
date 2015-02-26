/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) NSDictionary * videoCompositionProcessorProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultVideoOutputSettings;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)pixelTransferProperties;
-(NSDictionary *)videoScalingProperties;
-(NSDictionary *)videoSettingsDictionary;
-(NSDictionary *)videoCompositionProcessorProperties;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSDictionary *)pixelAspectRatioDictionary;
-(NSDictionary *)cleanApertureDictionary;
-(BOOL)dimensionsAreBoundingBox;
-(int)width;
-(int)height;
@end
