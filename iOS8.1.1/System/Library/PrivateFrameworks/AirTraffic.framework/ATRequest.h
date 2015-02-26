/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <AirTraffic/NSSecureCoding.h>

@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,copy) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(NSString *)command;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)partialResponseWithParameters:(id)arg1 ;
-(id)additionalDescription;
-(id)responseWithError:(id)arg1 parameters:(id)arg2 ;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3 ;
-(void)setCommand:(NSString *)arg1 ;
@end
