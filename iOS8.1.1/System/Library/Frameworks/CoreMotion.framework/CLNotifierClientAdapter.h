/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceClientProtocol.h>

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {

	CLNotifierClientBase* _client;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)onNotification:(int)arg1 withData:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(void)invalidate;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithClient:(CLNotifierClientBase*)arg1 ;
@end

