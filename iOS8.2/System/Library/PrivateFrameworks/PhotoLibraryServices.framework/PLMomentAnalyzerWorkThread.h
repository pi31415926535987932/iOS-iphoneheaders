/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSPort;

@interface PLMomentAnalyzerWorkThread : NSThread {

	NSPort* _dummyPort;

}
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)main;
-(void)removeDummyPort;
@end
