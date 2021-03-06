/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface ATCountSessionTask : ATSessionTask {

	unsigned _maxCount;
	unsigned _count;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)start;
-(id)initWithMaximumCount:(unsigned)arg1 ;
@end

