/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:27:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXFaceDetection : NSObject
+(id)photoFaceWrappers:(id)arg1 ;
+(id)photoDescription:(id)arg1 withFaceCount:(int)arg2 ;
+(id)convertFCRFacesArrayToFaceWrappersArray:(id)arg1 sourceImageSize:(CGSize)arg2 activeCameraReturnsMirroredImage:(char)arg3 scale:(float)arg4 ;
+(id)sharedFaceDetector;
@end
