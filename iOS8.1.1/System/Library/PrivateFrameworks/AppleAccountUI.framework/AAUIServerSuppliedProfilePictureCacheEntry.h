/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, UIImage, NSString;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {

	NSDate* _expirationDate;
	BOOL _updating;
	UIImage* _picture;
	NSString* _serverCacheTag;

}

@property (nonatomic,retain) UIImage * picture;                    //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (assign,nonatomic) BOOL updating;                        //@synthesize updating=_updating - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(id)description;
-(void)expire;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(UIImage *)picture;
-(BOOL)expired;
@end
