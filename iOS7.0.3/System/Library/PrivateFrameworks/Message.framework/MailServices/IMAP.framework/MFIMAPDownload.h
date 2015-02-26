/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MFCountingDataConsumer, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {

	unsigned long _uid;
	NSMutableArray* _pendingFetchResults;
	MFCountingDataConsumer* _countingConsumer;
	MFBaseFilterDataConsumer* _mainConsumer;

}

@property (nonatomic,readonly) MFBaseFilterDataConsumer * mainConsumer;              //@synthesize mainConsumer=_mainConsumer - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(unsigned long)uid;
-(id)initWithUid:(unsigned long)arg1 ;
-(unsigned)bytesFetched;
-(unsigned)consumerBytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned)lengthOfDataBeforeLineConversion;
-(id)mainConsumer;
-(BOOL)isComplete;
-(unsigned)expectedLength;
-(id)error;
@end
