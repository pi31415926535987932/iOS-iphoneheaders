/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:45:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriModelObject.h>

@interface AFSetting : AFSiriModelObject {

	int _type;
	id _value;

}

@property (assign,nonatomic) int type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)value;
-(void)setValue:(id)arg1 ;
@end
