/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MNBannerView <SBUIBannerView>
@property (nonatomic,readonly) SBUIBannerContext * bannerContext; 
@property (nonatomic,readonly) MNBannerItem * bannerItem; 
@required
-(id)bannerContext;
-(id)bannerItem;
-(void)updateDistanceTextFromItem;
-(id)initWithContext:(id)arg1;
@end
