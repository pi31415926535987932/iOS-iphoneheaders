/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VUCategory : NSObject {

	NSString* _displayName;
	id _value;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
+(id)categoryWithDisplayName:(id)arg1 value:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(NSString *)displayName;
@end

