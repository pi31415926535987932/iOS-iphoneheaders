/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familycircled/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * participantID; 
@property (nonatomic,copy,readonly) NSString * shareID; 
@property (nonatomic,copy,readonly) NSString * zoneID; 
@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSString *)zoneID;
-(NSString *)shareID;
-(NSString *)bundleID;
-(NSString *)participantID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

