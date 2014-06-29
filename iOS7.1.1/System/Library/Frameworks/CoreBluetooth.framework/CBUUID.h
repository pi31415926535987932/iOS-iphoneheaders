/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	NSData* _data;
	NSRange _range;

}

@property (nonatomic,@dynamic,readonly) NSData * data; 
@property (nonatomic,@dynamic,readonly) NSString * UUIDString; 
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(void)initialize;
+(id)UUIDWithString:(id)arg1 ;
+(id)UUIDWithData:(id)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)UUIDString;
@end
