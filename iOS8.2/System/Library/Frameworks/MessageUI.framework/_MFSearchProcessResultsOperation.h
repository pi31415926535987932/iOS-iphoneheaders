/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;
@interface _MFSearchProcessResultsOperation : NSOperation {

	id<_MFSearchResultsConsumer> _consumer;
	unsigned _type;
	/*^block*/id _completionBlock;

}
+(id)operationWithResultsOfType:(unsigned)arg1 completion:(/*^block*/id)arg2 consumer:(id)arg3 ;
-(void)dealloc;
-(void)main;
@end

