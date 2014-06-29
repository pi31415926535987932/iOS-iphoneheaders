/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMetricsEventController, NSString;

@interface AnalyticsReportingOperation : ISOperation {

	SSMetricsEventController* _controller;
	NSString* _directory;
	/*^block*/ id _finishBlock;
	long long _insertTimestamp;

}

@property (copy) id finishBlock; 
-(id)_path;
-(void)setFinishBlock:(/*^block*/ id)arg1 ;
-(BOOL)_runForReportingURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBackoffAfterError:(id)arg1 ;
-(/*^block*/ id)finishBlock;
-(void)_destroyOutputFile:(id)arg1 ;
-(BOOL)_shouldClearEventsDespiteError:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)uniqueKey;
-(void)dealloc;
-(id)init;
-(void)run;
@end
