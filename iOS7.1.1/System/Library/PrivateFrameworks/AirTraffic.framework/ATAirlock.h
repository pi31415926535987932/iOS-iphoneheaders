/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager;

@interface ATAirlock : NSObject {

	NSFileManager* _fm;

}
+(id)sharedInstance;
+(id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2 ;
+(id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2 ;
+(id)pathForDataclass:(id)arg1 ;
-(void)createAirlockForDataclasses:(id)arg1 ;
-(void)evacuateDataclasses:(id)arg1 ;
-(void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 ;
-(void)copyAssetToAirlock:(id)arg1 ;
-(void)handleCompletedAsset:(id)arg1 ;
@end
