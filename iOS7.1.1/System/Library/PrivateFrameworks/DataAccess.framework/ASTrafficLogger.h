/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject {

	NSFileHandle* _lookasideFileHandle;
	NSString* _lookasideFilePath;
	bool _isOutgoingTraffic;
	bool _didFlushLogs;

}

@property (assign,nonatomic) bool isOutgoingTraffic;              //@synthesize isOutgoingTraffic=_isOutgoingTraffic - In the implementation block
+(id)_logQueue;
-(void)dealloc;
-(void)_moveLogFileContentsAtPath:(id)arg1 ;
-(void)_openLookasideFile;
-(bool)isOutgoingTraffic;
-(void)setIsOutgoingTraffic:(bool)arg1 ;
-(void)logWBXMLData:(id)arg1 ;
-(void)flushLogs;
-(void)logPlainTextData:(id)arg1 ;
@end
