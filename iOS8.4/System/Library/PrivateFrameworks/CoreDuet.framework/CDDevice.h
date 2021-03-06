/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDDevice : NSObject {

	CDSession* _session;
	int remoteDataNotificationToken;
	unsigned _identifier;
	NSString* _modelIdentifier;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (readonly) CDSession * session;                     //@synthesize session=_session - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(CDSession *)session;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 ;
-(BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(BOOL)requestLogDataWithError:(id*)arg1 ;
-(NSString *)modelIdentifier;
@end

